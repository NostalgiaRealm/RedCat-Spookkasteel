/*
 * FUN_0060b60c at 0060b60c
 * undefined FUN_0060b60c(void)
 * Address ranges: 0060b60c-0060b62a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060b60c(HANDLE param_1)

{
  BOOL BVar1;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    DAT_0070ff98 = 0x16;
    return 0xffffffff;
  }
  return 0;
}

