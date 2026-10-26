/*
 * FUN_0056c858 at 0056c858
 * undefined __register FUN_0056c858(int param_1)
 * Address ranges: 0056c858-0056c8bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot published:btnOkClick for TfrmException2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot
   published:btnOkClick for TfrmException2. Original bytes unchanged; names and types still
   inferred. */

void FUN_0056c858(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2ec) + 0xb4))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x234) = 5;
    }
    else {
      *(undefined4 *)(param_1 + 0x234) = 7;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 6;
  }
  return;
}

