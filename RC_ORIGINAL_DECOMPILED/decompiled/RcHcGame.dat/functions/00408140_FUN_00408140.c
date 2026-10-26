/*
 * FUN_00408140 at 00408140
 * undefined FUN_00408140(void)
 * Address ranges: 00408140-0040816e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00408140(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00422f30(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00428b70();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

