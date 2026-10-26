/*
 * FUN_0053bda8 at 0053bda8
 * undefined1 __register FUN_0053bda8(int param_1)
 * Address ranges: 0053bda8-0053be26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 8 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 8 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0053bda8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x4c))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x40))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
  return uVar1;
}

