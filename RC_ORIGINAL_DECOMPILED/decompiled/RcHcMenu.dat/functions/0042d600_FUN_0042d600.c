/*
 * FUN_0042d600 at 0042d600
 * undefined __register FUN_0042d600(int * param_1, int * param_2)
 * Address ranges: 0042d600-0042d666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42d23c slot 0 for TClipboard. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42d23c slot 0 for
   TClipboard. Original bytes unchanged; names and types still inferred. */

void FUN_0042d600(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
  if ((char)uVar1 != '\0') {
    FUN_0042d484((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041acd8);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041ab68);
    if ((char)uVar1 == '\0') {
      FUN_00412b58(param_1,param_2);
    }
    else {
      FUN_0042d59c((int)param_1,param_2);
    }
  }
  else {
    FUN_0042d534((int)param_1,param_2);
  }
  return;
}

