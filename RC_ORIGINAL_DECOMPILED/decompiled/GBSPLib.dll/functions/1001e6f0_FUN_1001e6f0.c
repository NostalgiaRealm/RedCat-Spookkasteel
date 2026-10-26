/*
 * FUN_1001e6f0 at 1001e6f0
 * undefined FUN_1001e6f0(void)
 * Address ranges: 1001e6f0-1001e752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001e6f0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[5];
  if ((int)uVar1 <= (int)param_1[4]) {
    param_1[5] = uVar1 * 2;
    uVar1 = FUN_10014370(param_1[6],uVar1 << 3);
    param_1[6] = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  *(undefined4 **)(param_1[6] + param_1[4] * 4) = param_2;
  param_1[4] = param_1[4] + 1;
  uVar1 = *param_1;
  param_1[7] = param_1[7] - 1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return 1;
}

