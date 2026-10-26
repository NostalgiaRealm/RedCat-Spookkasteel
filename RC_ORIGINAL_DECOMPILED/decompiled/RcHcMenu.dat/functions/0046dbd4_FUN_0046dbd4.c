/*
 * FUN_0046dbd4 at 0046dbd4
 * undefined __register FUN_0046dbd4(int param_1, char param_2)
 * Address ranges: 0046dbd4-0046dbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4652d4 slot 12 for TArrayField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4652d4 slot 12 for
   TArrayField. Original bytes unchanged; names and types still inferred. */

void FUN_0046dbd4(int param_1,char param_2)

{
  FUN_00468c08(param_1,param_2);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x9a) != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0xc) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}

