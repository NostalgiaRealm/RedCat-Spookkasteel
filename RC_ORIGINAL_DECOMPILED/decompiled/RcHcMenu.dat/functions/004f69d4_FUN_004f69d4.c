/*
 * FUN_004f69d4 at 004f69d4
 * undefined __register FUN_004f69d4(int * param_1, int * param_2)
 * Address ranges: 004f69d4-004f6a48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3938 slot 2 for THeaderSection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3938 slot 2 for
   THeaderSection. Original bytes unchanged; names and types still inferred. */

void FUN_004f69d4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004f3938);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    FUN_004f6b88((int)param_1,(uint *)param_2[3]);
    FUN_004f6bb0((int)param_1,param_2[4]);
    FUN_004f6b5c((int)param_1,param_2[5]);
    FUN_004f6b38((int)param_1,param_2[6]);
    FUN_004f6b04((int)param_1,(char)param_2[7]);
    FUN_004f6b78((int)param_1,*(char *)((int)param_2 + 0x1d));
    *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)((int)param_2 + 0x1e);
    FUN_004f6bf8((int)param_1,param_2[8]);
  }
  return;
}

