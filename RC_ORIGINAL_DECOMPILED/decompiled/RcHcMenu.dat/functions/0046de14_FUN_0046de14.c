/*
 * FUN_0046de14 at 0046de14
 * undefined __register FUN_0046de14(int * param_1, int * param_2)
 * Address ranges: 0046de14-0046de4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4655b0 slot 2 for TReferenceField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4655b0 slot 2 for
   TReferenceField. Original bytes unchanged; names and types still inferred. */

void FUN_0046de14(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004667a0);
  if ((char)uVar1 != '\0') {
    piVar2 = (int *)FUN_00468730(param_2[9],0);
    FUN_00468b84(param_1,piVar2);
    return;
  }
  FUN_00468b84(param_1,param_2);
  return;
}

