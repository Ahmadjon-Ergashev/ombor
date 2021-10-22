//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
Form1->ADOTable1->Post();
Form5->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::BitBtn2Click(TObject *Sender)
{
Form1->ADOTable1->Cancel();
Form5->Close();
}
//---------------------------------------------------------------------------
