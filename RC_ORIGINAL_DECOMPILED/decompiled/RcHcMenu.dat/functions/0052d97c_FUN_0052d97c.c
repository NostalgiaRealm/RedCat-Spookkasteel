/*
 * FUN_0052d97c at 0052d97c
 * undefined __register FUN_0052d97c(uint param_1)
 * Address ranges: 0052d97c-0052d9db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 20 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 20 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052d97c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004e290c(*(int **)(param_1 + 0x80));
  FUN_004e290c(*(int **)(param_1 + 0x84));
  FUN_0045d890(*(undefined4 **)(param_1 + 0x80));
  FUN_0045d890(*(undefined4 **)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x88) = 0x80000000;
  piVar1 = (int *)(param_1 + 0x94);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

