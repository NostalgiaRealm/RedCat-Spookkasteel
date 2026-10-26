/*
 * FUN_0061506c at 0061506c
 * undefined FUN_0061506c(void)
 * Address ranges: 0061506c-00615086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0061506c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0061503c();
  if ((iVar1 == 0) && ((*(byte *)(param_1 + 4) & 0x40) != 0)) {
    return 1;
  }
  return 0;
}

