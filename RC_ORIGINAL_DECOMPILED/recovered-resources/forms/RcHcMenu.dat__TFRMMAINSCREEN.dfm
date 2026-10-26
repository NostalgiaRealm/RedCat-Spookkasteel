// Recovered from resources/RcHcMenu.dat/10/TFRMMAINSCREEN/0.bin; binary values and original offsets retained in companion JSON.
object frmMainScreen: TfrmMainScreen
  Top = 1
  ActiveControl = "BtnNext.WrapperBtnNext"
  Caption = "frmMainScreen"
  ClientHeight = 740
  PixelsPerInch = 96
  TextHeight = 13
  object imgBackGround: TImage
    Height = 740
  end
  object lblTextBlock: TLabel
    Left = 100
    Top = 100
    Width = 567
    Height = 103
    AutoSize = false
    Caption = "lblTextBlock"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -23
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
  object imgCar: TImage
    Left = 754
    Top = 27
    Width = 10
    Height = 11
  end
  object btnPlayer: TGDIButton
    Left = 176
    Top = 536
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfPlayerListBtn"
    MouseCheckDelay = 60
    TabOrder = 7
    TabStop = true
    Caption = "Speler"
    OnClick = "btnPlayerClick"
  end
  object btnOptions: TGDIButton
    Left = 0
    Top = 536
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfOptionBtn"
    MouseCheckDelay = 60
    TabOrder = 8
    TabStop = true
    Caption = "Options"
    OnClick = "btnOptionsClick"
  end
  object BtnPrevious: TGDIButton
    TabOrder = 9
  end
  object BtnNext: TGDIButton
    TabOrder = 10
  end
  object BtnQuit: TGDIButton
    TabOrder = 1
    Caption = "Einde"
  end
  object BtnAvontuur: TGDIRadioButton
    Left = 304
    Top = 224
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 2
    TabStop = true
    Caption = "BtnAvontuur"
    MouseCheckDelay = 60
    OnClick = "BtnAvontuurClick"
  end
  object BtnQuickPlay: TGDIRadioButton
    Left = 304
    Top = 288
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 3
    TabStop = true
    Caption = "BtnQuickPlay"
    MouseCheckDelay = 60
    OnClick = "BtnQuickPlayClick"
  end
  object BtnHighScore: TGDIRadioButton
    Left = 304
    Top = 352
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 4
    TabStop = true
    Caption = "BtnHighScore"
    MouseCheckDelay = 60
    OnClick = "BtnHighScoreClick"
  end
  object imgBlack: TGDIGraphic
    LinkedGraphic.Storage = "SL_INTERNAL"
    Translucent = false
    TranslucencyFactor = 255
  end
  object lblTitle: TLabel
    Width = 61
    Height = 26
    Font.Color = "clYellow"
    Font.Name = "Comic Sans MS"
  end
end
