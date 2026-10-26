/*
 * FUN_1002e36a at 1002e36a
 * undefined FUN_1002e36a(void)
 * Address ranges: 1002e36a-1002e3ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e36a(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1052a3f8 = DAT_1052a3f8 + 1, DAT_1052a3f8 == 0x20)) {
    FUN_1002e251(0x10);
  }
  return;
}

