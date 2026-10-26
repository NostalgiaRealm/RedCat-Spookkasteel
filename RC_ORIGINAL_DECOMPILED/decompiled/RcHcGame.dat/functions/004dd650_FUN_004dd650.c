/*
 * FUN_004dd650 at 004dd650
 * undefined FUN_004dd650(void)
 * Address ranges: 004dd650-004dd6c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004dd650(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_004dbe60(local_c,param_2);
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  FUN_004d60f0(&local_18,param_3);
  *(undefined1 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x23c) = 1;
  (**(code **)(**(int **)(param_1 + 500) + 0x10))(5000,0,1);
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x2c))();
  return;
}

