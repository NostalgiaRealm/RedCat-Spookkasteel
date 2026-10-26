/*
 * FUN_00402a60 at 00402a60
 * undefined FUN_00402a60(void)
 * Address ranges: 00402a60-00402a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00402a60(int *param_1,int param_2)

{
  param_1[8] = param_2;
  (**(code **)(*param_1 + 8))(param_2);
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return;
}

