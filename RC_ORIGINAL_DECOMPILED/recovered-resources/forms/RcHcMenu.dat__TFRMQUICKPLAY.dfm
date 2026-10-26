// Recovered from resources/RcHcMenu.dat/10/TFRMQUICKPLAY/0.bin; binary values and original offsets retained in companion JSON.
object frmQuickPlay: TfrmQuickPlay
  ActiveControl = "btnLevel5.WrapperbtnLevel5"
  Caption = "frmQuickPlay"
  PixelsPerInch = 96
  TextHeight = 13
  object btnHelp: TGDIButton
    TabOrder = 1
  end
  object BtnPrevious: TGDIButton
    TabOrder = 10
  end
  object BtnNext: TGDIButton
    TabOrder = 0
  end
  object BtnQuit: TGDIButton
    TabOrder = 2
  end
  object btnLevel1: TGDIRadioButton
    Left = 40
    Top = 192
    Width = 120
    Height = 80
    Checked = false
    Definition = "Data.gdfLevel1Btn"
    TabOrder = 4
    TabStop = true
    Caption = "btnLevel1"
    MouseCheckDelay = 60
    OnClick = "btnLevel1Click"
  end
  object btnLevel2: TGDIRadioButton
    Left = 184
    Top = 192
    Width = 120
    Height = 80
    Checked = false
    Definition = "Data.gdflevel2Btn"
    TabOrder = 5
    TabStop = true
    Caption = "btnLevel2"
    MouseCheckDelay = 60
    OnClick = "btnLevel2Click"
  end
  object btnLevel3: TGDIRadioButton
    Left = 328
    Top = 192
    Width = 120
    Height = 80
    Checked = false
    Definition = "Data.gdfLevel3Btn"
    TabOrder = 6
    TabStop = true
    Caption = "btnLevel3"
    MouseCheckDelay = 60
    OnClick = "btnLevel3Click"
  end
  object btnLevel4: TGDIRadioButton
    Left = 472
    Top = 192
    Width = 120
    Height = 80
    Checked = false
    Definition = "Data.gdfLevel4Btn"
    TabOrder = 7
    TabStop = true
    Caption = "btnLevel4"
    MouseCheckDelay = 60
    OnClick = "btnLevel4Click"
  end
  object btnLevel5: TGDIRadioButton
    Left = 616
    Top = 192
    Width = 120
    Height = 80
    Checked = false
    Definition = "Data.gdfLevel5Btn"
    TabOrder = 8
    TabStop = true
    Caption = "btnLevel5"
    MouseCheckDelay = 60
    OnClick = "btnLevel5Click"
  end
  object lblSelectLevel: TLabel
    Left = 98
    Top = 90
    Width = 567
    Height = 111
    AutoSize = false
    Caption = "lblSelectLevel"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentFont = false
    Transparent = true
    WordWrap = true
  end
end
