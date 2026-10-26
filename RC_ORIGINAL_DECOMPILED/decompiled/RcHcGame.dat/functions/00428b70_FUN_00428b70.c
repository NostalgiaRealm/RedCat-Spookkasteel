/*
 * FUN_00428b70 at 00428b70
 * undefined FUN_00428b70(void)
 * Address ranges: 00428b70-00428b91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00428b70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004284e0();
  if (*(float *)(param_1 + 0x15c) < *(float *)(iVar1 + 0x10)) {
    return 1;
  }
  return 0;
}

