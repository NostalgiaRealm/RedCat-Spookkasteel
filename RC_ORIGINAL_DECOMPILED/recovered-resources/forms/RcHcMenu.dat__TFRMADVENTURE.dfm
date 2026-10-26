// Recovered from resources/RcHcMenu.dat/10/TFRMADVENTURE/0.bin; binary values and original offsets retained in companion JSON.
object frmAdventure: TfrmAdventure
  Left = 67
  Top = 99
  ActiveControl = "BtnNext.WrapperBtnNext"
  Caption = "frmAdventure"
  PixelsPerInch = 96
  TextHeight = 13
  object btnHelp: TGDIButton
    TabOrder = 1
  end
  object BtnPrevious: TGDIButton
    TabOrder = 6
  end
  object BtnNext: TGDIButton
    TabOrder = 0
    OnClick = "BtnNextClick"
  end
  object BtnQuit: TGDIButton
    TabOrder = 2
  end
  object btnContinue: TGDIRadioButton
    Left = 296
    Top = 392
    Width = 175
    Height = 67
    Checked = true
    Definition = "Data.gdfRadioBtn"
    TabOrder = 4
    TabStop = true
    Caption = "btnContinue"
    MouseCheckDelay = 60
  end
  object btnNewAdventure: TGDIRadioButton
    Left = 296
    Top = 456
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 5
    TabStop = true
    Caption = "btnNewAdventure"
    MouseCheckDelay = 60
  end
  object lblPlayerInfo: TLabel
    Left = 410
    Top = 322
    Width = 191
    Height = 31
    AutoSize = false
    Caption = "lblPlayerInfo"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
  object AdvLevelBtn: TGDIButton
    Left = 296
    Top = 160
    Width = 120
    Height = 80
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfCurLevel1"
    MouseCheckDelay = 60
    TabOrder = 7
    Caption = "AdvLevelBtn"
  end
  object lblScore: TLabel
    Left = 410
    Top = 346
    Width = 191
    Height = 31
    AutoSize = false
    Caption = "lblPlayerInfo"
    Color = "clBackground"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentColor = false
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
  object lblPlayerScoreText: TLabel
    Left = 298
    Top = 346
    Width = 95
    Height = 31
    AutoSize = false
    Caption = "lblPlayerInfo"
    Color = "clBackground"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentColor = false
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
  object lblPlayerNameText: TLabel
    Left = 298
    Top = 322
    Width = 95
    Height = 31
    AutoSize = false
    Caption = "lblPlayerInfo"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
end
