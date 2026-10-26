/*
 * Ctl3dCtlColorEx at 5f001d50
 * undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
 * Address ranges: 5f001d50-5f001dd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dCtlColorEx(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
                    /* 0x1d50  18  Ctl3dCtlColorEx */
  if (((DAT_5f005240 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_5f005260 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongW(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_5f001da4;
      }
    }
    return 0;
  }
LAB_5f001da4:
  SetTextColor(param_2,DAT_5f005270);
  SetBkColor(param_2,DAT_5f005268);
  return DAT_5f005288;
}

