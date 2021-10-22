//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
bool ordered;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender) {
int soni = 0, qiymati = 0;
ADOQuery1->Active = False;
ADOQuery1->Active = True;
ADOQuery1->First();
while (!ADOQuery1->Eof){
	ADOQuery1->Edit();
	ADOQuery1->FieldByName("Summasi")->Value =
	ADOQuery1->FieldByName("Eni")->AsFloat*
	ADOQuery1->FieldByName("Boyi")->AsFloat*
	ADOQuery1->FieldByName("Soni")->AsFloat*
	ADOQuery1->FieldByName("m_kv_narxi")->AsFloat;
	soni += ADOQuery1->FieldByName("Soni")->AsInteger;
	qiymati += ADOQuery1->FieldByName("Summasi")->AsInteger;
	ADOQuery1->Next();
	}
	Label3->Caption = IntToStr(soni)+" дона";
	Label9->Caption = IntToStr(qiymati)+" $";
return;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::DBGrid1TitleClick(TColumn *Column)
{
AnsiString s = Column->Field->FullName;
	//ADOQuery1->Active = false;
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * from Holat ");

	ADOQuery1->SQL->Add("Order by " + s);
	if (ordered) ADOQuery1->SQL->Append(" DESC;");
	ordered = !ordered;
	ADOQuery1->ExecSQL();
	ADOQuery1->Active = true;
	return;
}

//---------------------------------------------------------------------------

