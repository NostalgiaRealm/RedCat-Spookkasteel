/*
 * FUN_005b9810 at 005b9810
 * undefined FUN_005b9810(void)
 * Address ranges: 005b9810-005b982b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9810(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0x44);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return 1;
}

