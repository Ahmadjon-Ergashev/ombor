//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
bool ordered = false;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender)
{
if (ComboBox1->ItemIndex == 0) {
ADOQuery1 -> Edit();
Form2 ->ShowModal();
}
else
{
ADOQuery2 -> Edit();
Form3 ->ShowModal();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
if (MessageDlg("Маълумотни ўчирмокчимисиз?", mtConfirmation, TMsgDlgButtons() << mbYes << mbCancel, 0) == mrYes) {
if (ComboBox1->ItemIndex == 0)  ADOQuery1 -> Delete(); else
if (ComboBox1->ItemIndex == 1)  ADOQuery2->Delete();
}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{   int kurs = StrToInt(Edit1->Caption)*10;
	int soni = 0, foydasi = 0;
if (ComboBox1->ItemIndex == 0) {
	ADOQuery1 -> Active = False;
	ADOQuery1 -> Active = True;

	ADOQuery1->First();
	while (!ADOQuery1->Eof) { ADOQuery1->Edit();
	ADOQuery1->FieldByName("Summasi")->Value=ADOQuery1->FieldByName("Eni")->AsFloat *
	ADOQuery1->FieldByName("Boyi")->AsFloat * ADOQuery1->FieldByName("Soni")->AsFloat *
	ADOQuery1->FieldByName("m_kv_narxi")->AsFloat * kurs;
	ADOQuery1->Next();
	}
	}
else {
	ADOQuery2 ->Active = false;
	ADOQuery2 ->Active = true;

	ADOQuery2->First();
	while (!ADOQuery2->Eof) {  ADOQuery2->Edit();

	ADOQuery2->FieldByName("Foydasi")->Value = ADOQuery2->FieldByName("Sotilgan_narxi")->AsFloat -
	ADOQuery2->FieldByName("Eni")->AsFloat*ADOQuery2->FieldByName("Boyi")->AsFloat*
	ADOQuery2->FieldByName("Soni")->AsFloat*ADOQuery2->FieldByName("m_kv_narxi")->AsFloat*kurs;
	soni += ADOQuery2->FieldByName("Soni")->AsInteger;
	foydasi += ADOQuery2->FieldByName("Foydasi")->AsInteger;
	ADOQuery2->Next();
	}
}
	Label7->Caption = IntToStr(soni);
	Label9->Caption = IntToStr(foydasi);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
Panel3->Visible = ComboBox1 -> ItemIndex;
switch (ComboBox1 -> ItemIndex) {
case 0 : DBGrid1->DataSource = DataSource1; break;
case 1 : DBGrid1->DataSource = DataSource2; break;
default: break;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
ADOQuery1->Insert();
Form2 -> ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{    int temp = 0;
ADOQuery2->Insert();
Form3->DBComboBox1->Items->Clear();
Form3->DBComboBox2->Items->Clear();
Form3->DBComboBox3->Items->Clear();
Form3->DBComboBox4->Items->Clear();
Form3->DBComboBox6->Items->Clear();
Form4->ADOQuery1->First();
while (!Form4->ADOQuery1->Eof){
	if (Form3->DBComboBox1->Items->IndexOf(Form4->ADOQuery1->FieldByName("Nomi")->AsString)==-1)
	   Form3->DBComboBox1->Items->AddObject(Form4->ADOQuery1->FieldByName("Nomi")->AsString,
	(TObject*)temp);
	if (Form3->DBComboBox2->Items->IndexOf(Form4->ADOQuery1->FieldByName("Turi")->AsString)==-1)
		Form3->DBComboBox2->Items->AddObject(Form4->ADOQuery1->FieldByName("Turi")->AsString,
	(TObject*)temp);
	if (Form3->DBComboBox3->Items->IndexOf(Form4->ADOQuery1->FieldByName("Eni")->AsString)==-1)
		Form3->DBComboBox3->Items->AddObject(Form4->ADOQuery1->FieldByName("Eni")->AsString,
	(TObject*)temp);
	if (Form3->DBComboBox4->Items->IndexOf(Form4->ADOQuery1->FieldByName("Boyi")->AsString)==-1)
		Form3->DBComboBox4->Items->AddObject(Form4->ADOQuery1->FieldByName("Boyi")->AsString,
	(TObject*)temp);
	if (Form3->DBComboBox6->Items->IndexOf(Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString)==-1)
		Form3->DBComboBox6->Items->AddObject(Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString,
	(TObject*)temp++);
	Form4->ADOQuery1->Next();
}
Form3 ->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
BitBtn3->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
BitBtn2->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
BitBtn4->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCloseQuery(TObject *Sender, bool &CanClose)
{
if (MessageDlg("Дастурдан чикмокчимисиз",mtConfirmation, TMsgDlgButtons()<< mbYes << mbNo, 0) == mrYes)
  {
		CanClose = true;
  }
  else
  {
		CanClose = false;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{ //ShowMessage(BoolToStr(ordered));
AnsiString s = Column->Field->FullName;
if (ComboBox1->ItemIndex == 0) {
	//ADOQuery1->Active = false;
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * from Kirim ");
	ADOQuery1->SQL->Add("Order by " + s);
	if (ordered) ADOQuery1->SQL->Append(" DESC;");
	ordered = !ordered;
	ADOQuery1->ExecSQL();
	ADOQuery1->SQL->SaveToFile("1.txt");
	ADOQuery1->Active = true;
	return;
}
if (ComboBox1->ItemIndex == 1)
{
	//ADOQuery2->Active = false;
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("SELECT * FROM Chiqim ORDER BY " + s + " ");
	if (ordered) ADOQuery2->SQL->Append("DESC;");
	ordered = !ordered;
	ADOQuery2->ExecSQL();
	ADOQuery2->Active = true;
    return;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Label3->Caption = TimeToStr(Now());
Label5->Caption = Date();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
Form4->ShowModal();
Form4->BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject *Sender)
{
ADOTable1->Edit();
Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
N2->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
N1->Click();
}/*
bool __fastcall find_items(TDBComboBox *k, AnsiString s, int temp){

	bool l = false;
	for (int i = -1; i < temp; i++) {
	if (k->Items- == s){ l = true;  return true; }
	}
	return false;
}  */
//---------------------------------------------------------------------------


