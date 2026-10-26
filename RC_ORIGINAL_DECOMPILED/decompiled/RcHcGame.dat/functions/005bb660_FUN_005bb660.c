/*
 * FUN_005bb660 at 005bb660
 * undefined FUN_005bb660(void)
 * Address ranges: 005bb660-005bb6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb660(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x33678) != 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x33678) + 0xa4))
                      (*(undefined4 *)(param_1 + 0x390bc),*(undefined4 *)(param_1 + 0x390c0),
                       *(undefined4 *)(param_1 + 0x390c4),*(undefined4 *)(param_1 + 0x390c8),
                       *(undefined4 *)(param_1 + 0x390cc));
    return uVar1;
  }
  return 1;
}

