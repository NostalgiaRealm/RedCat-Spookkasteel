/*
 * FUN_10002b00 at 10002b00
 * undefined __cdecl FUN_10002b00(int param_1)
 * Address ranges: 10002b00-10002b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002b00(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return;
}

