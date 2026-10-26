/*
 * FUN_0055da30 at 0055da30
 * undefined FUN_0055da30(void)
 * Address ranges: 0055da30-0055daa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055da30(HWND param_1,int param_2)

{
  undefined *lParam;
  uint uVar1;
  
  SendDlgItemMessageA(param_1,0x3ec,0x14b,0,0);
  uVar1 = 0;
  if ((&DAT_006ba8f4)[param_2 * 0x2df] != 0) {
    lParam = &DAT_006ba948 + param_2 * 0xb7c;
    do {
      SendDlgItemMessageA(param_1,0x3ec,0x143,0,(LPARAM)lParam);
      uVar1 = uVar1 + 1;
      lParam = lParam + 0x81;
    } while (uVar1 < (uint)(&DAT_006ba8f4)[param_2 * 0x2df]);
    return CONCAT31((int3)((uint)(&DAT_006ba8f4)[param_2 * 0x2df] >> 8),1);
  }
  return 1;
}

