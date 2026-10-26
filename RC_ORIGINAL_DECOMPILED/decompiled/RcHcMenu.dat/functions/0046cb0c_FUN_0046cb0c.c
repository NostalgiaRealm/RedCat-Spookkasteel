/*
 * FUN_0046cb0c at 0046cb0c
 * undefined __register FUN_0046cb0c(int * param_1, int * param_2)
 * Address ranges: 0046cb0c-0046cb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 0 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 0 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046cb0c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00410b88);
  if ((char)uVar1 != '\0') {
    FUN_0046d0a8((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041acd8);
  if ((char)uVar1 != '\0') {
    FUN_0046cfb8((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
  if ((char)uVar1 != '\0') {
    piVar2 = (int *)FUN_0041eef0(param_2);
    FUN_0046cfb8((int)param_1,piVar2);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

