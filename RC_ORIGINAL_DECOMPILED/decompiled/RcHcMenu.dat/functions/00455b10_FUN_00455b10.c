/*
 * FUN_00455b10 at 00455b10
 * undefined __register FUN_00455b10(int param_1, LPRECT param_2)
 * Address ranges: 00455b10-00455b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 33 for TCustomPanel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 33 for
   TCustomPanel. Original bytes unchanged; names and types still inferred. */

void FUN_00455b10(int param_1,LPRECT param_2)

{
  int iVar1;
  
  FUN_00434bdc();
  InflateRect(param_2,-*(int *)(param_1 + 0x200),-*(int *)(param_1 + 0x200));
  iVar1 = 0;
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1fc);
  }
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x1fc);
  }
  InflateRect(param_2,-iVar1,-iVar1);
  return;
}

