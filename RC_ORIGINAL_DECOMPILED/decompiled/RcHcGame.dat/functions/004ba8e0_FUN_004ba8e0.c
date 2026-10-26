/*
 * FUN_004ba8e0 at 004ba8e0
 * undefined FUN_004ba8e0(void)
 * Address ranges: 004ba8e0-004ba91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004ba8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00501cb0(param_2);
  param_1[0x4a] = param_3;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *param_1 = &PTR_FUN_0064edac;
  puVar2 = param_1 + 0x3e;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

