/*
 * FUN_0055dab0 at 0055dab0
 * undefined FUN_0055dab0(void)
 * Address ranges: 0055dab0-0055db0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055dab0(HWND param_1)

{
  uint uVar1;
  undefined *lParam;
  
  SendDlgItemMessageA(param_1,0x3eb,0x14b,0,0);
  uVar1 = 0;
  if (DAT_006c8d98 != 0) {
    lParam = &DAT_006ba86d;
    do {
      SendDlgItemMessageA(param_1,0x3eb,0x143,0,(LPARAM)lParam);
      uVar1 = uVar1 + 1;
      lParam = lParam + 0xb7c;
    } while (uVar1 < DAT_006c8d98);
    return 1;
  }
  return 1;
}

