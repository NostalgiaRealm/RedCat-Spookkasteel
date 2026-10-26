/*
 * FUN_005cc310 at 005cc310
 * undefined FUN_005cc310(void)
 * Address ranges: 005cc310-005cc341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc310(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      puVar1 = puVar2;
    }
    *puVar1 = param_2;
    return 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return 1;
}

