/*
 * FUN_004eb7d8 at 004eb7d8
 * int * __register FUN_004eb7d8(int * param_1)
 * Address ranges: 004eb7d8-004eb81c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 7 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 7 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

int * FUN_004eb7d8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_004d7114((int *)&PTR_FUN_004ea4b4,'\x01',param_1);
  uVar2 = (**(code **)(*(int *)param_1[0xc] + 0x218))();
  iVar3 = FUN_00403224(piVar1,(int)&PTR_FUN_004ea4b4);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  return piVar1;
}

