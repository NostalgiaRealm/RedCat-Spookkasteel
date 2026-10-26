/*
 * FUN_00422f70 at 00422f70
 * undefined FUN_00422f70(void)
 * Address ranges: 00422f70-00422fa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00422f70(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00422f30(param_2);
  if ((cVar1 != '\0') && (*(float *)(param_1 + 0x15c) <= *(float *)(param_1 + 0x150))) {
    return 1;
  }
  return 0;
}

