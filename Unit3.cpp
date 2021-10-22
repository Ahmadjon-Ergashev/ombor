//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
AnsiString nomi, turi, eni, boyi, m_narxi, soni;
nomi = DBComboBox1->Text; turi = DBComboBox2->Text;
eni = DBComboBox3->Text; boyi = DBComboBox4->Text;
soni = DBEdit5->Text; m_narxi = DBComboBox6->Text;

Form4->ADOQuery1->First();
while (!Form4->ADOQuery1->Eof){
	if (Form4->ADOQuery1->FieldByName("Nomi")->AsString == nomi &&
		Form4->ADOQuery1->FieldByName("Turi")->AsString == turi &&
		Form4->ADOQuery1->FieldByName("Eni")->AsString == eni &&
		Form4->ADOQuery1->FieldByName("m_kv_narxi")->AsString == m_narxi)	break;
		else  Form4->ADOQuery1-> Next();
}
if (!Form4->ADOQuery1->Eof){
	Form4->ADOQuery1->Edit();
	if (CheckBox1->Checked)
	Form4->ADOQuery1->FieldByName("Boyi")->AsInteger -= StrToInt(boyi); else
	Form4->ADOQuery1->FieldByName("Soni")->AsInteger -= StrToInt(soni);
	Form4->ADOQuery1->Post();
	Form1->ADOQuery2->Post();
	Form3->Close();}
else {
	ShowMessage("Омборда бундай мол йук");
    Form1->ADOQuery2->Cancel();
}
Form1->BitBtn1->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
Form1->ADOQuery2->Cancel();
Form3->Close();
Form1->BitBtn1->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
DBEdit8->Text = Date();
DBEdit5->Text = 1;
DBComboBox1->SetFocus();
}
//---------------------------------------------------------------------------



void __fastcall TForm3::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked)
	DBComboBox4->Style = csDropDown;
else
    DBComboBox4->Style = csDropDownList;
}
//---------------------------------------------------------------------------

