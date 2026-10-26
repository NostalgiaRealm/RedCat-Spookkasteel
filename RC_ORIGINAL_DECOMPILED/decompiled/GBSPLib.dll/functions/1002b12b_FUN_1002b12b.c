/*
 * FUN_1002b12b at 1002b12b
 * undefined FUN_1002b12b(void)
 * Address ranges: 1002b12b-1002b14f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002b12b(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_1003cde0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x1003cde4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x1003ceb8);
  return 0;
}

