object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1061#1086#1083#1072#1090
  ClientHeight = 430
  ClientWidth = 849
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label4: TLabel
    Left = 156
    Top = 25
    Width = 98
    Height = 18
    Caption = #1059#1084#1091#1084#1080#1081' '#1084#1086#1083':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clTeal
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label5: TLabel
    Left = 260
    Top = 25
    Width = 10
    Height = 18
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label6: TLabel
    Left = 268
    Top = 33
    Width = 10
    Height = 18
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label7: TLabel
    Left = 164
    Top = 33
    Width = 98
    Height = 18
    Caption = #1059#1084#1091#1084#1080#1081' '#1084#1086#1083':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clTeal
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 849
    Height = 379
    Align = alClient
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clMaroon
    TitleFont.Height = -16
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    OnTitleClick = DBGrid1TitleClick
  end
  object Panel1: TPanel
    Left = 0
    Top = 379
    Width = 849
    Height = 51
    Align = alBottom
    TabOrder = 1
    ExplicitWidth = 845
    DesignSize = (
      849
      51)
    object DBText1: TDBText
      Left = 100
      Top = 18
      Width = 65
      Height = 17
      DataField = 'Kurs'
      DataSource = Form1.DataSource3
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clPurple
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 0
      Top = 18
      Width = 94
      Height = 16
      Hint = #1044#1086#1083#1083#1072#1088' '#1050#1091#1088#1089#1080' '#1203#1086#1083#1072#1090#1080
      Caption = #1044#1086#1083#1083#1072#1088' '#1082#1091#1088#1089#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clTeal
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
    end
    object Label2: TLabel
      Left = 152
      Top = 17
      Width = 98
      Height = 18
      Anchors = [akRight, akBottom]
      Caption = #1059#1084#1091#1084#1080#1081' '#1084#1086#1083':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clTeal
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      ExplicitLeft = 148
    end
    object Label3: TLabel
      Left = 256
      Top = 17
      Width = 10
      Height = 18
      Anchors = [akRight, akBottom]
      Caption = '0'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      ExplicitLeft = 252
    end
    object Label8: TLabel
      Left = 392
      Top = 17
      Width = 133
      Height = 18
      Anchors = [akRight, akBottom]
      Caption = #1059#1084#1091#1084#1080#1081' '#1082#1080#1081#1084#1072#1090#1080':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clTeal
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      ExplicitLeft = 388
    end
    object Label9: TLabel
      Left = 531
      Top = 17
      Width = 10
      Height = 18
      Anchors = [akRight, akBottom]
      Caption = '0'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      ExplicitLeft = 527
    end
    object BitBtn1: TBitBtn
      Left = 668
      Top = 10
      Width = 169
      Height = 30
      Anchors = [akRight, akBottom]
      Caption = '&'#1071#1085#1075#1080#1083#1072#1096
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333444444
        33333333333F8888883F33330000324334222222443333388F3833333388F333
        000032244222222222433338F8833FFFFF338F3300003222222AAAAA22243338
        F333F88888F338F30000322222A33333A2224338F33F8333338F338F00003222
        223333333A224338F33833333338F38F00003222222333333A444338FFFF8F33
        3338888300003AAAAAAA33333333333888888833333333330000333333333333
        333333333333333333FFFFFF000033333333333344444433FFFF333333888888
        00003A444333333A22222438888F333338F3333800003A2243333333A2222438
        F38F333333833338000033A224333334422224338338FFFFF8833338000033A2
        22444442222224338F3388888333FF380000333A2222222222AA243338FF3333
        33FF88F800003333AA222222AA33A3333388FFFFFF8833830000333333AAAAAA
        3333333333338888883333330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
      ParentFont = False
      TabOrder = 0
      OnClick = BitBtn1Click
      ExplicitLeft = 664
    end
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Filter = 'soni>0 and boyi>0'
    Filtered = True
    DataSource = Form1.DataSource1
    Parameters = <>
    SQL.Strings = (
      'select * from Holat'
      'where (soni>0)and(boyi>0);')
    Left = 456
    Top = 304
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 376
    Top = 304
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Filter = 'soni>0'
    Filtered = True
    TableName = 'Holat'
    Left = 520
    Top = 304
  end
end
