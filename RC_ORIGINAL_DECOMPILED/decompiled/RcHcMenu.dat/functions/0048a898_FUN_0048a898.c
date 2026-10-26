/*
 * FUN_0048a898 at 0048a898
 * undefined __register FUN_0048a898(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0048a898-0048a8cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 7 for TFKStringPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 7 for
   TFKStringPropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_0048a898(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00497394(param_1,param_2,param_3);
  piVar1 = (int *)FUN_0049756c(piVar1,*(int *)(param_1 + 0x30));
  iVar2 = FUN_0049216c(piVar1);
  piVar1 = (int *)FUN_004923e0((int)piVar1,iVar2);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_00489774);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x30);
  return;
}

