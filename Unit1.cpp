//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "System.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1* Form1;
bool ordered = false;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject* Sender)
{
    if (ComboBox1->ItemIndex == 0) {
        ADOQuery1->Edit();
        Form2->ShowModal();
    } else {
        ADOQuery2->Edit();
        Form3->ShowModal();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject* Sender)
{
	if (MessageDlg("Маълумотни ўчирмокчимисиз?", mtConfirmation,
            TMsgDlgButtons() << mbYes << mbCancel, 0) == mrYes)
    {
        if (ComboBox1->ItemIndex == 0)
            ADOQuery1->Delete();
        else if (ComboBox1->ItemIndex == 1)
            ADOQuery2->Delete();
	}
	Form4->BitBtn1->Click();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject* Sender)
{
	int kurs = StrToInt(Edit1->Caption) * 10;
    int soni = 0, foydasi = 0;
    //	unsigned short y1, m1, d1, y2, m2, d2;
    //	TDateTime data1, data2;
    //	data1 = StrToDate("16.07.2002");
    //	data2 = StrToDate("17.07.2002");
    //	data1.DecodeDate(&y1, &m1, &d1);
    //	data2.DecodeDate(&y2, &m2, &d2);

    if (ComboBox1->ItemIndex == 0) {
        ADOQuery1->Active = False;
        ADOQuery1->Active = True;

		DBGrid1->Columns->Items[0]->Width = 200;
		DBGrid1->Columns->Items[1]->Width = 60;
		DBGrid1->Columns->Items[2]->Width = 60;
		DBGrid1->Columns->Items[3]->Width = 50;
		DBGrid1->Columns->Items[4]->Width = 75;
		DBGrid1->Columns->Items[5]->Width = 100;
		DBGrid1->Columns->Items[6]->Width = 100;
		DBGrid1->Columns->Items[7]->Width = 200;
		DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
		DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
		DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
		DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
		DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
		DBGrid1->Columns->Items[5]->Title->Caption = "Нархи";
		DBGrid1->Columns->Items[6]->Title->Caption = "Санаси";
		DBGrid1->Columns->Items[7]->Title->Caption = "Суммаси";
		ADOQuery1->First();
		while (!ADOQuery1->Eof) {
			ADOQuery1->Edit();
			ADOQuery1->FieldByName("Summasi")->Value =
				ADOQuery1->FieldByName("Eni")->AsFloat *
				ADOQuery1->FieldByName("Boyi")->AsFloat *
				ADOQuery1->FieldByName("Soni")->AsFloat *
				ADOQuery1->FieldByName("m_kv_narxi")->AsFloat * kurs;
			ADOQuery1->Next();
		}
	} else {
		ADOQuery2->Active = false;
		ADOQuery2->Active = true;
		DBGrid1->Columns->Items[0]->Width = 155;
		DBGrid1->Columns->Items[1]->Width = 60;
		DBGrid1->Columns->Items[2]->Width = 60;
		DBGrid1->Columns->Items[3]->Width = 65;
		DBGrid1->Columns->Items[4]->Width = 73;
		DBGrid1->Columns->Items[5]->Width = 73;
		DBGrid1->Columns->Items[6]->Width = 144;
		DBGrid1->Columns->Items[7]->Width = 100;
		DBGrid1->Columns->Items[8]->Width = 110;

		DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
		DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
		DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
		DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
		DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
		DBGrid1->Columns->Items[5]->Title->Caption = "Нархи";
		DBGrid1->Columns->Items[6]->Title->Caption = "Сотилган Нархи";
		DBGrid1->Columns->Items[7]->Title->Caption = "Санаси";
		DBGrid1->Columns->Items[8]->Title->Caption = "Фойдаси";
		ADOQuery2->First();
		while (!ADOQuery2->Eof) {
            ADOQuery2->Edit();
            ADOQuery2->FieldByName("Foydasi")->Value =
                ADOQuery2->FieldByName("Sotilgan_narxi")->AsFloat -
                ADOQuery2->FieldByName("Eni")->AsFloat *
                    ADOQuery2->FieldByName("Boyi")->AsFloat *
					ADOQuery2->FieldByName("Soni")->AsFloat *
					ADOQuery2->FieldByName("m_kv_narxi")->AsFloat * kurs;
            ADOQuery2->Next();
        }
	}
	ADOQuery3->SQL->Clear();
	ADOQuery3->Active=false;
	UnicodeString sana = Date();
	sana[3]='.';
	sana[6]='.';
	ADOQuery3->SQL->Add("Select Soni, Foydasi From Chiqim Where Sanasi=#" + FormatDateTime("yyyy-mm-dd", Date())+"#");
	ADOQuery3->Active=true;
	ADOQuery3->First();
	while(!ADOQuery3->Eof){
		soni += ADOQuery2->FieldByName("Soni")->AsInteger;
		foydasi += ADOQuery2->FieldByName("Foydasi")->AsInteger;
		ADOQuery3->Next();
	}

    Label7->Caption = IntToStr(soni);
    Label9->Caption = IntToStr(foydasi);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject* Sender)
{
    Panel3->Visible = ComboBox1->ItemIndex;
    switch (ComboBox1->ItemIndex) {
        case 0:
            DBGrid1->DataSource = DataSource1;
            break;
        case 1:
            DBGrid1->DataSource = DataSource2;
            break;
        default:
            break;
    }
    BitBtn1->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject* Sender)
{
    ADOQuery1->Insert();
    Form2->ShowModal();
    Form2->DBEdit7->Text = Date();
    Form2->DBEdit1->Text = "Гилам";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject* Sender)
{
    int temp = 0;
    ADOQuery2->Insert();
    Form3->DBComboBox1->Items->Clear();
    Form3->DBComboBox3->Items->Clear();
    Form3->DBComboBox4->Items->Clear();
    Form3->DBComboBox6->Items->Clear();
    Form4->ADOQuery1->First();
    while (!Form4->ADOQuery1->Eof) {
        if (Form3->DBComboBox1->Items->IndexOf(
                Form4->ADOQuery1->FieldByName("Nomi")->AsString) == -1)
            Form3->DBComboBox1->Items->AddObject(
                Form4->ADOQuery1->FieldByName("Nomi")->AsString,
                (TObject*)temp);
        if (Form3->DBComboBox3->Items->IndexOf(
                Form4->ADOQuery1->FieldByName("Eni")->AsString) == -1)
            Form3->DBComboBox3->Items->AddObject(
                Form4->ADOQuery1->FieldByName("Eni")->AsString, (TObject*)temp);
        if (Form3->DBComboBox4->Items->IndexOf(
                Form4->ADOQuery1->FieldByName("Boyi")->AsString) == -1)
            Form3->DBComboBox4->Items->AddObject(
                Form4->ADOQuery1->FieldByName("Boyi")->AsString,
                (TObject*)temp);
        if (Form3->DBComboBox6->Items->IndexOf(
                Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString) == -1)
            Form3->DBComboBox6->Items->AddObject(
                Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString,
                (TObject*)temp++);
        Form4->ADOQuery1->Next();
    }
    Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject* Sender)
{
    BitBtn3->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject* Sender)
{
    BitBtn2->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject* Sender)
{
	BitBtn4->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N8Click(TObject* Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCloseQuery(TObject* Sender, bool &CanClose)
{
    if (MessageDlg("Дастурдан чикмокчимисиз", mtConfirmation,
            TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
    {
        CanClose = true;
    } else {
        CanClose = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid1TitleClick(TColumn* Column)
{ //ShowMessage(BoolToStr(ordered));
    AnsiString s = Column->Field->FullName;
    if (ComboBox1->ItemIndex == 0) {
        //ADOQuery1->Active = false;
        ADOQuery1->SQL->Clear();
        ADOQuery1->SQL->Add("Select * from Kirim ");
        ADOQuery1->SQL->Add("Order by " + s);
        if (ordered)
            ADOQuery1->SQL->Append(" DESC;");
        ordered = !ordered;
        ADOQuery1->ExecSQL();
        ADOQuery1->SQL->SaveToFile("1.txt");
        ADOQuery1->Active = true;

    }
    if (ComboBox1->ItemIndex == 1) {
        //ADOQuery2->Active = false;
        ADOQuery2->SQL->Clear();
        ADOQuery2->SQL->Add("SELECT * FROM Chiqim ORDER BY " + s + " ");
        if (ordered)
            ADOQuery2->SQL->Append("DESC;");
        ordered = !ordered;
        ADOQuery2->ExecSQL();
		ADOQuery2->Active = true;
	}
	        if (ComboBox1->ItemIndex == 0) {
            DBGrid1->Columns->Items[0]->Width = 200;
            DBGrid1->Columns->Items[1]->Width = 60;
            DBGrid1->Columns->Items[2]->Width = 60;
            DBGrid1->Columns->Items[3]->Width = 50;
            DBGrid1->Columns->Items[4]->Width = 75;
            DBGrid1->Columns->Items[5]->Width = 100;
            DBGrid1->Columns->Items[6]->Width = 100;
            DBGrid1->Columns->Items[7]->Width = 200;
            DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
            DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
            DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
            DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
            DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
            DBGrid1->Columns->Items[5]->Title->Caption = "м кв. Нархи";
            DBGrid1->Columns->Items[6]->Title->Caption = "Санаси";
            DBGrid1->Columns->Items[7]->Title->Caption = "Суммаси";
        } else {
            DBGrid1->Columns->Items[0]->Width = 155;
            DBGrid1->Columns->Items[1]->Width = 60;
            DBGrid1->Columns->Items[2]->Width = 60;
            DBGrid1->Columns->Items[3]->Width = 65;
            DBGrid1->Columns->Items[4]->Width = 73;
            DBGrid1->Columns->Items[5]->Width = 73;
            DBGrid1->Columns->Items[6]->Width = 144;
            DBGrid1->Columns->Items[7]->Width = 100;
            DBGrid1->Columns->Items[8]->Width = 110;

            DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
            DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
            DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
            DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
            DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
            DBGrid1->Columns->Items[5]->Title->Caption = "Нархи";
            DBGrid1->Columns->Items[6]->Title->Caption = "Сотилган Нархи";
            DBGrid1->Columns->Items[7]->Title->Caption = "Санаси";
            DBGrid1->Columns->Items[8]->Title->Caption = "Фойдаси";
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject* Sender)
{
    Label3->Caption = TimeToStr(Now());
    Label5->Caption = Date();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject* Sender)
{
    BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject* Sender)
{
	Form4->Show();
    Form4->BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject* Sender)
{
    ADOTable1->Edit();
    Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject* Sender)
{
    N2->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject* Sender)
{
    N1->Click();
} /*
bool __fastcall find_items(TDBComboBox *k, AnsiString s, int temp){

	bool l = false;
	for (int i = -1; i < temp; i++) {
	if (k->Items- == s){ l = true;  return true; }
	}
	return false;
}  */
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject* Sender)
{
    BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject* Sender)
{
    String Prog = "calc.exe";
    ShellExecute(NULL, L"open", Prog.c_str(), NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N18Click(TObject *Sender)
{
    Form6->Show();
}
//---------------------------------------------------------------------------

