// Recovered from resources/RcHcMenu.dat/10/TFRMINTRO/0.bin; binary values and original offsets retained in companion JSON.
object frmIntro: TfrmIntro
  Left = 0
  Top = 0
  BorderStyle = "bsNone"
  Caption = "frmIntro"
  ClientHeight = 600
  ClientWidth = 800
  Color = "clBtnFace"
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clWindowText"
  Font.Height = -11
  Font.Name = "MS Sans Serif"
  Font.Style = []
  OldCreateOrder = false
  Position = "poScreenCenter"
  OnKeyDown = "FormKeyDown"
  OnMouseDown = "FormMouseDown"
  OnShow = "FormShow"
  PixelsPerInch = 96
  TextHeight = 13
  object MenuIntro: TMediaPlayer
    Left = 120
    Top = 168
    Width = 253
    Height = 30
    Visible = false
    TabOrder = 0
    OnNotify = "MenuIntroNotify"
  end
end
