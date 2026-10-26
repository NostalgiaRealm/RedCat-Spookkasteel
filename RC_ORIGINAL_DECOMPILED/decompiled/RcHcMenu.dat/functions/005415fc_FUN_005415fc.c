/*
 * FUN_005415fc at 005415fc
 * undefined __register FUN_005415fc(int * param_1)
 * Address ranges: 005415fc-00541672
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 38 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 38 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_005415fc(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  
  FUN_004efc44(param_1);
  FUN_0042950c((int *)param_1[0x9f],'\0');
  iVar1 = FUN_00432178(param_1);
  uVar2 = param_1[0x80];
  iVar3 = iVar1 - *(int *)(uVar2 + 0x38);
  if (SBORROW4(iVar1,*(int *)(uVar2 + 0x38))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX;
  }
  iVar1 = iVar3 + -2;
  if (SBORROW4(iVar3,2)) {
    thunk_FUN_00402874(uVar2);
    iVar1 = extraout_EDX_00;
  }
  FUN_00431f78((int *)param_1[0x9f],iVar1);
  FUN_00438ac8(param_1[0xa0],'\0');
  FUN_00438bb4(param_1[0xa0],'\0');
  return;
}

