/*
 * FUN_00595c80 at 00595c80
 * undefined FUN_00595c80(void)
 * Address ranges: 00595c80-00595cc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00595c80(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00596090();
  piVar1 = (int *)FUN_00596e40();
  if (*piVar1 != 0) {
    FUN_00596090();
    piVar1 = (int *)FUN_00596e40();
    if (*piVar1 != 0) {
      piVar1 = (int *)(*piVar1 + 0x14);
      *piVar1 = *piVar1 + 1;
    }
    uVar2 = FUN_0040b060();
    return uVar2;
  }
  return 0;
}

