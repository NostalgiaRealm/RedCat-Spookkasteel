/*
 * FUN_10014830 at 10014830
 * undefined FUN_10014830(void)
 * Address ranges: 10014830-1001485c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014830(uint param_1)

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

