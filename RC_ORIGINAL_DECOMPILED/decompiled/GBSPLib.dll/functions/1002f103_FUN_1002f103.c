/*
 * FUN_1002f103 at 1002f103
 * undefined FUN_1002f103(void)
 * Address ranges: 1002f103-1002f11d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002f103(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1052a5b4 != (code *)0x0) {
    iVar1 = (*DAT_1052a5b4)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

