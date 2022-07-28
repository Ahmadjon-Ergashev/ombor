object Form5: TForm5
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1050#1091#1088#1089#1085#1080' '#1118#1079#1075#1072#1088#1090#1080#1088#1080#1096
  ClientHeight = 119
  ClientWidth = 408
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 236
    Height = 24
    Caption = #1071#1085#1075#1080' '#1082#1091#1088#1089#1085#1080' '#1082#1080#1088#1080#1090#1080#1085#1075':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clNavy
    Font.Height = -21
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBEdit1: TDBEdit
    Left = 283
    Top = 21
    Width = 121
    Height = 31
    DataField = 'Kurs'
    DataSource = Form1.DataSource3
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 184
    Top = 81
    Width = 100
    Height = 30
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = bkOK
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 304
    Top = 81
    Width = 100
    Height = 30
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = bkCancel
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn2Click
  end
end
