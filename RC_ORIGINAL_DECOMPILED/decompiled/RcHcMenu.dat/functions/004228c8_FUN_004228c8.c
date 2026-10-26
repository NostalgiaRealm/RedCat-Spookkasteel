/*
 * FUN_004228c8 at 004228c8
 * undefined __register FUN_004228c8(int * param_1, int * param_2)
 * Address ranges: 004228c8-00422924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 2 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 2 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_004228c8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) &&
     (uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041ae18), (char)uVar1 == '\0')) {
    FUN_00412a74(param_1,param_2);
    return;
  }
  if (param_2 == (int *)0x0) {
    FUN_00422ba0((int)param_1,0,0);
  }
  else {
    FUN_00420484(param_2[8]);
    FUN_00420488((int *)param_1[8]);
    param_1[8] = param_2[8];
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

