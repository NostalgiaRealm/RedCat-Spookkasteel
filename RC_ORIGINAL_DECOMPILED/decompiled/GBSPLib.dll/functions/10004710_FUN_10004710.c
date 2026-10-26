/*
 * FUN_10004710 at 10004710
 * undefined FUN_10004710(void)
 * Address ranges: 10004710-10004758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004710(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != -1) {
    FUN_10004710(param_1[4]);
    param_1 = (int *)param_1[5];
    iVar1 = *param_1;
  }
  if (((param_1[2] & 1U) == 0) && (param_1[0x10] != DAT_1014e238)) {
    param_1[2] = CONCAT31((uint3)((uint)param_1[2] >> 8) & 0xffff00,1);
    DAT_1014e234 = DAT_1014e234 + 1;
  }
  return;
}

