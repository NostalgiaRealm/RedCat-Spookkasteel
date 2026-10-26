// Recovered from resources/RcHcMenu.dat/10/TFRMPLAYER/0.bin; binary values and original offsets retained in companion JSON.
object frmPlayer: TfrmPlayer
  Left = 0
  Top = 44
  ActiveControl = "btnDelete.WrapperbtnDelete"
  Caption = "frmPlayer"
  ClientHeight = 539
  ClientWidth = 732
  OldCreateOrder = true
  PixelsPerInch = 96
  TextHeight = 13
  object btnReqHelp: TGDIButton
    Left = 474
  end
  object btnReqCancel: TGDIButton
    Left = 384
    Top = 472
  end
  object btnReqOk: TGDIButton
    Left = 560
    Top = 472
  end
  object btnNew: TGDIButton
    Left = 0
    Top = 472
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfBtn"
    MouseCheckDelay = 60
    TabOrder = 3
    Caption = "btnNew"
    OnClick = "btnNewClick"
  end
  object btnDelete: TGDIButton
    Left = 168
    Top = 472
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfBtn"
    MouseCheckDelay = 60
    TabOrder = 4
    Caption = "btnRemove"
    OnClick = "btnDeleteClick"
  end
  object Player1: TGDIRadioButton
    Left = 16
    Top = 168
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 5
    Caption = "Player1"
    MouseCheckDelay = 60
  end
  object Player2: TGDIRadioButton
    Left = 192
    Top = 168
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 6
    Caption = "Player2"
    MouseCheckDelay = 60
  end
  object Player3: TGDIRadioButton
    Left = 368
    Top = 168
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 7
    Caption = "Player3"
    MouseCheckDelay = 60
  end
  object Player4: TGDIRadioButton
    Left = 544
    Top = 168
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 8
    Caption = "Player4"
    MouseCheckDelay = 60
  end
  object Player5: TGDIRadioButton
    Left = 16
    Top = 360
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 9
    Caption = "Player5"
    MouseCheckDelay = 60
  end
  object Player6: TGDIRadioButton
    Left = 192
    Top = 360
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 10
    Caption = "Player6"
    MouseCheckDelay = 60
  end
  object Player7: TGDIRadioButton
    Left = 368
    Top = 360
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 11
    Caption = "Player7"
    MouseCheckDelay = 60
  end
  object Player8: TGDIRadioButton
    Left = 544
    Top = 360
    Width = 175
    Height = 67
    Checked = false
    Definition = "Data.gdfRadioBtn"
    TabOrder = 12
    Caption = "Player8"
    MouseCheckDelay = 60
  end
  object lblChoose: TLabel
    Left = 128
    Top = 88
    Width = 61
    Height = 18
    Caption = "LblChoose"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -13
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentFont = false
    Transparent = true
  end
end
