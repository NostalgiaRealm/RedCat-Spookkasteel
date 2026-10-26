/*
 * FUN_004ad05c at 004ad05c
 * undefined __register FUN_004ad05c(int param_1, int * param_2)
 * Address ranges: 004ad05c-004ad0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac324 slot 10 for TCaptionRect. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac324 slot 10 for
   TCaptionRect. Original bytes unchanged; names and types still inferred. */

void FUN_004ad05c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if ((*(int *)(param_1 + 0x18) != *param_2) && (*(int *)(param_1 + 0x1c) != iVar1)) {
    *(int *)(param_1 + 0x18) = *param_2;
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_004ad164(param_1,param_1);
  }
  return;
}

