/*
 * FUN_0042282c at 0042282c
 * undefined __register FUN_0042282c(int param_1)
 * Address ranges: 0042282c-00422842
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41adbc slot 0 for TIconImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41adbc slot 0 for
   TIconImage. Original bytes unchanged; names and types still inferred. */

void FUN_0042282c(int param_1)

{
  if (*(HICON *)(param_1 + 8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

