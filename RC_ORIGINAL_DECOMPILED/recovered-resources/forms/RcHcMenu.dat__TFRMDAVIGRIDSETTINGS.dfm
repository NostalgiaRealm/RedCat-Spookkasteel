// Recovered from resources/RcHcMenu.dat/10/TFRMDAVIGRIDSETTINGS/0.bin; binary values and original offsets retained in companion JSON.
object frmDaviGridSettings: TfrmDaviGridSettings
  Left = 200
  Top = 107
  BorderIcons = ["biSystemMenu"]
  BorderStyle = "bsDialog"
  Caption = "frmDaviGridSettings"
  ClientHeight = 374
  ClientWidth = 561
  Color = "clBtnFace"
  Font.Charset = "DEFAULT_CHARSET"
  Font.Color = "clWindowText"
  Font.Height = -14
  Font.Name = "MS Sans Serif"
  Font.Style = []
  OldCreateOrder = true
  Position = "poScreenCenter"
  PixelsPerInch = 120
  TextHeight = 16
  object tabMain: TPageControl
    Left = 10
    Top = 10
    Width = 543
    Height = 316
    ActivePage = "tabColumns"
    TabOrder = 0
    object tabColumns: TTabSheet
      Caption = "Kolommen"
      object lblColumns: TLabel
        Left = 20
        Top = 20
        Width = 218
        Height = 16
        Caption = "&Markeer de kolommen die u wilt zien."
        FocusControl = "lstColumns"
      end
      object lblMoveColumn: TLabel
        Left = 305
        Top = 138
        Width = 149
        Height = 60
        AutoSize = false
        Caption = "Wijzig de positie van de geselecteerde kolom met onderstaande knoppen."
        WordWrap = true
      end
      object bvlSeperator: TBevel
        Left = 305
        Top = 128
        Width = 149
        Height = 11
        Shape = "bsTopLine"
      end
      object lstColumns: TCheckListBox
        Left = 20
        Top = 49
        Width = 277
        Height = 213
        OnClickCheck = "lstColumnsClick"
        ItemHeight = 16
        TabOrder = 0
        OnClick = "lstColumnsClick"
      end
      object btnSelectAll: TDaviGlyphButton2
        Left = 305
        Top = 49
        Width = 148
        Height = 30
        Hint = "Alles Markeren"
        Font.Charset = "DEFAULT_CHARSET"
        Font.Color = "clWindowText"
        Font.Height = -13
        Font.Name = "MS Sans Serif"
        Font.Style = []
        ParentFont = false
        TabOrder = 1
        OnClick = "btnSelectAllClick"
        Kind = "DK_SELECTALL"
      end
      object btnUnselectAll: TDaviGlyphButton2
        Left = 305
        Top = 79
        Width = 148
        Height = 29
        Hint = "Alles Demarkeren"
        Font.Charset = "DEFAULT_CHARSET"
        Font.Color = "clWindowText"
        Font.Height = -13
        Font.Name = "MS Sans Serif"
        Font.Style = []
        ParentFont = false
        TabOrder = 2
        OnClick = "btnUnselectAllClick"
        Kind = "DK_UNSELECTALL"
      end
      object btnMoveUp: TDaviGlyphButton2
        Left = 305
        Top = 202
        Width = 148
        Height = 29
        Hint = "Vorige"
        Caption = "Om&hoog"
        Font.Charset = "DEFAULT_CHARSET"
        Font.Color = "clWindowText"
        Font.Height = -13
        Font.Name = "MS Sans Serif"
        Font.Style = []
        ParentFont = false
        TabOrder = 3
        OnClick = "btnMoveUpClick"
        Kind = "DK_CUSTOM"
        Glyph.Data = {"binary_hex": "de010000424dde01000000000000760000002800000024000000120000000100040000000000680100000000000000000000100000000000000000000000000080000080000000808000800000008000800080800000c0c0c000808080000000ff0000ff000000ffff00ff000000ff00ff00ffff0000ffffff00dddddddddddddddddddddddddddddddddddd0000dddddddddddddddddddddddddddddddddddd0000ddddddd88888dddddddddddddfffffdddddd0000dddddd000008dddddddddddd88888fdddddd0000dddddd0b3308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308888dddddddff8fdd8ffffddd0000ddd0000bb30000ddddddd8888ddd8888dddd0000dddd0fbbb3330ddddddddd8dfddddd8ddddd0000ddddd0fbbb30ddddddddddd8dfddd8dddddd0000dddddd0fb30ddddddddddddd8dfd8ddddddd0000ddddddd0f0ddddddddddddddd8d8dddddddd0000dddddddd0ddddddddddddddddd8ddddddddd0000dddddddddddddddddddddddddddddddddddd0000dddddddddddddddddddddddddddddddddddd0000", "bytes": 482, "sha256": "888557dc6cd6f85beb92ea731200071118753aee0dc6db5e31b1db7b5b2aab65"}
      end
      object btnMoveDown: TDaviGlyphButton2
        Left = 305
        Top = 231
        Width = 148
        Height = 30
        Hint = "Volgende"
        Caption = "Om&laag"
        Font.Charset = "DEFAULT_CHARSET"
        Font.Color = "clWindowText"
        Font.Height = -13
        Font.Name = "MS Sans Serif"
        Font.Style = []
        ParentFont = false
        TabOrder = 4
        OnClick = "btnMoveDownClick"
        Kind = "DK_CUSTOM"
        Glyph.Data = {"binary_hex": "de010000424dde01000000000000760000002800000024000000120000000100040000000000680100000000000000000000100000000000000000000000000080000080000000808000800000008000800080800000c0c0c000808080000000ff0000ff000000ffff00ff000000ff00ff00ffff0000ffffff00dddddddddddddddddddddddddddddddddddd0000dddddddddddddddddddddddddddddddddddd0000ddddddddd8dddddddddddddddddfdddddddd0000dddddddd088ddddddddddddddd8dfddddddd0000ddddddd03088ddddddddddddd8d8dfdddddd0000dddddd0fb3088ddddddddddd8ddd8dfddddd0000ddddd0fbbb3088ddddddddd8ddddd8dfdddd0000dddd0fffbbb3088ddddddd8fffdddf8dfddd0000ddd0000fb30000ddddddd8888fdd8888dddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0fb308dddddddddddd8fdd8fdddddd0000dddddd0ffb08dddddddddddd8fff8fdddddd0000dddddd00000ddddddddddddd88888ddddddd0000dddddddddddddddddddddddddddddddddddd0000dddddddddddddddddddddddddddddddddddd0000", "bytes": 482, "sha256": "77eb0fac2eaa58ff5e72684e4b1a6428621d3d737b89e20b1ac3f5c1f9e0e5da"}
      end
    end
    object tabSortOrder: TTabSheet
      Caption = "Sortering"
      object lblSort1: TLabel
        Left = 20
        Top = 20
        Width = 63
        Height = 16
        Caption = "&Sorteer op"
        FocusControl = "cboSortColumn1"
      end
      object lblSort2: TLabel
        Left = 59
        Top = 108
        Width = 44
        Height = 16
        Caption = "&Dan op"
        FocusControl = "cboSortColumn2"
      end
      object lblSort3: TLabel
        Left = 98
        Top = 197
        Width = 44
        Height = 16
        Caption = "Dan &op"
        FocusControl = "cboSortColumn3"
      end
      object pboSort1: TPaintBox
        Left = 108
        Top = 17
        Width = 31
        Height = 21
        Color = "clBtnFace"
        ParentColor = false
        OnPaint = "pboSort1Paint"
      end
      object pboSort2: TPaintBox
        Left = 148
        Top = 106
        Width = 30
        Height = 21
        OnPaint = "pboSort2Paint"
      end
      object pboSort3: TPaintBox
        Left = 187
        Top = 194
        Width = 31
        Height = 21
        OnPaint = "pboSort3Paint"
      end
      object cboSortColumn1: TComboBox
        Left = 138
        Top = 15
        Width = 267
        Height = 24
        Style = "csDropDownList"
        ItemHeight = 0
        TabOrder = 0
        OnChange = "cboSortColumnChange"
      end
      object cboSortColumn2: TComboBox
        Left = 177
        Top = 103
        Width = 267
        Height = 24
        Style = "csDropDownList"
        ItemHeight = 0
        TabOrder = 2
        OnChange = "cboSortColumnChange"
      end
      object cboSortColumn3: TComboBox
        Left = 217
        Top = 192
        Width = 267
        Height = 24
        Style = "csDropDownList"
        ItemHeight = 0
        TabOrder = 4
        OnChange = "cboSortColumnChange"
      end
      object pnlSortOrder1: TPanel
        Left = 138
        Top = 44
        Width = 188
        Height = 42
        BevelOuter = "bvNone"
        TabOrder = 1
        object optSortAsc1: TRadioButton
          Left = 0
          Top = 0
          Width = 139
          Height = 21
          Caption = "Oplopend"
          Checked = true
          TabOrder = 0
          TabStop = true
          OnClick = "optSortClick"
        end
        object optSortDesc1: TRadioButton
          Left = 0
          Top = 21
          Width = 139
          Height = 21
          Caption = "Aflopend"
          TabOrder = 1
          OnClick = "optSortClick"
        end
      end
      object pnlSortOrder2: TPanel
        Left = 177
        Top = 133
        Width = 189
        Height = 42
        BevelOuter = "bvNone"
        TabOrder = 3
        object optSortAsc2: TRadioButton
          Left = 0
          Top = 0
          Width = 139
          Height = 21
          Caption = "Oplopend"
          Checked = true
          TabOrder = 0
          TabStop = true
          OnClick = "optSortClick"
        end
        object optSortDesc2: TRadioButton
          Left = 0
          Top = 21
          Width = 139
          Height = 21
          Caption = "Aflopend"
          TabOrder = 1
          OnClick = "optSortClick"
        end
      end
      object pnlSortOrder3: TPanel
        Left = 217
        Top = 222
        Width = 188
        Height = 41
        BevelOuter = "bvNone"
        TabOrder = 5
        object optSortAsc3: TRadioButton
          Left = 0
          Top = 0
          Width = 139
          Height = 21
          Caption = "Oplopend"
          Checked = true
          TabOrder = 0
          TabStop = true
          OnClick = "optSortClick"
        end
        object optSortDesc3: TRadioButton
          Left = 0
          Top = 21
          Width = 139
          Height = 21
          Caption = "Aflopend"
          TabOrder = 1
          OnClick = "optSortClick"
        end
      end
    end
  end
  object btnOk: TDaviGlyphButton2
    Left = 167
    Top = 335
    Width = 128
    Height = 29
    Hint = "OK"
    Default = true
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -13
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 1
    OnClick = "btnOKClick"
    Kind = "DK_OK"
  end
  object btnCancel: TDaviGlyphButton2
    Left = 295
    Top = 335
    Width = 128
    Height = 29
    Hint = "Annuleren"
    Cancel = true
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -13
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ModalResult = 2
    ParentFont = false
    TabOrder = 2
    Kind = "DK_CANCEL"
  end
  object btnHelp: TDaviGlyphButton2
    Left = 423
    Top = 335
    Width = 128
    Height = 29
    Hint = "Help"
    Font.Charset = "DEFAULT_CHARSET"
    Font.Color = "clWindowText"
    Font.Height = -13
    Font.Name = "MS Sans Serif"
    Font.Style = []
    ParentFont = false
    TabOrder = 3
    Kind = "DK_HELP"
  end
end
