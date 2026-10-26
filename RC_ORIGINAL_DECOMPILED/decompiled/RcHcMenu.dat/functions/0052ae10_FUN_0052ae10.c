/*
 * FUN_0052ae10 at 0052ae10
 * undefined __register FUN_0052ae10(int param_1)
 * Address ranges: 0052ae10-0052aea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 19 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 19 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052ae10(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x84) != 0)) {
    piVar1 = (int *)FUN_00549b80(param_1);
    piVar2 = (int *)FUN_00549b80(*(int *)(param_1 + 0x84));
    FUN_00493768(piVar2,piVar1);
    FUN_00549504(*(int **)(param_1 + 0x84));
  }
  else if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x88) != 0)) {
    piVar1 = (int *)FUN_00549b80(param_1);
    piVar2 = (int *)FUN_00549b80(*(int *)(param_1 + 0x88));
    FUN_00493768(piVar2,piVar1);
    FUN_00549504(*(int **)(param_1 + 0x88));
  }
  return;
}

