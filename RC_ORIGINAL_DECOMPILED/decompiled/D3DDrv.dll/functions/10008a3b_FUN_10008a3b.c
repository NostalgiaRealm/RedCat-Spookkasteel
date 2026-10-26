/*
 * FUN_10008a3b at 10008a3b
 * undefined4 __cdecl FUN_10008a3b(uint param_1)
 * Address ranges: 10008a3b-10008a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10008a3b(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101c3dc0) &&
     ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c637(param_1);
    uVar1 = FUN_10008a98(param_1);
    FUN_1000c696(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000c3c5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c3ce();
  *pDVar2 = 0;
  return 0xffffffff;
}

