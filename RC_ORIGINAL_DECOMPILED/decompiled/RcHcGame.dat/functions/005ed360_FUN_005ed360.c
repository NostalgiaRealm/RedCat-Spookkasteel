/*
 * FUN_005ed360 at 005ed360
 * undefined FUN_005ed360(void)
 * Address ranges: 005ed360-005ed3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ed360(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 == *(undefined4 **)(param_2 + 0xc)) {
    return param_1;
  }
  do {
    if (puVar1 != *(undefined4 **)(param_2 + 8)) {
      FUN_005e5d20(param_1,&DAT_0069e140);
    }
    FUN_005e9d90(param_1,*puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 != *(undefined4 **)(param_2 + 0xc));
  return param_1;
}

