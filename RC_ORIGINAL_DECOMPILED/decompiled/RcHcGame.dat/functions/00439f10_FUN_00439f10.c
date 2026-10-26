/*
 * FUN_00439f10 at 00439f10
 * undefined FUN_00439f10(void)
 * Address ranges: 00439f10-00439f21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_00439f10(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x68) & param_2) != 0;
}

