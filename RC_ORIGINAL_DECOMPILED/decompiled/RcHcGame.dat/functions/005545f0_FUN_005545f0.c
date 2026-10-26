/*
 * FUN_005545f0 at 005545f0
 * undefined FUN_005545f0(void)
 * Address ranges: 005545f0-00554628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005545f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)param_1 = 1;
  puVar2 = param_1;
  for (iVar1 = 6; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
  }
  param_1[7] = param_2;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x14);
    *(int *)(param_2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
  }
  return param_1;
}

