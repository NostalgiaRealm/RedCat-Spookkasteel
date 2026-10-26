// Recovered from resources/RcHcMenu.dat/10/TFRMKEYCONFIG/0.bin; binary values and original offsets retained in companion JSON.
object frmKeyConfig: TfrmKeyConfig
  Left = 57
  Top = 59
  ActiveControl = "btnJump.WrapperbtnJump"
  Caption = "frmKeyConfig"
  ClientHeight = 574
  ClientWidth = 764
  KeyPreview = true
  OldCreateOrder = true
  OnKeyUp = "FormKeyDown"
  PixelsPerInch = 96
  TextHeight = 13
  object btnReqHelp: TGDIButton
    Left = 586
  end
  object btnReqCancel: TGDIButton
    Left = 592
    Top = 504
  end
  object btnReqOk: TGDIButton
    Left = 416
    Top = 504
    Default = true
  end
  object btnForward: TGDIButton
    Left = 216
    Top = 208
    Width = 50
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyN"
    MouseCheckDelay = 60
    TabOrder = 3
    Caption = "btnForward"
    OnClick = "btnForwardClick"
  end
  object btnLeft: TGDIButton
    Left = 160
    Top = 256
    Width = 50
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyN"
    MouseCheckDelay = 60
    TabOrder = 4
    Caption = "btnLeft"
    OnClick = "btnLeftClick"
  end
  object btnRight: TGDIButton
    Left = 272
    Top = 256
    Width = 50
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyN"
    MouseCheckDelay = 60
    TabOrder = 5
    Caption = "btnRight"
    OnClick = "btnRightClick"
  end
  object btnBack: TGDIButton
    Left = 216
    Top = 312
    Width = 50
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyN"
    MouseCheckDelay = 60
    TabOrder = 6
    Caption = "btnBack"
    OnClick = "btnBackClick"
  end
  object btnShoot: TGDIButton
    Left = 416
    Top = 200
    Width = 96
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyL"
    MouseCheckDelay = 60
    TabOrder = 7
    Caption = "btnShoot"
    OnClick = "btnShootClick"
  end
  object btnJump: TGDIButton
    Left = 416
    Top = 264
    Width = 96
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyL"
    MouseCheckDelay = 60
    TabOrder = 8
    Caption = "btnJump"
    OnClick = "btnJumpClick"
  end
  object btnSideStep: TGDIButton
    Left = 416
    Top = 328
    Width = 96
    Height = 50
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfKeyL"
    MouseCheckDelay = 60
    TabOrder = 9
    Caption = "btnSideStep"
    OnClick = "btnSideStepClick"
  end
  object btnDefault: TGDIButton
    Left = 592
    Top = 440
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfBtn"
    MouseCheckDelay = 60
    TabOrder = 13
    Caption = "btnDefault"
    OnClick = "btnDefaultClick"
  end
  object btnConfig: TGDIButton
    Left = 594
    Top = 376
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfBtn"
    MouseCheckDelay = 60
    TabOrder = 10
    Caption = "btnConfig"
    OnClick = "btnConfigClick"
  end
  object LblForward: TLabel
    Left = 216
    Top = 168
    Width = 52
    Height = 13
    Caption = "LblForward"
    Color = "clBlue"
    ParentColor = false
    Transparent = true
  end
  object LblRight: TLabel
    Left = 328
    Top = 256
    Width = 39
    Height = 13
    Caption = "LblRight"
    Transparent = true
  end
  object LblBack: TLabel
    Left = 216
    Top = 376
    Width = 39
    Height = 13
    Caption = "LblBack"
    Transparent = true
  end
  object LblLeft: TLabel
    Left = 88
    Top = 264
    Width = 32
    Height = 13
    Caption = "LblLeft"
    Transparent = true
  end
  object LblShoot: TLabel
    Left = 520
    Top = 200
    Width = 42
    Height = 13
    Caption = "LblShoot"
    Transparent = true
  end
  object LblJump: TLabel
    Left = 520
    Top = 264
    Width = 39
    Height = 13
    Caption = "LblJump"
    Transparent = true
  end
  object LblSideStep: TLabel
    Left = 520
    Top = 328
    Width = 57
    Height = 13
    Caption = "LblSideStep"
    Transparent = true
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
  object EditKey: TEdit
    Left = 557
    Top = -5
    Width = 28
    Height = 28
    TabStop = false
    AutoSize = false
    BorderStyle = "bsNone"
    CharCase = "ecUpperCase"
    Color = 14540253
    Enabled = false
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -15
    Font.Name = "Arial"
    Font.Style = ["fsBold"]
    MaxLength = 1
    ParentFont = false
    TabOrder = 12
    Text = "A"
    Visible = false
  end
end
