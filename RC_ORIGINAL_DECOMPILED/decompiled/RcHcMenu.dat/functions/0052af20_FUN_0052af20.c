/*
 * FUN_0052af20 at 0052af20
 * undefined __register FUN_0052af20(int param_1, int * param_2)
 * Address ranges: 0052af20-0052af9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 26 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 26 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052af20(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x84) != 0)) {
    piVar1 = (int *)FUN_00549b80(*(int *)(param_1 + 0x84));
    FUN_00493768(param_2,piVar1);
  }
  else if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x88) != 0)) {
    piVar1 = (int *)FUN_00549b80(*(int *)(param_1 + 0x88));
    FUN_00493768(param_2,piVar1);
  }
  else {
    FUN_00494398(param_2);
  }
  return;
}

