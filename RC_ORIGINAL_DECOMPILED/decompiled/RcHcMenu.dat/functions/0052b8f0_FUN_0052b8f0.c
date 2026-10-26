/*
 * FUN_0052b8f0 at 0052b8f0
 * undefined __register FUN_0052b8f0(int * param_1, int param_2)
 * Address ranges: 0052b8f0-0052b963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 30 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 30 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052b8f0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  FUN_0054728c(param_1,param_2);
  piVar1 = FUN_004e2964((int *)&PTR_FUN_004e2414,'\x01',param_1[0xf],10);
  param_1[0x20] = (int)piVar1;
  piVar1 = FUN_004e2430((int *)&PTR_FUN_004e23b0,'\x01',10);
  param_1[0x21] = (int)piVar1;
  param_1[0x22] = -0x80000000;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX);
  param_1[0x24] = (int)piVar1;
  return;
}

