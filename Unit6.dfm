object Form6: TForm6
  Left = 0
  Top = 0
  Caption = #1061#1080#1089#1086#1073#1086#1090
  ClientHeight = 341
  ClientWidth = 442
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnActivate = FormActivate
  TextHeight = 15
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 442
    Height = 341
    ActivePage = TabSheet3
    Align = alClient
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    ExplicitHeight = 305
    object TabSheet1: TTabSheet
      Caption = #1061#1086#1083#1072#1090
      object Label6: TLabel
        Left = 28
        Top = 22
        Width = 94
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1086#1085#1080
      end
      object Label7: TLabel
        Left = 28
        Top = 64
        Width = 91
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1084'.'#1082#1074
      end
      object Label8: TLabel
        Left = 28
        Top = 107
        Width = 119
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1091#1084#1084#1072#1089#1080
      end
      object DBText1: TDBText
        Left = 213
        Top = 24
        Width = 27
        Height = 19
        AutoSize = True
        DataField = 'Soni'
        DataSource = DataSource1
      end
      object DBText2: TDBText
        Left = 213
        Top = 64
        Width = 77
        Height = 19
        AutoSize = True
        DataField = 'm_kv'
        DataSource = DataSource1
      end
      object DBText3: TDBText
        Left = 213
        Top = 107
        Width = 77
        Height = 19
        AutoSize = True
        DataField = 'Summasi'
        DataSource = DataSource1
      end
      object Button1: TButton
        Left = 147
        Top = 248
        Width = 143
        Height = 39
        Caption = 'Word '#1075#1072' '#1101#1082#1089#1087#1086#1088#1090
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 296
        Top = 248
        Width = 114
        Height = 39
        Cancel = True
        Caption = 'Close'
        TabOrder = 1
        OnClick = Button2Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1050#1080#1088#1080#1084
      ImageIndex = 1
      object Label4: TLabel
        Left = 164
        Top = 21
        Width = 26
        Height = 19
        Caption = #1076#1072#1085
      end
      object Label5: TLabel
        Left = 349
        Top = 21
        Width = 32
        Height = 19
        Caption = #1075#1072#1095#1072
      end
      object Label9: TLabel
        Left = 28
        Top = 155
        Width = 119
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1091#1084#1084#1072#1089#1080
      end
      object Label10: TLabel
        Left = 28
        Top = 112
        Width = 91
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1084'.'#1082#1074
      end
      object Label11: TLabel
        Left = 28
        Top = 70
        Width = 94
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1086#1085#1080
      end
      object DBText4: TDBText
        Left = 213
        Top = 70
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'Soni'
        DataSource = DataSource2
      end
      object DBText5: TDBText
        Left = 213
        Top = 112
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'm_kv'
        DataSource = DataSource2
      end
      object DBText6: TDBText
        Left = 213
        Top = 155
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'Summasi'
        DataSource = DataSource2
      end
      object Label14: TLabel
        Left = 379
        Top = 70
        Width = 35
        Height = 19
        Caption = #1076#1086#1085#1072
      end
      object Label15: TLabel
        Left = 379
        Top = 112
        Width = 31
        Height = 19
        Caption = #1084'.'#1082#1074
      end
      object Label16: TLabel
        Left = 385
        Top = 155
        Width = 25
        Height = 19
        Caption = #1089#1118#1084
      end
      object DateTimePicker1: TDateTimePicker
        Left = 28
        Top = 21
        Width = 128
        Height = 27
        Date = 44767.000000000000000000
        Time = 0.656127268521231600
        TabOrder = 0
      end
      object DateTimePicker2: TDateTimePicker
        Left = 213
        Top = 21
        Width = 128
        Height = 27
        Date = 44767.000000000000000000
        Time = 0.656127268521231600
        TabOrder = 1
      end
      object Button3: TButton
        Left = 296
        Top = 248
        Width = 114
        Height = 39
        Cancel = True
        Caption = 'Close'
        TabOrder = 2
        OnClick = Button2Click
      end
      object Button5: TButton
        Left = 28
        Top = 248
        Width = 143
        Height = 39
        Caption = 'Word '#1075#1072' '#1101#1082#1089#1087#1086#1088#1090
        TabOrder = 3
        OnClick = Button5Click
      end
      object Button7: TButton
        Left = 177
        Top = 248
        Width = 113
        Height = 39
        Caption = 'OK'
        TabOrder = 4
        OnClick = Button7Click
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1063#1080#1082#1080#1084
      ImageIndex = 2
      object Label1: TLabel
        Left = 28
        Top = 154
        Width = 119
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1091#1084#1084#1072#1089#1080
      end
      object Label2: TLabel
        Left = 28
        Top = 112
        Width = 91
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1084'.'#1082#1074
      end
      object Label3: TLabel
        Left = 28
        Top = 70
        Width = 94
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1089#1086#1085#1080
      end
      object Label12: TLabel
        Left = 164
        Top = 21
        Width = 26
        Height = 19
        Caption = #1076#1072#1085
      end
      object Label13: TLabel
        Left = 349
        Top = 21
        Width = 32
        Height = 19
        Caption = #1075#1072#1095#1072
      end
      object DBText7: TDBText
        Left = 213
        Top = 70
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'Soni'
        DataSource = DataSource3
      end
      object DBText8: TDBText
        Left = 213
        Top = 112
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'm_kv'
        DataSource = DataSource3
      end
      object DBText9: TDBText
        Left = 213
        Top = 154
        Width = 60
        Height = 19
        AutoSize = True
        DataField = 'Summasi'
        DataSource = DataSource3
      end
      object Label17: TLabel
        Left = 381
        Top = 154
        Width = 25
        Height = 19
        Caption = #1089#1118#1084
      end
      object Label18: TLabel
        Left = 375
        Top = 112
        Width = 31
        Height = 19
        Caption = #1084'.'#1082#1074
      end
      object Label19: TLabel
        Left = 375
        Top = 70
        Width = 35
        Height = 19
        Caption = #1076#1086#1085#1072
      end
      object Label20: TLabel
        Left = 28
        Top = 194
        Width = 123
        Height = 19
        Caption = #1059#1084#1091#1084#1080#1081' '#1092#1086#1081#1076#1072#1089#1080
      end
      object DBText10: TDBText
        Left = 213
        Top = 194
        Width = 69
        Height = 19
        AutoSize = True
        DataField = 'Summasi'
        DataSource = DataSource3
      end
      object Label21: TLabel
        Left = 381
        Top = 194
        Width = 25
        Height = 19
        Caption = #1089#1118#1084
      end
      object DateTimePicker3: TDateTimePicker
        Left = 28
        Top = 21
        Width = 128
        Height = 27
        Date = 44767.000000000000000000
        Time = 0.656127268521231600
        TabOrder = 0
      end
      object DateTimePicker4: TDateTimePicker
        Left = 213
        Top = 21
        Width = 128
        Height = 27
        Date = 44767.000000000000000000
        Time = 0.656127268521231600
        TabOrder = 1
      end
      object Button4: TButton
        Left = 296
        Top = 248
        Width = 114
        Height = 39
        Cancel = True
        Caption = 'Close'
        TabOrder = 2
        OnClick = Button2Click
      end
      object Button6: TButton
        Left = 28
        Top = 248
        Width = 143
        Height = 39
        Caption = 'Word '#1075#1072' '#1101#1082#1089#1087#1086#1088#1090
        TabOrder = 3
        OnClick = Button6Click
      end
      object Button8: TButton
        Left = 177
        Top = 248
        Width = 113
        Height = 39
        Caption = 'OK'
        TabOrder = 4
        OnClick = Button8Click
      end
    end
  end
  object WordApplication: TWordApplication
    AutoConnect = False
    ConnectKind = ckRunningOrNew
    Left = 24
    Top = 456
  end
  object WordDocument: TWordDocument
    AutoConnect = False
    ConnectKind = ckRunningOrNew
    Left = 96
    Top = 456
  end
  object WordParagraphFormat: TWordParagraphFormat
    AutoConnect = False
    ConnectKind = ckRunningOrNew
    Left = 176
    Top = 456
  end
  object WordFont: TWordFont
    AutoConnect = False
    ConnectKind = ckRunningOrNew
    Left = 256
    Top = 456
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'Select Sum(Soni) As Soni, Sum(Umumiy_m_kv) As m_kv, Sum(Summasi)' +
        ' As Summasi'
      'From Holat;')
    Left = 24
    Top = 400
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 24
    Top = 344
  end
  object ADOQuery2: TADOQuery
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'Select Sum(Soni) As Soni, Sum(Umumiy_m_kv) As m_kv, Sum(Summasi)' +
        ' As Summasi'
      'From Holat;')
    Left = 96
    Top = 400
  end
  object ADOQuery3: TADOQuery
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'Select Sum(Soni) As Soni, Sum(Umumiy_m_kv) As m_kv, Sum(Summasi)' +
        ' As Summasi'
      'From Holat;')
    Left = 176
    Top = 400
  end
  object ADOQuery4: TADOQuery
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'Select Sum(Soni) As Soni, Sum(Umumiy_m_kv) As m_kv, Sum(Summasi)' +
        ' As Summasi'
      'From Holat;')
    Left = 256
    Top = 400
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 96
    Top = 344
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery3
    Left = 176
    Top = 344
  end
end
