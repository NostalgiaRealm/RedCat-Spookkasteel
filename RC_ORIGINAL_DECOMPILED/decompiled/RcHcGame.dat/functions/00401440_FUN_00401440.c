/*
 * FUN_00401440 at 00401440
 * undefined FUN_00401440(void)
 * Address ranges: 00401440-004014a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401440(void)

{
  int iVar1;
  float fStack_c;
  
  FUN_004237d0(&fStack_c);
  FUN_00428250();
  fStack_c = 0.0;
  FUN_00402a10(2);
  fStack_c = 5.884798e-39;
  iVar1 = FUN_0060a4a0();
  fStack_c = (float)(iVar1 % 10000) * 2.0000005e-05 + 0.9;
  FUN_00419b70(0,0);
  return;
}

