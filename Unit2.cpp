//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2* Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject* Sender)
{
//    AnsiString nomi, turi, eni, boyi, m_narxi, soni;
//	nomi = DBEdit1->Text;
//	eni = DBEdit3->Text;
//	boyi = DBEdit4->Text;
//	soni = DBEdit5->Text;
//	m_narxi = DBEdit6->Text;

//    Form4->ADOQuery1->First();
//    while (!Form4->ADOQuery1->Eof) {
//		if (Form4->ADOQuery1->FieldByName("Nomi")->AsString == nomi &&
//            Form4->ADOQuery1->FieldByName("Eni")->AsString == eni &&
//            Form4->ADOQuery1->FieldByName("Boyi")->AsString == boyi &&
//            Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString == m_narxi)
//            break;
//        else
//            Form4->ADOQuery1->Next();
//    }
//
//    if (!Form4->ADOQuery1->Eof) {
//        Form4->ADOQuery1->Edit();
//        Form4->ADOQuery1->FieldByName("Soni")->AsInteger =
//            Form4->ADOQuery1->FieldByName("Soni")->AsInteger + StrToInt(soni);
//        Form4->ADOQuery1->Post();
//    } else {
//        Form4->ADOQuery1->Insert();
//		Form4->ADOQuery1->FieldByName("Nomi")->AsString = nomi;
//        Form4->ADOQuery1->FieldByName("Eni")->AsString = eni;
//        Form4->ADOQuery1->FieldByName("Boyi")->AsString = boyi;
//        Form4->ADOQuery1->FieldByName("Soni")->AsString = soni;
//        Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString = m_narxi;
//        Form4->ADOQuery1->FieldByName("Summasi")->AsString =
//            eni * boyi * m_narxi * soni;
//        Form4->ADOQuery1->Post();
//    }
	Form1->ADOQuery1->Post();
	Form4->BitBtn1->Click();
	Form2->Close();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn2Click(TObject* Sender)
{
	Form1->ADOQuery1->Cancel();
    Form2->Close();
	Form4->BitBtn1->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
     Form1->ADOQuery1->Cancel();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormActivate(TObject *Sender)
{
	DBEdit7->Text = Date();
	DBEdit1->Text = "Гилам";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBEdit4Change(TObject *Sender)
{
	//дона
	//метр
}
//---------------------------------------------------------------------------


