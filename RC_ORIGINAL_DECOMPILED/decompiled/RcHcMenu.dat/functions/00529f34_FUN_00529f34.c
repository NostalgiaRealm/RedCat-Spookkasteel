/*
 * FUN_00529f34 at 00529f34
 * undefined4 __register FUN_00529f34(int param_1)
 * Address ranges: 00529f34-00529fb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 33 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 33 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00529f34(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x84))();
    if ((char)uVar2 == '\0') goto LAB_00529f5e;
LAB_00529fad:
    uVar3 = (undefined3)((uint)uVar2 >> 8);
    uVar1 = 1;
  }
  else {
LAB_00529f5e:
    if (*(char *)(param_1 + 0x80) == '\x02') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x84))();
      if ((char)uVar2 != '\0') goto LAB_00529fad;
    }
    if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x84) != 0)) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 100))();
      if ((char)uVar2 == '\0') goto LAB_00529fad;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar1);
}

