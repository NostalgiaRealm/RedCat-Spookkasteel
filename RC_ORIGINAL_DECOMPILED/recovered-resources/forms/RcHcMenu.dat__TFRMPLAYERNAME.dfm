// Recovered from resources/RcHcMenu.dat/10/TFRMPLAYERNAME/0.bin; binary values and original offsets retained in companion JSON.
object frmPlayerName: TfrmPlayerName
  Left = 135
  Top = 204
  ActiveControl = "btnReqOk.WrapperbtnReqOk"
  Caption = "frmPlayerName"
  OldCreateOrder = true
  PixelsPerInch = 96
  TextHeight = 13
  object btnReqOk: TGDIButton
    Left = 0
  end
  object lblEnterName: TLabel
    Left = 40
    Top = 85
    Width = 289
    Height = 61
    AutoSize = false
    Caption = "Enter Name"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clYellow"
    Font.Height = -24
    Font.Name = "Comic Sans MS"
    Font.Style = ["fsBold"]
    ParentFont = false
    Transparent = true
    Layout = "tlBottom"
    WordWrap = true
  end
  object txtPlayerName: TEdit
    Left = 72
    Top = 168
    Width = 233
    Height = 29
    BorderStyle = "bsNone"
    Color = "clWhite"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBlack"
    Font.Height = -16
    Font.Name = "Comic Sans MS"
    Font.Style = []
    MaxLength = 12
    ParentFont = false
    TabOrder = 3
    OnChange = "txtPlayerNameChange"
  end
end
