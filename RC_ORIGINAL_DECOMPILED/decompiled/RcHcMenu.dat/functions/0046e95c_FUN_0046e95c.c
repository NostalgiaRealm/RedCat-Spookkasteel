/*
 * FUN_0046e95c at 0046e95c
 * int __register FUN_0046e95c(int param_1)
 * Address ranges: 0046e95c-0046e973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 10 for TDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 10 for
   TDataLink. Original bytes unchanged; names and types still inferred. */

int FUN_0046e95c(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 4) + 0x2e) == '\x04') {
    return 0;
  }
  return *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0x48) - *(int *)(param_1 + 0x10);
}

