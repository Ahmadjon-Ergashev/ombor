//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TPanel *Panel1;
	TBitBtn *BitBtn1;
	TADOTable *ADOTable2;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TADOCommand *ADOCommand1;
	TADOQuery *ADOQuery2;
	TWideStringField *ADOQuery1Nomi;
	TFloatField *ADOQuery1Eni;
	TFloatField *ADOQuery1Boyi;
	TFloatField *ADOQuery1Soni;
	TWideStringField *ADOQuery1Turi;
	TFloatField *ADOQuery1m_kv_narxi;
	TFloatField *ADOQuery1Umumiy_m_kv;
	TFloatField *ADOQuery1Summasi;
	TLabel *Label1;
	TLabel *Label10;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall FormCreate(TObject* Sender);
  private: // User declarations
  public: // User declarations
    __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif

