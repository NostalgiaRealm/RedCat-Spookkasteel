/*
 * FUN_00404c70 at 00404c70
 * undefined FUN_00404c70(void)
 * Address ranges: 00404c70-00404cc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00404c70(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x88))(0);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(0,0,0x3fd9999a);
    FUN_00402a10(0,0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(1,1,0x7f7fffff);
  FUN_00402a10(1,0);
  return;
}

