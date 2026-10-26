/*
 * FUN_00459714 at 00459714
 * undefined __register FUN_00459714(void)
 * Address ranges: 00459714-00459739
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459714(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  bVar1 = FUN_004596c0();
  if (bVar1) {
    piVar2 = FUN_00459680(CONCAT31(extraout_var,bVar1),extraout_EDX,extraout_ECX);
    uVar3 = FUN_00459578(piVar2);
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,(short)uVar3);
  }
  return;
}

