// Recovered from resources/RcHcMenu.dat/10/TFRMBALLOON/0.bin; binary values and original offsets retained in companion JSON.
object frmBalloon: TfrmBalloon
  Left = 193
  Top = 345
  BorderIcons = []
  BorderStyle = "bsNone"
  Caption = "frmBalloon"
  ClientHeight = 335
  ClientWidth = 294
  Color = 15590634
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clBlack"
  Font.Height = -13
  Font.Name = "Arial"
  Font.Style = []
  FormStyle = "fsStayOnTop"
  OldCreateOrder = true
  OnClose = "FormClose"
  OnDeactivate = "FormDeactivate"
  OnHide = "FormHide"
  OnPaint = "FormPaint"
  OnShow = "FormShow"
  PixelsPerInch = 96
  TextHeight = 16
  object lblCaption: TLabel
    Left = 6
    Top = 6
    Width = 55
    Height = 14
    Caption = "lblCaption"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBlack"
    Font.Height = -11
    Font.Name = "Arial"
    Font.Style = ["fsBold"]
    ParentFont = false
    Transparent = true
  end
  object btnClose: TDaviSpeedButton
    Left = 168
    Top = 6
    Width = 12
    Height = 12
    DaviColors.BtnFace = 15590634
    DaviColors.BtnShadow = 15590634
    DaviColors.BtnHighlight = "clWhite"
    DaviColors.Btn3DLight = 15590634
    DaviColors.Btn3DDkShadow = "clBlack"
    DaviColors.BtnDisabledLight = "clWhite"
    DaviColors.BtnDisabledShadow = "clBlack"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBlack"
    Font.Height = -12
    Font.Name = "Arail"
    Font.Style = ["fsBold"]
    Glyph.Data = {"binary_hex": "ee000000424dee000000000000007600000028000000140000000a000000010004000000000078000000120b0000120b0000100000001000000080808000c89eb7009260620000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111110000121111112110111111010000112111121111011110110000111211211111101101110000111122111111110011110000111122111111110011110000111211211111101101110000112111121111011110110000121111112110111111010000111111111111111111110000", "bytes": 242, "sha256": "e4df62b591ee86d635c9eb4f791d17d0d172c69d5334f7ebac5cdd80e1e58639"}
    NumGlyphs = 2
    ParentFont = false
    OnClick = "btnCloseClick"
  end
  object tmrPos: TTimer
    Enabled = false
    Interval = 500
    OnTimer = "tmrPosTimer"
    Left = 184
    Top = 64
  end
  object tmrFocus: TTimer
    Enabled = false
    Interval = 10
    OnTimer = "tmrFocusTimer"
    Left = 136
    Top = 120
  end
end
