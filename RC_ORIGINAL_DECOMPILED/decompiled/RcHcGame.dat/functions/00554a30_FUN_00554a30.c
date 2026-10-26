/*
 * FUN_00554a30 at 00554a30
 * undefined FUN_00554a30(void)
 * Address ranges: 00554a30-00554a49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00554a30(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 6; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
  }
  *(undefined1 *)param_1 = 1;
  return;
}

