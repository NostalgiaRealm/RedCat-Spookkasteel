/*
 * FUN_0052cb48 at 0052cb48
 * undefined __register FUN_0052cb48(uint param_1)
 * Address ranges: 0052cb48-0052cbdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 14 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 14 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052cb48(uint param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  piVar3 = (int *)(param_1 + 0x94);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874(param_1);
  }
  cVar2 = FUN_004e257c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
  if (cVar2 != '\x02') {
    piVar3 = (int *)FUN_004e25c4(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
    FUN_00493be4(piVar3);
  }
  cVar2 = FUN_004e257c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88));
  if (cVar2 != '\x03') {
    FUN_004e25a0(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88),2);
  }
  return;
}

