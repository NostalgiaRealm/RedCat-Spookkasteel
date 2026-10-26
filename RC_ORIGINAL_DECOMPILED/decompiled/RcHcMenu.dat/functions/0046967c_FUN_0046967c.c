/*
 * FUN_0046967c at 0046967c
 * undefined __register FUN_0046967c(int * param_1, int * param_2, uint param_3)
 * Address ranges: 0046967c-004696ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 5 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 5 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_0046967c(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0041936c(param_1,param_2,param_3);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_00464fe0);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_004667a0);
    if ((char)uVar2 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,piVar1);
    }
  }
  else {
    (**(code **)(*param_1 + 0xb0))(param_1,piVar1);
  }
  return;
}

