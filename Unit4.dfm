object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1061#1086#1083#1072#1090
  ClientHeight = 430
  ClientWidth = 780
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnCreate = FormCreate
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
    Width = 780
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
    Columns = <
      item
        Expanded = False
        FieldName = 'Nomi'
        Width = 125
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Eni'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Boyi'
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Soni'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Turi'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'm_kv_narxi'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Umumiy_m_kv'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Summasi'
        Width = 200
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 0
    Top = 379
    Width = 780
    Height = 51
    Align = alBottom
    TabOrder = 1
    DesignSize = (
      780
      51)
    object Label2: TLabel
      Left = 10
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
    end
    object Label3: TLabel
      Left = 114
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
    end
    object Label8: TLabel
      Left = 176
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
    end
    object Label9: TLabel
      Left = 315
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
    end
    object Label1: TLabel
      Left = 453
      Top = 17
      Width = 44
      Height = 24
      Anchors = [akRight, akBottom]
      Caption = #1084'_'#1082#1074
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clTeal
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
    end
    object Label10: TLabel
      Left = 498
      Top = 17
      Width = 15
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
    end
    object BitBtn1: TBitBtn
      Left = 616
      Top = 10
      Width = 152
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
      'select * from Holat;')
    Left = 456
    Top = 304
    object ADOQuery1Nomi: TWideStringField
      DisplayLabel = #1053#1086#1084#1080
      DisplayWidth = 125
      FieldName = 'Nomi'
      Size = 175
    end
    object ADOQuery1Eni: TFloatField
      DisplayLabel = #1045#1085#1080
      DisplayWidth = 50
      FieldName = 'Eni'
    end
    object ADOQuery1Boyi: TFloatField
      DisplayLabel = #1041#1118#1081#1080
      DisplayWidth = 50
      FieldName = 'Boyi'
    end
    object ADOQuery1Soni: TFloatField
      DisplayLabel = #1057#1086#1085#1080
      DisplayWidth = 50
      FieldName = 'Soni'
    end
    object ADOQuery1Turi: TWideStringField
      DisplayLabel = #1058#1091#1088#1080
      DisplayWidth = 50
      FieldName = 'Turi'
      Size = 255
    end
    object ADOQuery1m_kv_narxi: TFloatField
      DisplayLabel = #1053#1072#1088#1093#1080
      DisplayWidth = 100
      FieldName = 'm_kv_narxi'
    end
    object ADOQuery1Umumiy_m_kv: TFloatField
      DisplayLabel = #1084'_'#1082#1074
      DisplayWidth = 100
      FieldName = 'Umumiy_m_kv'
      ReadOnly = True
    end
    object ADOQuery1Summasi: TFloatField
      DisplayLabel = #1057#1091#1084#1084#1072#1089#1080
      DisplayWidth = 200
      FieldName = 'Summasi'
      ReadOnly = True
    end
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
  object ADOCommand1: TADOCommand
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 608
    Top = 304
  end
  object ADOQuery2: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 528
    Top = 248
  end
end
