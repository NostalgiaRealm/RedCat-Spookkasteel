/*
 * FUN_004e3e2c at 004e3e2c
 * undefined4 __register FUN_004e3e2c(int * param_1)
 * Address ranges: 004e3e2c-004e3e5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 8 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 8 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e3e2c(int *param_1)

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
  uVar2 = FUN_004e3fa0(param_1,iVar3);
  return uVar2;
}

