/*
 * FUN_0046e9b8 at 0046e9b8
 * int __register FUN_0046e9b8(int param_1)
 * Address ranges: 0046e9b8-0046e9da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 14 for TDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 14 for
   TDataLink. Original bytes unchanged; names and types still inferred. */

int FUN_0046e9b8(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 4) + 0x2e) == '\x04') {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0x44);
  if (*(int *)(param_1 + 0xc) < iVar1) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return iVar1;
}

