/*
 * FUN_0046e6e4 at 0046e6e4
 * undefined __register FUN_0046e6e4(int param_1, int * param_2)
 * Address ranges: 0046e6e4-0046e70c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462320 slot 3 for TIndexDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462320 slot 3 for
   TIndexDef. Original bytes unchanged; names and types still inferred. */

void FUN_0046e6e4(int param_1,int *param_2)

{
  FUN_0046742c(param_1,param_2);
  if ((*param_2 == 0) && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    FUN_00403e04(param_2,(undefined4 *)"<Primary>");
  }
  return;
}

