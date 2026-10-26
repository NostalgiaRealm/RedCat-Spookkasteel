/*
 * FUN_00556a30 at 00556a30
 * undefined FUN_00556a30(void)
 * Address ranges: 00556a30-00556a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556a30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005c9420();
  puVar2 = (undefined4 *)(param_1 + 0x1e0);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

