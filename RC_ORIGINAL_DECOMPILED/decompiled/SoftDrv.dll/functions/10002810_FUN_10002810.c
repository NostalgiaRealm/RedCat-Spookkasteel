/*
 * FUN_10002810 at 10002810
 * undefined FUN_10002810(void)
 * Address ranges: 10002810-10002830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002810(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return 1;
  }
  uVar1 = FUN_10001c30(param_1[2],param_2);
  return uVar1;
}

