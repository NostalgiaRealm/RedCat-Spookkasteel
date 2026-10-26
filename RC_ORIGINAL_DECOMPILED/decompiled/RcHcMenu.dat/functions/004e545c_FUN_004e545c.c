/*
 * FUN_004e545c at 004e545c
 * undefined __register FUN_004e545c(uint param_1)
 * Address ranges: 004e545c-004e54bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 20 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 20 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e545c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004e290c(*(int **)(param_1 + 0x80));
  FUN_004e290c(*(int **)(param_1 + 0x84));
  FUN_0045d890(*(undefined4 **)(param_1 + 0x80));
  FUN_0045d890(*(undefined4 **)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x88) = 0x80000000;
  piVar1 = (int *)(param_1 + 200);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

