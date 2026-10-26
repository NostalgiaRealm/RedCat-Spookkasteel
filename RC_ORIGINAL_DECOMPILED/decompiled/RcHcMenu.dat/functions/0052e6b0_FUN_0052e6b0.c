/*
 * FUN_0052e6b0 at 0052e6b0
 * undefined __register FUN_0052e6b0(int * param_1)
 * Address ranges: 0052e6b0-0052e6fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 24 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 24 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052e6b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0052e3fc();
  FUN_0045d890((undefined4 *)param_1[0x21]);
  FUN_0052e4fc();
  FUN_0052e640();
  FUN_0052ba24(param_1);
  FUN_0052be28((int)param_1);
  piVar1 = param_1 + 0x25;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  return;
}

