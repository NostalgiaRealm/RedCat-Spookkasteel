/*
 * FUN_0060f51c at 0060f51c
 * undefined FUN_0060f51c(void)
 * Address ranges: 0060f51c-0060f538
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060f51c(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}

