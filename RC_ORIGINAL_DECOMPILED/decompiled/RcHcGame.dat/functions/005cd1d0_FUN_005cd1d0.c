/*
 * FUN_005cd1d0 at 005cd1d0
 * undefined FUN_005cd1d0(void)
 * Address ranges: 005cd1d0-005cd1fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005cd1d0(uint param_1)

{
  char cVar1;
  
  cVar1 = (param_1 & 1) != 0;
  if ((param_1 & 2) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((param_1 & 4) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((cVar1 != '\x01') && ((param_1 & 8) == 0)) {
    return 0;
  }
  return 1;
}

