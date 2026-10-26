/*
 * FUN_00566cc0 at 00566cc0
 * undefined FUN_00566cc0(void)
 * Address ranges: 00566cc0-00566cd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00566cc0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != param_2) {
    FUN_00566c70();
    *(int *)(param_1 + 0x1c) = param_2;
  }
  return;
}

