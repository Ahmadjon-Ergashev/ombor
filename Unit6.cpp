//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Word_XP_srvr"
#pragma resource "*.dfm"
TForm6* Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject* Sender)
{
	WordApplication->Connect();
    WordApplication->Documents->Add();
    WordDocument->ConnectTo(WordApplication->ActiveDocument);
	WordApplication->set_Visible(true);
	int n, m;

	WordParagraphFormat->ConnectTo(WordApplication->Selection->ParagraphFormat);
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->ConnectTo(WordApplication->Selection->Font);
	WordDocument->PageSetup->LeftMargin = 25;

	ADOQuery4->Active=false;
	ADOQuery4->SQL->Clear();
	ADOQuery4->SQL->Add("Select * From Holat");
	ADOQuery4->Active=true;
	n = ADOQuery4->RecordCount + 1;
	m = ADOQuery4->FieldCount + 1;
	TablePtr table;
	WordFont->set_Size(18);
	WordDocument->Range(EmptyParam(), EmptyParam())->Font->Size = 12;
	String nCell = "\n";
	int len = nCell.Length();
	Variant r1 = (Variant)len;
	WordDocument->Range(EmptyParam(), r1)->InsertAfter(StringToOleStr(nCell));

	double soni = 0, summasi = 0, metr = 0;
	WordDocument->Tables->Add(WordDocument->Range(r1, EmptyParam()), n, m);

	table = WordDocument->Tables->Item(1);
	table->LeftPadding = 0;
    table->RightPadding = 0;
	table->Columns->Item(1)->Width = 30;
	table->Columns->Item(2)->Width = 100;
	table->Columns->Item(3)->Width = 40;
	table->Columns->Item(4)->Width = 50;
	table->Columns->Item(5)->Width = 40;
	table->Columns->Item(6)->Width = 50;
	table->Columns->Item(7)->Width = 50;
	table->Columns->Item(8)->Width = 60;
	table->Columns->Item(9)->Width = 120;
	table->Range->ParagraphFormat->Alignment = WdParagraphAlignment::wdAlignParagraphCenter;
    table->Cell(1, 1)->Range->InsertAfter(TVariant("№"));
    table->Cell(1, 1)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 2)->Range->InsertAfter(TVariant("Номи"));
    table->Cell(1, 2)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 3)->Range->InsertAfter(TVariant("Эни"));
    table->Cell(1, 3)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 4)->Range->InsertAfter(TVariant("Бўйи"));
    table->Cell(1, 4)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 5)->Range->InsertAfter(TVariant("Сони"));
    table->Cell(1, 5)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 6)->Range->InsertAfter(TVariant("Тури"));
	table->Cell(1, 6)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 7)->Range->InsertAfter(TVariant("Нархи"));
    table->Cell(1, 7)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 8)->Range->InsertAfter(TVariant("м кв"));
	table->Cell(1, 8)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 9)->Range->InsertAfter(TVariant("Суммаси"));
	table->Cell(1, 9)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Rows->Item(1)->Range->Font->Bold=true;
	ADOQuery4->First();
	for (int row = 2; row <= table->Rows->Count; row++) {
		nCell = IntToStr(row - 1);
		table->Cell(row, 1)->Range->InsertAfter(TVariant(nCell));
        table->Cell(row, 1)->Range->Borders->set_OutsideLineStyle(
			WdLineStyle::wdLineStyleSingle);
		for (int col = 2; col <= table->Columns->Count; col++) {
			nCell = ADOQuery4->Fields->Fields[col - 2]->AsString;
			table->Cell(row, col)->Range->InsertAfter(TVariant(nCell));
            table->Cell(row, col)->Range->Borders->set_OutsideLineStyle(
				WdLineStyle::wdLineStyleSingle);
		}
		//soni+=ADOQuery4->Fields->Fields[3]->AsInteger;
		//summasi+=ADOQuery4->Fields->Fields[7]->AsFloat;
		//metr+=ADOQuery4->Fields->Fields[6]->AsFloat;
		ADOQuery4->Next();
	}
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphLeft);
	WordFont->set_Size(14);
	WordFont->set_Bold(0);
	WordApplication->Selection->InsertAfter(TVariant("Холат Жадвали\n\n"));
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->set_Size(18);
	WordFont->set_Bold(1);
	WordApplication->Selection->InsertAfter(TVariant("Сана:\t\t\t\t" + Date() + "\n"));
	WordApplication->Selection->InsertAfter(TVariant("Умумий сони:\t\t" + DBText1->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий м кв:\t\t" + DBText2->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий суммаси:\t\t" + DBText3->Caption +"\n") );
	WordApplication->set_Visible(true);
	WordApplication->Disconnect();
}


void __fastcall TForm6::Button2Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormActivate(TObject *Sender)
{
	ADOQuery1->Active = false;
    ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button7Click(TObject *Sender)
{
	ADOQuery2->Active = false;
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("Select Sum(Soni) As Soni, Sum(Eni*Boyi*Soni) As m_kv, Sum(Summasi) As Summasi From Kirim ");
	ADOQuery2->SQL->Add("Where Sanasi>=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker1->Date)+"# And Sanasi<=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker2->Date)+"#");
	ADOQuery2->Active=true;
	DBText4->DataField = "Soni";
	DBText5->DataField = "m_kv";
	DBText6->DataField = "Summasi";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button8Click(TObject *Sender)
{
	ADOQuery3->Active = false;
	ADOQuery3->SQL->Clear();
	ADOQuery3->SQL->Add("Select Sum(Soni) As Soni, Sum(Eni*Boyi*Soni) As m_kv, Sum(Sotilgan_narxi) As Summasi, Sum(Foydasi) As Foydasi From Chiqim ");
	ADOQuery3->SQL->Add("Where Sanasi>=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker3->Date)+"# And Sanasi<=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker4->Date)+"#");
	ADOQuery3->Active=true;
	DBText7->DataField = "Soni";
	DBText8->DataField = "m_kv";
	DBText9->DataField = "Summasi";
	DBText10->DataField = "Foydasi";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button5Click(TObject *Sender)
{
	Button7->Click();

	WordApplication->Connect();
    WordApplication->Documents->Add();
    WordDocument->ConnectTo(WordApplication->ActiveDocument);
	WordApplication->set_Visible(true);
	int n, m;

	WordParagraphFormat->ConnectTo(WordApplication->Selection->ParagraphFormat);
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->ConnectTo(WordApplication->Selection->Font);
	WordDocument->PageSetup->LeftMargin = 25;

	ADOQuery4->Active=false;
	ADOQuery4->SQL->Clear();
	ADOQuery4->SQL->Add("Select * From Kirim");
	ADOQuery4->SQL->Add("Where Sanasi>=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker1->Date)+"# And Sanasi<=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker2->Date)+"#");
	ADOQuery4->Active=true;
	n = ADOQuery4->RecordCount + 1;
	m = ADOQuery4->FieldCount + 1;
	TablePtr table;
	WordFont->set_Size(18);
	WordDocument->Range(EmptyParam(), EmptyParam())->Font->Size = 12;
	String nCell = "\n";
	int len = nCell.Length();
	Variant r1 = (Variant)len;
	WordDocument->Range(EmptyParam(), r1)->InsertAfter(StringToOleStr(nCell));

	double soni = 0, summasi = 0, metr = 0;
	WordDocument->Tables->Add(WordDocument->Range(r1, EmptyParam()), n, m);

	table = WordDocument->Tables->Item(1);
	table->LeftPadding = 0;
	table->RightPadding = 0;
	table->Columns->Item(1)->Width = 30;
	table->Columns->Item(2)->Width = 100;
    table->Columns->Item(3)->Width = 40;
	table->Columns->Item(4)->Width = 50;
    table->Columns->Item(5)->Width = 40;
	table->Columns->Item(6)->Width = 50;
    table->Columns->Item(7)->Width = 50;
	table->Columns->Item(8)->Width = 70;
	table->Columns->Item(9)->Width = 120;
	table->Range->ParagraphFormat->Alignment = WdParagraphAlignment::wdAlignParagraphCenter;
    table->Cell(1, 1)->Range->InsertAfter(TVariant("№"));
	table->Cell(1, 1)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 2)->Range->InsertAfter(TVariant("Номи"));
	table->Cell(1, 2)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 3)->Range->InsertAfter(TVariant("Эни"));
	table->Cell(1, 3)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 4)->Range->InsertAfter(TVariant("Бўйи"));
	table->Cell(1, 4)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 5)->Range->InsertAfter(TVariant("Сони"));
	table->Cell(1, 5)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 6)->Range->InsertAfter(TVariant("Тури"));
	table->Cell(1, 6)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 7)->Range->InsertAfter(TVariant("Нархи"));
	table->Cell(1, 7)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 8)->Range->InsertAfter(TVariant("Санаси"));
	table->Cell(1, 8)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 9)->Range->InsertAfter(TVariant("Суммаси"));
	table->Cell(1, 9)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Rows->Item(1)->Range->Font->Bold=true;
	ADOQuery4->First();
	for (int row = 2; row <= table->Rows->Count; row++) {
		nCell = IntToStr(row - 1);
		table->Cell(row, 1)->Range->InsertAfter(TVariant(nCell));
        table->Cell(row, 1)->Range->Borders->set_OutsideLineStyle(
			WdLineStyle::wdLineStyleSingle);
		for (int col = 2; col <= table->Columns->Count; col++) {
			nCell = ADOQuery4->Fields->Fields[col - 2]->AsString;
			table->Cell(row, col)->Range->InsertAfter(TVariant(nCell));
            table->Cell(row, col)->Range->Borders->set_OutsideLineStyle(
				WdLineStyle::wdLineStyleSingle);
		}
		ADOQuery4->Next();
	}
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphLeft);
	WordFont->set_Size(14);
	WordFont->set_Bold(0);
	WordApplication->Selection->InsertAfter(TVariant("Кирим Жадвали\n\n"));
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->set_Size(18);
	WordFont->set_Bold(1);
	WordApplication->Selection->InsertAfter(TVariant("Сана:\t\t\t\t" + Date() + "\n"));
	WordApplication->Selection->InsertAfter(TVariant("Оралик:\t\t\t" + DateTimePicker1->Date + " - " + DateTimePicker2->Date + "\n"));
	WordApplication->Selection->InsertAfter(TVariant("Умумий сони:\t\t" + DBText4->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий м кв:\t\t" + DBText5->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий суммаси:\t\t" + DBText6->Caption +"\n") );
	WordApplication->set_Visible(true);
	WordApplication->Disconnect();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button6Click(TObject *Sender)
{
	Button8->Click();

	WordApplication->Connect();
    WordApplication->Documents->Add();
    WordDocument->ConnectTo(WordApplication->ActiveDocument);
	WordApplication->set_Visible(true);
	int n, m;

	WordParagraphFormat->ConnectTo(WordApplication->Selection->ParagraphFormat);
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->ConnectTo(WordApplication->Selection->Font);
	WordDocument->PageSetup->LeftMargin = 25;

	ADOQuery4->Active=false;
	ADOQuery4->SQL->Clear();
	ADOQuery4->SQL->Add("Select * From Chiqim");
	ADOQuery4->SQL->Add("Where Sanasi>=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker3->Date)+"# And Sanasi<=#" + FormatDateTime("yyyy-mm-dd", DateTimePicker4->Date)+"#");
	ADOQuery4->Active=true;
	n = ADOQuery4->RecordCount + 1;
	m = ADOQuery4->FieldCount + 1;
	TablePtr table;
	WordFont->set_Size(18);
	WordDocument->Range(EmptyParam(), EmptyParam())->Font->Size = 12;
	String nCell = "\n";
	int len = nCell.Length();
	Variant r1 = (Variant)len;
	WordDocument->Range(EmptyParam(), r1)->InsertAfter(StringToOleStr(nCell));

	double soni = 0, summasi = 0, metr = 0;
	WordDocument->Tables->Add(WordDocument->Range(r1, EmptyParam()), n, m);

	table = WordDocument->Tables->Item(1);
	table->LeftPadding = 0;
    table->RightPadding = 0;
	table->Columns->Item(1)->Width = 30;
	table->Columns->Item(2)->Width = 80;
    table->Columns->Item(3)->Width = 40;
	table->Columns->Item(4)->Width = 50;
	table->Columns->Item(5)->Width = 40;
	table->Columns->Item(6)->Width = 40;
	table->Columns->Item(7)->Width = 40;
	table->Columns->Item(8)->Width = 60;
	table->Columns->Item(9)->Width = 70;
	table->Columns->Item(10)->Width = 100;
	table->Range->ParagraphFormat->Alignment = WdParagraphAlignment::wdAlignParagraphCenter;
    table->Cell(1, 1)->Range->InsertAfter(TVariant("№"));
    table->Cell(1, 1)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 2)->Range->InsertAfter(TVariant("Номи"));
    table->Cell(1, 2)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 3)->Range->InsertAfter(TVariant("Эни"));
    table->Cell(1, 3)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 4)->Range->InsertAfter(TVariant("Бўйи"));
    table->Cell(1, 4)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 5)->Range->InsertAfter(TVariant("Сони"));
    table->Cell(1, 5)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
    table->Cell(1, 6)->Range->InsertAfter(TVariant("Тури"));
	table->Cell(1, 6)->Range->Borders->set_OutsideLineStyle(
        WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 7)->Range->InsertAfter(TVariant("Нархи"));
	table->Cell(1, 7)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 8)->Range->InsertAfter(TVariant("Сотилган нархи"));
	table->Cell(1, 8)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 9)->Range->InsertAfter(TVariant("Санаси"));
	table->Cell(1, 9)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Cell(1, 10)->Range->InsertAfter(TVariant("Фойда"));
	table->Cell(1, 10)->Range->Borders->set_OutsideLineStyle(
		WdLineStyle::wdLineStyleSingle);
	table->Rows->Item(1)->Range->Font->Bold=true;
	ADOQuery4->First();
	for (int row = 2; row <= table->Rows->Count; row++) {
		nCell = IntToStr(row - 1);
		table->Cell(row, 1)->Range->InsertAfter(TVariant(nCell));
        table->Cell(row, 1)->Range->Borders->set_OutsideLineStyle(
			WdLineStyle::wdLineStyleSingle);
		for (int col = 2; col <= table->Columns->Count; col++) {
			nCell = ADOQuery4->Fields->Fields[col - 2]->AsString;
			table->Cell(row, col)->Range->InsertAfter(TVariant(nCell));
            table->Cell(row, col)->Range->Borders->set_OutsideLineStyle(
				WdLineStyle::wdLineStyleSingle);
		}
		ADOQuery4->Next();
	}
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphLeft);
	WordFont->set_Size(14);
	WordFont->set_Bold(0);
	WordApplication->Selection->InsertAfter(TVariant("Чиким Жадвали\n\n"));
	WordParagraphFormat->set_Alignment(WdParagraphAlignment::wdAlignParagraphCenter);
	WordFont->set_Size(18);
	WordFont->set_Bold(1);
	WordApplication->Selection->InsertAfter(TVariant("Сана:\t\t\t\t" + Date() + "\n"));
	WordApplication->Selection->InsertAfter(TVariant("Оралик:\t\t\t" + DateTimePicker3->Date + " - " + DateTimePicker4->Date + "\n"));
	WordApplication->Selection->InsertAfter(TVariant("Умумий сони:\t\t" + DBText7->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий м кв:\t\t" + DBText8->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий суммаси:\t\t" + DBText9->Caption +"\n") );
	WordApplication->Selection->InsertAfter( TVariant("Умумий фойда:\t\t" + DBText10->Caption +"\n") );
	WordApplication->set_Visible(true);
	WordApplication->Disconnect();
}
//---------------------------------------------------------------------------

