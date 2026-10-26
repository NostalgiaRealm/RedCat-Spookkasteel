/*
 * FUN_00404b50 at 00404b50
 * undefined FUN_00404b50(void)
 * Address ranges: 00404b50-00404bc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00404b50(int param_1)

{
  undefined4 uVar1;
  undefined1 local_c [12];
  
  uVar1 = FUN_0041def0();
  FUN_004041b0(uVar1);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(local_c);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x9c))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x4c))(&stack0xffffffe4);
  FUN_00402a10(1,0);
  return;
}

