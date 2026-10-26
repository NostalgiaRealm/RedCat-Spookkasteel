/*
 * FUN_1001a02e at 1001a02e
 * undefined FUN_1001a02e(void)
 * Address ranges: 1001a02e-1001a072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a02e(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10025ca8 = DAT_10025ca8 + 1, DAT_10025ca8 == 0x20)) {
    FUN_10019f15(0x10);
  }
  return;
}

