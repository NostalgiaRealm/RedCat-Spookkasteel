/*
 * FUN_004748a4 at 004748a4
 * undefined4 __register FUN_004748a4(int * param_1, int * param_2)
 * Address ranges: 004748a4-004748db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 7 for TContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 7 for
   TContainerProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004748a4(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_00474230);
  piVar1 = (int *)FUN_004744a0(piVar1);
  piVar2 = (int *)FUN_004744a0(param_1);
  uVar3 = FUN_00493768(piVar2,piVar1);
  return uVar3;
}

