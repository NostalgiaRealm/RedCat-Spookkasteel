/*
 * FUN_00474768 at 00474768
 * uint __register FUN_00474768(int * param_1, int * param_2, byte param_3)
 * Address ranges: 00474768-004747be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 8 for TContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 8 for
   TContainerProp. Original bytes unchanged; names and types still inferred. */

uint FUN_00474768(int *param_1,int *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  byte bVar6;
  
  bVar6 = param_3 | 8;
  piVar1 = (int *)FUN_004744a0(param_1);
  iVar2 = FUN_00494858(piVar1);
  piVar1 = (int *)FUN_00491e30(iVar2,extraout_EDX,extraout_ECX);
  piVar3 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_00474230);
  piVar3 = (int *)FUN_004744a0(piVar3);
  piVar4 = (int *)FUN_004744a0(param_1);
  uVar5 = FUN_004946dc(piVar4,piVar3,piVar1,bVar6);
  return uVar5;
}

