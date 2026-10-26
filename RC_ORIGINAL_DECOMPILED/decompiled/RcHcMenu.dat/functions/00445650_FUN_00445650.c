/*
 * FUN_00445650 at 00445650
 * uint __register FUN_00445650(int param_1)
 * Address ranges: 00445650-00445698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00445650(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (PTR_DAT_0057261c[9] != '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x24) == '\x01');
    }
    else {
      piVar1 = FUN_004407fc((POINT *)(param_1 + 0x48));
      if (piVar1 == (int *)0x0) {
        uVar2 = FUN_0045053c(*(int *)PTR_DAT_005723fc);
      }
      else {
        uVar2 = FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return uVar2;
}

