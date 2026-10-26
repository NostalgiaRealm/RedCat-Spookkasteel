/*
 * FUN_004e6948 at 004e6948
 * undefined __register FUN_004e6948(int * param_1, int * param_2)
 * Address ranges: 004e6948-004e6978
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 2 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 2 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6948(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004e68a0);
  if ((char)uVar1 != '\0') {
    FUN_00406ab8(param_1 + 8,(int *)param_2[8]);
    return;
  }
  FUN_00412a74(param_1,param_2);
  return;
}

