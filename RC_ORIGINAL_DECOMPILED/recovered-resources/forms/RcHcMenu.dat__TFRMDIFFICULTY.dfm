// Recovered from resources/RcHcMenu.dat/10/TFRMDIFFICULTY/0.bin; binary values and original offsets retained in companion JSON.
object frmDifficulty: TfrmDifficulty
  ActiveControl = "BtnQuit.WrapperBtnQuit"
  Caption = "frmDifficulty"
  PixelsPerInch = 96
  TextHeight = 13
  object btnHelp: TGDIButton
    TabOrder = 1
  end
  object BtnPrevious: TGDIButton
    TabOrder = 7
  end
  object BtnNext: TGDIButton
    TabOrder = 0
    Caption = "btnNext"
    OnClick = "BtnNextClick"
  end
  object BtnQuit: TGDIButton
    TabOrder = 2
  end
  object lblDifficulty: TLabel
    Left = 98
    Top = 98
    Width = 591
    Height = 79
    AutoSize = false
    Caption = "lblDifficulty"
    Color = "clWhite"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentColor = false
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
  object btnEasyD: TGDIRadioButton
    Left = 96
    Top = 176
    Width = 100
    Height = 50
    Checked = false
    Definition = "Data.gdfEasy"
    TabOrder = 4
    TabStop = true
    Caption = "btnEasyD"
    MouseCheckDelay = 60
    OnClick = "btnEasyDClick"
  end
  object BtnNormalD: TGDIRadioButton
    Left = 328
    Top = 176
    Width = 100
    Height = 50
    Checked = false
    Definition = "Data.gdfNormal"
    TabOrder = 5
    TabStop = true
    Caption = "BtnNormalD"
    MouseCheckDelay = 60
    OnClick = "BtnNormalDClick"
  end
  object BtnHardD: TGDIRadioButton
    Left = 560
    Top = 176
    Width = 100
    Height = 50
    Checked = false
    Definition = "Data.gdfHard"
    TabOrder = 6
    TabStop = true
    Caption = "BtnHardD"
    MouseCheckDelay = 60
    OnClick = "BtnHardDClick"
  end
end
