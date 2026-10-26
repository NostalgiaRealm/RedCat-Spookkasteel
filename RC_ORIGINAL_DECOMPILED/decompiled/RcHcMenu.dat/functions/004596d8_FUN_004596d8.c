/*
 * FUN_004596d8 at 004596d8
 * undefined __register FUN_004596d8(short param_1)
 * Address ranges: 004596d8-00459711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004596d8(short param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  bVar1 = FUN_004596c0();
  if (bVar1) {
    piVar2 = FUN_00459680(CONCAT31(extraout_var,bVar1),extraout_EDX,extraout_ECX);
    FUN_00459610((int)piVar2,(int)*(short *)(*(int *)PTR_DAT_005725f0 + 0x38));
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,param_1);
  }
  return;
}

