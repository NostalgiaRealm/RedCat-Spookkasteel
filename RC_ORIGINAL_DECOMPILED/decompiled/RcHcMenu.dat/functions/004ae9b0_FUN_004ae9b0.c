/*
 * FUN_004ae9b0 at 004ae9b0
 * undefined __register FUN_004ae9b0(int * param_1, int param_2, int param_3, int param_4, int * param_5)
 * Address ranges: 004ae9b0-004aea1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 31 for TCustomGDIButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 31 for
   TCustomGDIButton. Original bytes unchanged; names and types still inferred. */

void FUN_004ae9b0(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  if (param_1[0x5d] != 0) {
    param_5 = *(int **)(param_1[0x5d] + 0x40);
    param_4 = *(int *)(param_1[0x5d] + 0x44);
  }
  FUN_0049b884((int *)param_1[0x5f],param_5,param_4,(undefined *)0x20);
  FUN_00431dc0(param_1,param_2,param_3,param_4,(int)param_5);
  return;
}

