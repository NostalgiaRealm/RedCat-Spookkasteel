/*
 * FUN_00529fbc at 00529fbc
 * undefined4 __register FUN_00529fbc(int param_1)
 * Address ranges: 00529fbc-0052a010
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 25 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 25 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00529fbc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_00529fe3:
    if (*(int *)(param_1 + 0x88) != 0) {
      param_1 = (**(code **)(**(int **)(param_1 + 0x88) + 100))();
      if ((char)param_1 == '\0') goto LAB_0052a001;
    }
    uVar3 = (undefined3)((uint)param_1 >> 8);
    uVar2 = 1;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 100))();
    if (cVar1 != '\0') goto LAB_00529fe3;
LAB_0052a001:
    uVar2 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar2);
}

