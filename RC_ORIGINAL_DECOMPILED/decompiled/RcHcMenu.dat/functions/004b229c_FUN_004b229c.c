/*
 * FUN_004b229c at 004b229c
 * undefined4 __register FUN_004b229c(int param_1, int * param_2)
 * Address ranges: 004b229c-004b22fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 8 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 8 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b229c(int param_1,int *param_2)

{
  int *piVar1;
  float10 in_ST0;
  undefined4 local_10;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004b19f0);
  (**(code **)(*piVar1 + 0x6c))();
  if ((double)in_ST0 <= *(double *)(param_1 + 0x38)) {
    if (*(double *)(param_1 + 0x38) <= (double)in_ST0) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    local_10 = 0xffffffff;
  }
  return local_10;
}

