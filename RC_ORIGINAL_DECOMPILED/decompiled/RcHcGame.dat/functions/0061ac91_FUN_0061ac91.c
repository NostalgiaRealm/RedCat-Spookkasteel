/*
 * FUN_0061ac91 at 0061ac91
 * undefined FUN_0061ac91(void)
 * Address ranges: 0061ac91-0061acab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061ac91(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_007101c8 != (code *)0x0) {
    iVar1 = (*DAT_007101c8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

