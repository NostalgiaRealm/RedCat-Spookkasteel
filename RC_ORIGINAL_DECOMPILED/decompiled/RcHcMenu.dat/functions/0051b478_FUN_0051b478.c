/*
 * FUN_0051b478 at 0051b478
 * undefined __register FUN_0051b478(int param_1)
 * Address ranges: 0051b478-0051b4ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot published:btnOKClick for TfrmDaviGridSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot
   published:btnOKClick for TfrmDaviGridSettings. Original bytes unchanged; names and types still
   inferred. */

void FUN_0051b478(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0051b27c(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_0051b364(param_1);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x234) = 1;
    }
  }
  return;
}

