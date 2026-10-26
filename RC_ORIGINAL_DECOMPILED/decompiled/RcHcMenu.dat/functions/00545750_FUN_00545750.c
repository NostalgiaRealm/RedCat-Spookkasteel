/*
 * FUN_00545750 at 00545750
 * undefined __register FUN_00545750(int * param_1)
 * Address ranges: 00545750-00545785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x543fc0 slot published:btnOkClick for TfrmCascadingDelete. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x543fc0 slot
   published:btnOkClick for TfrmCascadingDelete. Original bytes unchanged; names and types still
   inferred. */

void FUN_00545750(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00545554(param_1);
  if (cVar1 == '\0') {
    param_1[0x8d] = 0;
  }
  else {
    param_1[0x8d] = 1;
  }
  return;
}

