/*
 * FUN_0046e974 at 0046e974
 * undefined __register FUN_0046e974(int param_1, int param_2)
 * Address ranges: 0046e974-0046e986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 18 for TDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 18 for
   TDataLink. Original bytes unchanged; names and types still inferred. */

void FUN_0046e974(int param_1,int param_2)

{
  if (*(char *)(*(int *)(param_1 + 4) + 0x2e) != '\x04') {
    *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0x48) = param_2 + *(int *)(param_1 + 0x10);
  }
  return;
}

