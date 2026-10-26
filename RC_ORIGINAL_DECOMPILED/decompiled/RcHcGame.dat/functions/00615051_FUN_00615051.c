/*
 * FUN_00615051 at 00615051
 * undefined FUN_00615051(void)
 * Address ranges: 00615051-0061506b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00615051(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0061503c();
  if ((iVar1 == 0) && ((*(byte *)(param_1 + 4) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}

