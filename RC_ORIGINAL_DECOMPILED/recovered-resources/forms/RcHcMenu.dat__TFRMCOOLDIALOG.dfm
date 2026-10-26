// Recovered from resources/RcHcMenu.dat/10/TFRMCOOLDIALOG/0.bin; binary values and original offsets retained in companion JSON.
object frmCoolDialog: TfrmCoolDialog
  Left = 160
  Top = 191
  ActiveControl = "btnReqOk.WrapperbtnReqOk"
  BorderStyle = "bsNone"
  Caption = "frmCoolDialog"
  ClientHeight = 311
  ClientWidth = 448
  Color = "clBlue"
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clWindowText"
  Font.Height = -11
  Font.Name = "MS Sans Serif"
  Font.Style = []
  OldCreateOrder = false
  Position = "poDesktopCenter"
  OnShow = "GDIFormShow"
  RegionLink.Storage = "SL_EXTERNAL"
  RegionLink.GraphicName = ""
  Transparent = false
  TransparentColor = "clTeal"
  DoubleBuffered = true
  PixelsPerInch = 96
  TextHeight = 13
  object imgBackGround: TGDIGraphic
    Left = 136
    Top = 8
    Width = 100
    Height = 50
    LinkedGraphic.Storage = "SL_EXTERNAL"
    LinkedGraphic.GraphicName = ""
    TransparentColor = "clBlack"
    Transparent = false
    TransparentMode = "tmAuto"
    Translucent = false
    TranslucencyFactor = 255
  end
  object btnReqHelp: TGDIButton
    Left = 274
    Top = 0
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfHelpBtn"
    MouseCheckDelay = 60
    TabOrder = 1
    TabStop = true
    Caption = "btnReqHelp"
    OnClick = "btnReqHelpClick"
  end
  object btnReqCancel: TGDIButton
    Left = 272
    Top = 248
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfCancelBtn"
    MouseCheckDelay = 60
    TabOrder = 2
    TabStop = true
    Caption = "btnReqCancel"
    OnClick = "btnReqCancelClick"
  end
  object btnReqOk: TGDIButton
    Left = 104
    Top = 248
    Width = 175
    Height = 67
    Cancel = false
    Default = false
    ModalResult = 0
    Definition = "Data.gdfOkBtn"
    MouseCheckDelay = 60
    TabOrder = 0
    TabStop = true
    Caption = "btnReqOk"
    OnClick = "btnReqOkClick"
  end
  object imgTitle: TGDIGraphic
    Left = 8
    Top = 8
    Width = 128
    Height = 60
    LinkedGraphic.Storage = "SL_EXTERNAL"
    LinkedGraphic.GraphicName = ".\\MenuGfx\\00030000.tga"
    TransparentColor = "clBlack"
    Transparent = false
    TransparentMode = "tmAuto"
    Translucent = true
    TranslucencyFactor = 255
  end
  object imgBlack: TGDIGraphic
    Left = 360
    Top = 72
    Width = 100
    Height = 50
    LinkedGraphic.Storage = "SL_INTERNAL"
    LinkedGraphic.GraphicName = ""
    LinkedGraphic.TDIB = {"binary_hex": "", "bytes": 0, "sha256": "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"}
    TransparentColor = "clBlack"
    Transparent = false
    TransparentMode = "tmAuto"
    Translucent = true
    TranslucencyFactor = 100
  end
  object lblTitle: TLabel
    Left = 8
    Top = 72
    Width = 61
    Height = 26
    Caption = "lblTitle"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWhite"
    Font.Height = -19
    Font.Name = "Comic Sans MS"
    Font.Style = []
    ParentFont = false
    Transparent = true
  end
  object pnlAgent: TTransparentControl
    Left = 11
    Top = 104
    Width = 44
    Height = 66
  end
end
