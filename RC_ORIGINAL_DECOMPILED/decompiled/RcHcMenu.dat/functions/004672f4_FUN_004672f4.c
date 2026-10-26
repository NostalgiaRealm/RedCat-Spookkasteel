/*
 * FUN_004672f4 at 004672f4
 * undefined __register FUN_004672f4(int param_1, int * param_2)
 * Address ranges: 004672f4-0046733c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 19 for TCustomConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 19 for
   TCustomConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004672f4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004667a0);
  if ((char)uVar1 != '\0') {
    FUN_0041251c(*(int **)(param_1 + 0x28),(int)param_2);
  }
  iVar2 = FUN_004123e0(*(int *)(param_1 + 0x24),(int)param_2);
  if (iVar2 != -1) {
    FUN_00412224(*(int **)(param_1 + 0x24),iVar2);
    FUN_00412224(*(int **)(param_1 + 0x2c),iVar2);
  }
  return;
}

