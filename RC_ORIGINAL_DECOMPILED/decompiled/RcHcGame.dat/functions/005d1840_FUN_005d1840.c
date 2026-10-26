/*
 * FUN_005d1840 at 005d1840
 * undefined FUN_005d1840(void)
 * Address ranges: 005d1840-005d189e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d1840(int param_1)

{
  float10 fVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_005b2fe0(local_c);
  FUN_005b2fe0(local_18);
  FUN_005b2e60(param_1);
  FUN_005b2f20();
  fVar1 = (float10)FUN_005b2e40();
  *(float *)(param_1 + 0xc) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x10) = 6;
  return;
}

