object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1050#1080#1088#1080#1084
  ClientHeight = 262
  ClientWidth = 643
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnActivate = FormActivate
  OnClose = FormClose
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 34
    Width = 44
    Height = 19
    Caption = #1053#1086#1084#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 75
    Width = 31
    Height = 19
    Caption = #1069#1085#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 115
    Width = 40
    Height = 19
    Caption = #1041#1118#1081#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 344
    Top = 34
    Width = 41
    Height = 19
    Caption = #1057#1086#1085#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 344
    Top = 73
    Width = 97
    Height = 19
    Caption = #1084' '#1082#1074'. '#1085#1072#1088#1093#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 344
    Top = 113
    Width = 59
    Height = 19
    Caption = #1057#1072#1085#1072#1089#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 155
    Width = 40
    Height = 19
    Caption = #1058#1091#1088#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBEdit1: TDBEdit
    Left = 128
    Top = 32
    Width = 161
    Height = 27
    DataField = 'Nomi'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DBEdit3: TDBEdit
    Left = 128
    Top = 73
    Width = 161
    Height = 27
    DataField = 'Eni'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object DBEdit4: TDBEdit
    Left = 128
    Top = 113
    Width = 161
    Height = 27
    DataField = 'Boyi'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnChange = DBEdit4Change
  end
  object DBEdit5: TDBEdit
    Left = 464
    Top = 32
    Width = 161
    Height = 27
    DataField = 'Soni'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object DBEdit6: TDBEdit
    Left = 464
    Top = 71
    Width = 161
    Height = 27
    DataField = 'm_kv_narxi'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object DBEdit7: TDBEdit
    Left = 464
    Top = 111
    Width = 161
    Height = 27
    DataField = 'Sanasi'
    DataSource = Form1.DataSource1
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object BitBtn1: TBitBtn
    Left = 312
    Top = 214
    Width = 153
    Height = 40
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = bkOK
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 6
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 471
    Top = 214
    Width = 153
    Height = 40
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = bkCancel
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 7
    OnClick = BitBtn2Click
  end
  object DBComboBox1: TDBComboBox
    Left = 128
    Top = 153
    Width = 161
    Height = 26
    DataField = 'Turi'
    DataSource = Form1.DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      #1076#1086#1085#1072
      #1084#1077#1090#1088)
    ParentFont = False
    TabOrder = 8
  end
end
