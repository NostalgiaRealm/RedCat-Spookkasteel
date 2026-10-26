/*
 * FUN_0046ae1c at 0046ae1c
 * undefined __register FUN_0046ae1c(int param_1, int param_2)
 * Address ranges: 0046ae1c-0046ae71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 39 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 39 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ae1c(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  if ((*(int *)(param_1 + 0xe0) == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
    FUN_0046abc8(param_1,param_2,*(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc));
    uVar1 = extraout_ECX_00;
  }
  else {
    FUN_0046abc8(param_1,param_2,*(int *)(param_1 + 0xe0),*(int *)(param_1 + 0xe4));
    uVar1 = extraout_ECX;
  }
  FUN_00469acc(param_1,&local_8,CONCAT31((int3)((uint)uVar1 >> 8),1));
  return;
}

