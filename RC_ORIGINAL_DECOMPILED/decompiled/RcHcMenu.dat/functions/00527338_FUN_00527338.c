/*
 * FUN_00527338 at 00527338
 * int * __register FUN_00527338(int * param_1, int * param_2)
 * Address ranges: 00527338-0052736d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525ae0 slot 49 for TAppObjGridHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525ae0 slot 49 for
   TAppObjGridHeader. Original bytes unchanged; names and types still inferred. */

int * FUN_00527338(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_28 [8];
  int *local_8;
  
  piVar1 = local_28;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *param_2;
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  }
  local_8 = param_1;
  piVar1 = FUN_00526bac((int *)&PTR_FUN_00525a70,'\x01',param_1,local_28);
  return piVar1;
}

