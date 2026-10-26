/*
 * FUN_0044ab7c at 0044ab7c
 * undefined __register FUN_0044ab7c(int param_1, int param_2, char * param_3, char * param_4)
 * Address ranges: 0044ab7c-0044abb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 8 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 8 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044ab7c(int param_1,int param_2,char *param_3,char *param_4)

{
  FUN_0041937c(param_1,param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x238) != 0) {
    (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))
              (*(int **)(param_1 + 0x238),param_2,param_3,param_4);
  }
  return;
}

