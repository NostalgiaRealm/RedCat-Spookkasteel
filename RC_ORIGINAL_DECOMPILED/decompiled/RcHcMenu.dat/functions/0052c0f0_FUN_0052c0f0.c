/*
 * FUN_0052c0f0 at 0052c0f0
 * undefined4 __register FUN_0052c0f0(int * param_1)
 * Address ranges: 0052c0f0-0052c11e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 8 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 8 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0052c0f0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_EDX;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  iVar3 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402874(uVar1);
    iVar3 = extraout_EDX;
  }
  uVar2 = FUN_0052c25c(param_1,iVar3);
  return uVar2;
}

