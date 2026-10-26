/*
 * FUN_004076b0 at 004076b0
 * undefined FUN_004076b0(void)
 * Address ranges: 004076b0-004076ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004076b0(int param_1)

{
  int iStack_c;
  
  iStack_c = param_1;
  FUN_004237d0(&iStack_c);
  FUN_00428250();
  iStack_c = 0x7f7fffff;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x8c))(6,0);
  FUN_00402a10(0,0);
  return;
}

