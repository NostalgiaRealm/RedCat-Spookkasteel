/*
 * FUN_0041e808 at 0041e808
 * undefined __register FUN_0041e808(int * param_1, char param_2)
 * Address ranges: 0041e808-0041e817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 15 for TGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 15 for
   TGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_0041e808(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x19)) {
    *(char *)((int)param_1 + 0x19) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

