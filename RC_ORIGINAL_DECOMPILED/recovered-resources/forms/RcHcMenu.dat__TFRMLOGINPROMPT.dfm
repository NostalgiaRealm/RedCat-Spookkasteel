// Recovered from resources/RcHcMenu.dat/10/TFRMLOGINPROMPT/0.bin; binary values and original offsets retained in companion JSON.
object frmLoginPrompt: TfrmLoginPrompt
  Left = 251
  Top = 245
  ActiveControl = "txtUserName"
  BorderIcons = ["biSystemMenu"]
  BorderStyle = "bsDialog"
  Caption = "Inloggen"
  ClientHeight = 132
  ClientWidth = 326
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clWindowText"
  Font.Height = -11
  Font.Name = "MS Sans Serif"
  Font.Style = []
  Icon.Data = {"binary_hex": "0000010001002020100000000000e8020000160000002800000020000000400000000100040000000000800200000000000000000000100000000000000000000000000080000080000000808000800000008000800080800000c0c0c000808080000000ff0000ff000000ffff00ff000000ff00ff00ffff0000ffffff0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000ff777800000000000000000000000000ff777800000000000000000088cc0000ff77780000000000000000887f77c000ff77780000000000000008877f77c000ff77780000000000000887fff8777cc00007780000000000088fffff8088777c0007780000000000877fff880088777c00077800000000008ff77800cc008777cc077800000000008f8880cccccc0887770778000000000088800ccccccc08877707780000000000000cccccccccc0087707780000000000cccccccbbcccccc088077800000000008ccccccbbcccccc0880778000000000008ccccccc7bbbccc0007780000000000008cccccccccbbbc00077800000000000008ccccccccbbbc000778000000000000008ccccbbbbcc0ff77780000000000000008ccccccccc0ff777800000000000000008cccccccc0ff7778000000000000000008ccccccc0ff77780000000000000000008cccc000fffff000000000000000000008cc0000fffff0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000ffffffffffffff7fffffff9fffffff9ffffffc0ffffe7803fffc3803fff01803ffe00003ff800003fe000003f8000003f0000003f0000003f0000003f0000003f0000003f0000003f8000003fc000003fe000003ff000003ff800003ffc00003ffe00003fff00003fff8000ffffc080ffffe3c1fffffffffffffffffffffffff", "bytes": 766, "sha256": "8d7877b2f3fba0bd560680808a33b171d0278cbc5e71b58c177845f311c56024"}
  Position = "poScreenCenter"
  PixelsPerInch = 96
  TextHeight = 13
  object lblUsername: TLabel
    Left = 24
    Top = 24
    Width = 97
    Height = 17
    AutoSize = false
    Caption = "&Gebruikersnaam"
    FocusControl = "txtUserName"
  end
  object lblPassword: TLabel
    Left = 24
    Top = 56
    Width = 97
    Height = 17
    AutoSize = false
    Caption = "&Wachtwoord"
    FocusControl = "txtPassword"
  end
  object txtUserName: TEdit
    Left = 128
    Top = 20
    Width = 177
    Height = 21
    TabOrder = 0
  end
  object txtPassword: TEdit
    Left = 128
    Top = 52
    Width = 177
    Height = 21
    PasswordChar = "*"
    TabOrder = 1
  end
  object btnOk: TDaviButton
    Left = 96
    Top = 96
    Width = 104
    Height = 24
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBtnText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 2
    OnClick = "btnOkClick"
    Kind = "bkOK"
    Margin = 4
  end
  object btnCancel: TDaviButton
    Left = 200
    Top = 96
    Width = 104
    Height = 24
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clBtnText"
    Font.Height = -11
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 3
    Kind = "bkCancel"
    Margin = 4
  end
end
