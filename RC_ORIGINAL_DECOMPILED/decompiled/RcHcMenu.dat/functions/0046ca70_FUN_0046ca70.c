/*
 * FUN_0046ca70 at 0046ca70
 * undefined __register FUN_0046ca70(int * param_1, int * param_2)
 * Address ranges: 0046ca70-0046cb08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 2 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 2 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ca70(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00464b88);
  if ((char)uVar1 != '\0') {
    FUN_0046cf10((int)param_1,(int)param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00410b88);
  if ((char)uVar1 != '\0') {
    FUN_0046cf64((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041acd8);
  if ((char)uVar1 != '\0') {
    FUN_0046ce54((int)param_1,param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_0040320c((int *)param_2[1],(int)&PTR_FUN_0041acd8);
    if ((char)uVar1 != '\0') {
      FUN_0046ce54((int)param_1,(int *)param_2[1]);
      return;
    }
  }
  FUN_00468b84(param_1,param_2);
  return;
}

