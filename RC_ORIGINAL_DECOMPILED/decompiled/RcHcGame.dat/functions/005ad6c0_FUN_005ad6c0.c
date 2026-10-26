/*
 * FUN_005ad6c0 at 005ad6c0
 * undefined FUN_005ad6c0(void)
 * Address ranges: 005ad6c0-005ad6de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ad6c0(char param_1)

{
  int iVar1;
  
  if (param_1 != '_') {
    iVar1 = FUN_0060b30a((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

