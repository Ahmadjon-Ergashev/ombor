//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Word_XP_srvr.h"
#include <Vcl.OleServer.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TWordApplication *WordApplication;
	TButton *Button1;
	TWordDocument *WordDocument;
	TWordParagraphFormat *WordParagraphFormat;
	TWordFont *WordFont;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TLabel *Label4;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TDateTimePicker *DateTimePicker3;
	TLabel *Label12;
	TDateTimePicker *DateTimePicker4;
	TLabel *Label13;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TDBText *DBText1;
	TDBText *DBText2;
	TDBText *DBText3;
	TDBText *DBText4;
	TDBText *DBText5;
	TDBText *DBText6;
	TDBText *DBText7;
	TDBText *DBText8;
	TDBText *DBText9;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TDBText *DBText10;
	TLabel *Label21;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
