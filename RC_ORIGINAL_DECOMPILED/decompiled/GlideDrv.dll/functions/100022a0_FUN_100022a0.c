/*
 * FUN_100022a0 at 100022a0
 * undefined __cdecl FUN_100022a0(undefined4 * param_1)
 * Address ranges: 100022a0-100022d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100022a0(undefined4 *param_1)

{
  int iVar1;
  
  if ((undefined *)param_1[10] != (undefined *)0x0) {
    FUN_10003f4c((undefined *)param_1[10]);
  }
  if (param_1[0xb] != 0) {
    FUN_100012f0(param_1[0xb]);
    DAT_101f5520 = 1;
  }
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

