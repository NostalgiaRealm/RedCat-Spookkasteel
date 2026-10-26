/*
 * thunk_FUN_0044355c at 00443558
 * undefined4 __register thunk_FUN_0044355c(int param_1)
 * Address ranges: 00443558-00443559
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_0044355c
 */

undefined4 thunk_FUN_0044355c(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}

