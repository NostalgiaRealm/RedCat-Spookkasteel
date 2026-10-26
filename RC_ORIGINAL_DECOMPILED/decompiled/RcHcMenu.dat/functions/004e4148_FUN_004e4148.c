/*
 * FUN_004e4148 at 004e4148
 * undefined4 __register FUN_004e4148(int param_1)
 * Address ranges: 004e4148-004e417e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 33 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 33 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e4148(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  
  iVar2 = FUN_0045da14(*(int *)(param_1 + 0x80));
  if ((iVar2 < 1) || (*(int *)(param_1 + 0x88) < 1)) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined3)((uint)param_1 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar3,uVar1);
}

