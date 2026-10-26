/*
 * FUN_10016880 at 10016880
 * undefined FUN_10016880(void)
 * Address ranges: 10016880-100168af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10016880(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = &DAT_10026020;
  iVar1 = 0;
  do {
    if (*piVar2 == 0) {
      piVar3 = piVar2;
      for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      *piVar2 = 1;
      return piVar2;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x19;
  } while (iVar1 < 20000);
  return (int *)0x0;
}

