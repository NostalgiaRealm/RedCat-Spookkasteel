// Recovered from resources/RcHcMenu.dat/10/TFRMCASCADINGDELETE/0.bin; binary values and original offsets retained in companion JSON.
object frmCascadingDelete: TfrmCascadingDelete
  Left = 200
  Top = 222
  BorderStyle = "bsDialog"
  Caption = "Verwijderen"
  ClientHeight = 377
  ClientWidth = 647
  Color = "clBtnFace"
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clWindowText"
  Font.Height = -11
  Font.Name = "MS Sans Serif"
  Font.Style = []
  OldCreateOrder = true
  Position = "poScreenCenter"
  OnDestroy = "FormDestroy"
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 532
    Top = -3
    Width = 2
    Height = 386
    Pen.Color = "clBtnShadow"
  end
  object pnlMessage: TLabel
    Left = 16
    Top = 8
    Width = 505
    Height = 33
    AutoSize = false
    WordWrap = true
  end
  object lblMessage2: TLabel
    Left = 16
    Top = 184
    Width = 505
    Height = 17
    AutoSize = false
    Caption = "Kies de gewenste optie om het verwijderen mogelijk te maken."
  end
  object lblCascadingDelete: TLabel
    Left = 40
    Top = 223
    Width = 480
    Height = 28
    AutoSize = false
    WordWrap = true
  end
  object lblNullify: TLabel
    Left = 40
    Top = 266
    Width = 480
    Height = 28
    AutoSize = false
    WordWrap = true
  end
  object lblChange: TLabel
    Left = 40
    Top = 309
    Width = 480
    Height = 28
    AutoSize = false
    WordWrap = true
  end
  object lblcboChange: TLabel
    Left = 47
    Top = 347
    Width = 153
    Height = 17
    Alignment = "taRightJustify"
    AutoSize = false
    Caption = "Nieuwe waarde"
  end
  object btnOk: TDaviButton
    Left = 544
    Top = 8
    Width = 91
    Height = 25
    Caption = "OK"
    Default = true
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBtnText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 0
    OnClick = "btnOkClick"
    Glyph.Data = {"binary_hex": "de010000424dde01000000000000760000002800000024000000120000000100040000000000680100000000000000000000100000001000000000000000000080000080000000808000800000008000800080800000c0c0c000808080000000ff0000ff000000ffff00ff000000ff00ff00ffff0000ffffff00dddddddddddddddddddddddddddddddddddd0000dddddd88dddddddddddddddddffddddddddd0000ddddd0088ddddddddddddddd88dfdddddddd0000dddd033088ddddddddddddd8dd8dfddddddd0000ddd0fb33088ddddddddddd8dddd8dfdddddd0000dd0fb3b33088ddddddddd8dddfdd8dfddddd0000d0fb30fb33088ddddddd8fdd8dfdd8dfdddd0000d0f30d0fb33088dddddd8fd8d8dfdd8dfddd0000d0f0ddd0fb33088ddddd8d8ddd8dfdd8dfdd0000dd0ddddd0fb33088ddddd8ddddd8dfdd8dfd0000ddddddddd0fb3308dddddddddddd8dfdd8df0000dddddddddd0fb330ddddddddddddd8dfdd8f0000ddddddddddd0fb30dddddddddddddd8dfd8f0000dddddddddddd0fb0ddddddddddddddd8df8f0000ddddddddddddd0f0dddddddddddddddd8d8d0000dddddddddddddd00ddddddddddddddddd8dd0000dddddddddddddddddddddddddddddddddddd0000dddddddddddddddddddddddddddddddddddd0000", "bytes": 482, "sha256": "9a5c402c70c28e8f027496f4e2a99b58ffbf17368083130800dbd7a9f105be6b"}
    Margin = 4
    NumGlyphs = 2
  end
  object btnCancel: TDaviButton
    Left = 544
    Top = 40
    Width = 91
    Height = 25
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBtnText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 1
    Kind = "bkCancel"
    Margin = 4
  end
  object optCascadingDelete: TRadioButton
    Left = 16
    Top = 207
    Width = 113
    Height = 17
    Caption = "Verwijderen"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = ["fsBold"]
    ParentFont = false
    TabOrder = 2
  end
  object optNullify: TRadioButton
    Left = 16
    Top = 250
    Width = 113
    Height = 17
    Caption = "Leegmaken"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = ["fsBold"]
    ParentFont = false
    TabOrder = 3
  end
  object optChange: TRadioButton
    Left = 16
    Top = 293
    Width = 113
    Height = 17
    Caption = "Wijzigen"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = ["fsBold"]
    ParentFont = false
    TabOrder = 4
  end
  object grdFKAppObj: TOAGrid2
    Left = 8
    Top = 45
    Width = 513
    Height = 137
    AutoSizeColumns = true
    DoubleBuffer = false
    IncrementalSearch = true
    RootName = "grdFKAppObj"
    SettingsCaption = "Beeldopties"
    ParentColor = false
    TabOrder = 5
    TabStop = true
    AllowedInlineActions = ["AIA_DELETE", "AIA_EDIT", "AIA_INSERT"]
    NewItemText = "[nieuw]"
  end
  object cboChange: TOAFKComboBox
    Left = 224
    Top = 344
    Width = 257
    Height = 21
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ReadOnly = false
    ExitErrorBehavior = "SV_IGNORE"
    ValidateErrorBehavior = "SV_IGNORE"
    ChangeErrorBehavior = "SV_IGNORE"
    EmptyBehavior = "EB_UNINITIALIZE"
    FireOnChangeEvents = false
    ItemHeight = 16
    MaxLength = 0
    ParentColor = false
    ShowColumnsInEdit = false
    TabOrder = 6
    Text = "cboChange"
  end
end
