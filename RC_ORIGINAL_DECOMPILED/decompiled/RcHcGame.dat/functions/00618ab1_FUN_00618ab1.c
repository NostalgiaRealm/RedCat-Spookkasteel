/*
 * FUN_00618ab1 at 00618ab1
 * undefined FUN_00618ab1(void)
 * Address ranges: 00618ab1-00618ad5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00618ab1(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_006b2e48;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x6b2e4c);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6b2f20);
  return 0;
}

