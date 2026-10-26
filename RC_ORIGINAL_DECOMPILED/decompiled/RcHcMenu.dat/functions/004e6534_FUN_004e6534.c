/*
 * FUN_004e6534 at 004e6534
 * undefined __register FUN_004e6534(int * param_1)
 * Address ranges: 004e6534-004e6581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 24 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 24 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e6534(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004e6278();
  FUN_0045d890((undefined4 *)param_1[0x21]);
  FUN_004e6378();
  FUN_004e64c4();
  FUN_004e3480(param_1);
  FUN_004e3a1c(param_1);
  piVar1 = param_1 + 0x32;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  return;
}

