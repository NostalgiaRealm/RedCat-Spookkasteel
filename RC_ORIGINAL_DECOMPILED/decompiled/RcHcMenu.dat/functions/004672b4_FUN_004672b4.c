/*
 * FUN_004672b4 at 004672b4
 * undefined __register FUN_004672b4(int param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 004672b4-004672f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 17 for TCustomConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 17 for
   TCustomConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004672b4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_004121d8(*(int **)(param_1 + 0x24),(int)param_2);
  FUN_004121d8(*(int **)(param_1 + 0x2c),param_4);
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004667a0);
  if ((char)uVar1 != '\0') {
    FUN_004121d8(*(int **)(param_1 + 0x28),(int)param_2);
  }
  return;
}

