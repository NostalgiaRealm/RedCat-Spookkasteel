/*
 * FUN_004f6300 at 004f6300
 * undefined FUN_004f6300(void)
 * Address ranges: 004f6300-004f6319
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f6300(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x5c) != param_2) {
    *(int *)(param_1 + 0x5c) = param_2;
    FUN_00566cc0(param_2);
  }
  return;
}

