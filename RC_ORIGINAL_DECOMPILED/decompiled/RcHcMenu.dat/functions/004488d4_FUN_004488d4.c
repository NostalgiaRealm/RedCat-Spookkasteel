/*
 * FUN_004488d4 at 004488d4
 * undefined __register FUN_004488d4(int * param_1, int * param_2)
 * Address ranges: 004488d4-00448922
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x445c10 slot 2 for TControlScrollBar. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x445c10 slot 2 for
   TControlScrollBar. Original bytes unchanged; names and types still inferred. */

void FUN_004488d4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00445c10);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    FUN_0044919c((int)param_1,(char)param_2[7]);
    FUN_0044917c((int)param_1,param_2[4]);
    FUN_0044902c((int)param_1,param_2[3]);
    *(short *)(param_1 + 2) = (short)param_2[2];
  }
  return;
}

