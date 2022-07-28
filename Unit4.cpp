//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "string.h"
#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4* Form4;
bool ordered;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

UnicodeString FtoS(double n) {
	UnicodeString s = "", a = FloatToStr(n);
	for (int i = 1; i <= a.Length(); i++) {
        if (a[i] == ',') {
            s+=".";
        } else
            s += a[i];
    }
    return s;
}

void __fastcall TForm4::BitBtn1Click(TObject* Sender)
{
	ADOQuery1->Active=false;
	ADOQuery1->Active=true;
	ADOQuery2->Active = false;
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("Select Sum(Soni) As Soni, Sum(Umumiy_m_kv) As m_kv, Sum(Summasi) As Summasi From Holat");
	ADOQuery2->Active = true;
	ADOQuery2->First();
	Label3->Caption=ADOQuery2->FieldByName("Soni")->AsString;
	Label9->Caption=ADOQuery2->FieldByName("Summasi")->AsString;
	Label10->Caption=ADOQuery2->FieldByName("m_kv")->AsString;
//    Form1->ADOQuery1->Active = false;
//    Form1->ADOQuery2->Active = false;
//	ADOQuery1->First();
//    while (!ADOQuery1->Eof) {
//        ADOQuery1->Delete();
//    }
//    ADOQuery2->Active = false;
//    ADOQuery2->SQL->Clear();
//    ADOQuery2->SQL->Add(
//		"(SELECT Nomi, Eni, Boyi, m_kv_narxi, Turi FROM Holat WHERE Turi='дона' UNION SELECT Nomi, Eni, Boyi, m_kv_narxi, Turi FROM Kirim WHERE Turi='дона') UNION (SELECT Nomi, Eni, 0, m_kv_narxi, Turi FROM Holat WHERE Turi='метр' UNION SELECT Nomi, Eni, 0, m_kv_narxi, Turi FROM Kirim WHERE Turi='метр')");
//	ADOQuery2->Active = true;
//	ADOQuery2->First();
//	while (!ADOQuery2->Eof) {
//		ADOQuery1->Insert();
//        ADOQuery1->FieldByName("Nomi")->Value =
//			ADOQuery2->FieldByName("Nomi")->AsString;
//		ADOQuery1->FieldByName("Eni")->Value =
//			ADOQuery2->FieldByName("Eni")->AsFloat;
//		ADOQuery1->FieldByName("Boyi")->Value =
//			ADOQuery2->FieldByName("Boyi")->AsFloat;
//		ADOQuery1->FieldByName("Soni")->Value = 0;
//		ADOQuery1->FieldByName("Turi")->Value =
//			ADOQuery2->FieldByName("Turi")->AsString;
//		ADOQuery1->FieldByName("m_kv_narxi")->Value =
//            ADOQuery2->FieldByName("m_kv_narxi")->AsFloat;
//        ADOQuery1->FieldByName("Summasi")->Value = 0;
//		ADOQuery2->Next();
//        ADOQuery1->Post();
//    }
//
//    ADOQuery1->First();
//    UnicodeString nomi, turi;
//	int son = 0;
//
//	double eni, boyi, narxi, qiymat = 0;
//
//    while (!ADOQuery1->Eof) {
//        nomi = ADOQuery1->FieldByName("Nomi")->AsString;
//		turi = ADOQuery1->FieldByName("Turi")->AsString;
//		eni = ADOQuery1->FieldByName("Eni")->AsFloat;
//		boyi = ADOQuery1->FieldByName("Boyi")->AsFloat;
//		narxi = ADOQuery1->FieldByName("m_kv_narxi")->AsFloat;
//		ADOQuery2->Active = false;
//		ADOQuery2->SQL->Clear();
//        ADOQuery2->SQL->Add(
//            "SELECT Nomi, Eni, Boyi, m_kv_narxi, Soni, Turi FROM Kirim ");
//        if (turi == "дона") {
//			ADOQuery2->SQL->Add("WHERE Nomi='" + nomi + "' AND Eni=" + FtoS(eni) +
//							" AND Boyi=" + FtoS(boyi) + " AND m_kv_narxi=" + FtoS(narxi) +
//							" AND Turi='" + turi + "';");
//		}
//		else{
//			ADOQuery2->SQL->Add("WHERE Nomi='" + nomi + "' AND Eni=" + FtoS(eni) +
//							" AND m_kv_narxi=" + FtoS(narxi) +
//							" AND Turi='" + turi + "';");
//		}
//		ADOQuery2->Active = true;
//        ADOQuery2->First();
//		while (!ADOQuery2->Eof) {
//            ADOQuery1->Edit();
//            if (ADOQuery2->FieldByName("Turi")->AsString == "дона") {
//                ADOQuery1->FieldByName("Soni")->Value =
//                    ADOQuery1->FieldByName("Soni")->AsInteger +
//                    ADOQuery2->FieldByName("Soni")->AsInteger;
//            } else {
//                ADOQuery1->FieldByName("Boyi")->Value =
//					ADOQuery1->FieldByName("Boyi")->AsFloat +
//					ADOQuery2->FieldByName("Boyi")->AsFloat;
//                ADOQuery1->FieldByName("Soni")->Value = 1;
//            }
//            ADOQuery1->Post();
//            ADOQuery2->Next();
//        }
//        ADOQuery1->Next();
//    }
//
//    ADOQuery1->First();
//    while (!ADOQuery1->Eof) {
//        nomi = ADOQuery1->FieldByName("Nomi")->AsString;
//        turi = ADOQuery1->FieldByName("Turi")->AsString;
//        eni = ADOQuery1->FieldByName("Eni")->AsFloat;
//        boyi = ADOQuery1->FieldByName("Boyi")->AsFloat;
//        narxi = ADOQuery1->FieldByName("m_kv_narxi")->AsFloat;
//        ADOQuery2->Active = false;
//        ADOQuery2->SQL->Clear();
//        ADOQuery2->SQL->Add(
//            "SELECT Nomi, Eni, Boyi, m_kv_narxi, Soni, Turi FROM Chiqim ");
//		if (turi == "дона") {
//			ADOQuery2->SQL->Add("WHERE Nomi='" + nomi + "' AND Eni=" + FtoS(eni) +
//							" AND Boyi=" + FtoS(boyi) + " AND m_kv_narxi=" + FtoS(narxi) +
//							" AND Turi='" + turi + "';");
//		}
//		else{
//			ADOQuery2->SQL->Add("WHERE Nomi='" + nomi + "' AND Eni=" + FtoS(eni) +
//							" AND m_kv_narxi=" + FtoS(narxi) +
//							" AND Turi='" + turi + "';");
//		}
//        ADOQuery2->Active = true;
//		ADOQuery2->First();
//		while (!ADOQuery2->Eof) {
//			ADOQuery1->Edit();
//			if (ADOQuery2->FieldByName("Turi")->AsString == "дона") {
//                ADOQuery1->FieldByName("Soni")->Value =
//                    ADOQuery1->FieldByName("Soni")->AsInteger -
//                    ADOQuery2->FieldByName("Soni")->AsInteger;
//            } else {
//                ADOQuery1->FieldByName("Boyi")->Value =
//                    ADOQuery1->FieldByName("Boyi")->AsFloat -
//                    ADOQuery2->FieldByName("Boyi")->AsFloat;
//			}
//			ADOQuery1->Post();
//            ADOQuery2->Next();
//		}
//		ADOQuery1->Edit();
//        ADOQuery1->FieldByName("Summasi")->Value =
//            ADOQuery1->FieldByName("Eni")->AsFloat *
//            ADOQuery1->FieldByName("Boyi")->AsFloat *
//            ADOQuery1->FieldByName("Soni")->AsFloat *
//			ADOQuery1->FieldByName("m_kv_narxi")->AsFloat;
//		son += ADOQuery1->FieldByName("Soni")->AsInteger;
//		qiymat += ADOQuery1->FieldByName("Summasi")->AsFloat;
//		ADOQuery1->Post();
//        ADOQuery1->Next();
//    }
//
//    Label3->Caption = IntToStr(son) + " дона";
//	Label9->Caption = FloatToStr(qiymat) + " $";
//    Form1->ADOQuery1->Active = true;
//	Form1->ADOQuery2->Active = true;
    Form1->BitBtn1->Click();
//    DBGrid1->Columns->Items[0]->Width = 175;
//	DBGrid1->Columns->Items[1]->Width = 60;
//	DBGrid1->Columns->Items[2]->Width = 60;
//	DBGrid1->Columns->Items[3]->Width = 50;
//	DBGrid1->Columns->Items[4]->Width = 75;
//	DBGrid1->Columns->Items[5]->Width = 120;
//	DBGrid1->Columns->Items[6]->Width = 200;
//	DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
//	DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
//	DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
//	DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
//	DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
//	DBGrid1->Columns->Items[5]->Title->Caption = "м кв. Нархи";
//	DBGrid1->Columns->Items[6]->Title->Caption = "Суммаси";
    return;
}

//---------------------------------------------------------------------------

void __fastcall TForm4::DBGrid1TitleClick(TColumn* Column)
{
	AnsiString s = Column->Field->FullName;
    //ADOQuery1->Active = false;
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("Select * from Holat ");

    ADOQuery1->SQL->Add("Order by " + s);
    if (ordered)
        ADOQuery1->SQL->Append(" DESC;");
    ordered = !ordered;
    ADOQuery1->ExecSQL();
	ADOQuery1->Active = true;
//	DBGrid1->Columns->Items[0]->Width = 175;
//	DBGrid1->Columns->Items[1]->Width = 60;
//	DBGrid1->Columns->Items[2]->Width = 60;
//	DBGrid1->Columns->Items[3]->Width = 50;
//	DBGrid1->Columns->Items[4]->Width = 75;
//	DBGrid1->Columns->Items[5]->Width = 120;
//	DBGrid1->Columns->Items[6]->Width = 200;
//	DBGrid1->Columns->Items[0]->Title->Caption = "Номи";
//	DBGrid1->Columns->Items[1]->Title->Caption = "Ени";
//	DBGrid1->Columns->Items[2]->Title->Caption = "Бўйи";
//	DBGrid1->Columns->Items[3]->Title->Caption = "Сони";
//	DBGrid1->Columns->Items[4]->Title->Caption = "Тури";
//	DBGrid1->Columns->Items[5]->Title->Caption = "м кв. Нархи";
//	DBGrid1->Columns->Items[6]->Title->Caption = "Суммаси";
    return;
}

//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject* Sender)
{
    BitBtn1->Click();
}
//---------------------------------------------------------------------------




























