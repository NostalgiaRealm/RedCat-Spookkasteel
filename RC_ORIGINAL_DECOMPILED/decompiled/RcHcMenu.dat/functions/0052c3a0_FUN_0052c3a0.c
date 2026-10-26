/*
 * FUN_0052c3a0 at 0052c3a0
 * undefined4 __register FUN_0052c3a0(int param_1)
 * Address ranges: 0052c3a0-0052c3ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 32 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 32 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0052c3a0(int param_1)

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
      goto LAB_0052c3e4;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_0052c3e4:
  return CONCAT31(uVar4,uVar1);
}

