object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1063#1080#1082#1080#1084
  ClientHeight = 231
  ClientWidth = 558
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 19
    Width = 44
    Height = 19
    Caption = #1053#1086#1084#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 59
    Width = 40
    Height = 19
    Caption = #1058#1091#1088#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 99
    Width = 31
    Height = 19
    Caption = #1069#1085#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 16
    Top = 139
    Width = 41
    Height = 19
    Caption = #1041#1086#1081#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 256
    Top = 19
    Width = 41
    Height = 19
    Caption = #1057#1086#1085#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 256
    Top = 59
    Width = 97
    Height = 19
    Caption = #1084' '#1082#1074'. '#1085#1072#1088#1093#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 256
    Top = 100
    Width = 133
    Height = 19
    Caption = #1057#1086#1090#1080#1083#1075#1072#1085' '#1085#1072#1088#1093#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 256
    Top = 139
    Width = 59
    Height = 19
    Caption = #1057#1072#1085#1072#1089#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBEdit7: TDBEdit
    Left = 408
    Top = 96
    Width = 142
    Height = 27
    DataField = 'Sotilgan_narxi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DBEdit8: TDBEdit
    Left = 408
    Top = 136
    Width = 142
    Height = 27
    DataField = 'Sanasi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object BitBtn1: TBitBtn
    Left = 198
    Top = 192
    Width = 129
    Height = 31
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 351
    Top = 193
    Width = 129
    Height = 30
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 3
    OnClick = BitBtn2Click
  end
  object DBComboBox1: TDBComboBox
    Left = 79
    Top = 16
    Width = 121
    Height = 27
    Style = csDropDownList
    DataField = 'Nomi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Sorted = True
    TabOrder = 4
  end
  object DBComboBox2: TDBComboBox
    Left = 79
    Top = 56
    Width = 121
    Height = 27
    Style = csDropDownList
    DataField = 'Turi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object DBComboBox3: TDBComboBox
    Left = 79
    Top = 96
    Width = 121
    Height = 27
    Style = csDropDownList
    DataField = 'Eni'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object DBComboBox4: TDBComboBox
    Left = 79
    Top = 136
    Width = 121
    Height = 27
    Style = csDropDownList
    DataField = 'Boyi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object DBComboBox6: TDBComboBox
    Left = 408
    Top = 56
    Width = 142
    Height = 27
    Style = csDropDownList
    DataField = 'm_kv_narxi'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object DBEdit5: TDBEdit
    Left = 408
    Top = 16
    Width = 142
    Height = 27
    DataField = 'Soni'
    DataSource = Form1.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object CheckBox1: TCheckBox
    Left = 16
    Top = 192
    Width = 153
    Height = 17
    Caption = #1052#1077#1090#1088#1083#1072#1073' '#1089#1086#1090#1080#1096
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = CheckBox1Click
  end
end
