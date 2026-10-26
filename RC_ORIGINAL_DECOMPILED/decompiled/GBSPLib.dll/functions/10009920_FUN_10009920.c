/*
 * FUN_10009920 at 10009920
 * undefined FUN_10009920(void)
 * Address ranges: 10009920-100099b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009920(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = param_1 * 0x24;
  puVar1 = (undefined4 *)(DAT_1014e2e8 + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = *(undefined4 *)(DAT_1014e2e8 + 0xc + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
  param_2[4] = *(undefined4 *)(DAT_1014e2e8 + 0x10 + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
  if (*(int *)(param_1 + 0xc + DAT_1014e288) != 0) {
    FUN_10014560(param_2);
    param_2[3] = -(float)param_2[3];
  }
  return;
}

