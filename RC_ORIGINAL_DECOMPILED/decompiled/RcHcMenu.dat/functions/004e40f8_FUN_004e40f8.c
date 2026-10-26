/*
 * FUN_004e40f8 at 004e40f8
 * undefined4 __register FUN_004e40f8(int param_1)
 * Address ranges: 004e40f8-004e4145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 32 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 32 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e40f8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  
  iVar2 = FUN_0045da14(*(int *)(param_1 + 0x80));
  if (0 < iVar2) {
    iVar2 = FUN_0045da14(*(int *)(param_1 + 0x80));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (*(int *)(param_1 + 0x88) < (int)uVar3) {
      uVar4 = (undefined3)(uVar3 >> 8);
      uVar1 = 1;
      goto LAB_004e413c;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_004e413c:
  return CONCAT31(uVar4,uVar1);
}

