/*
 * FUN_004e4974 at 004e4974
 * undefined __register FUN_004e4974(uint param_1)
 * Address ranges: 004e4974-004e4a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 14 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 14 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4974(uint param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  piVar4 = (int *)(param_1 + 200);
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874(param_1);
  }
  cVar2 = FUN_004e257c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
  if (cVar2 != '\x02') {
    piVar4 = (int *)FUN_004e25c4(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
    FUN_00493be4(piVar4);
  }
  cVar2 = FUN_004e257c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
  if (cVar2 != '\x03') {
    uVar3 = FUN_004e257c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
    *(undefined1 *)(param_1 + 0x91) = uVar3;
    FUN_004e25a0(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88),2);
  }
  return;
}

