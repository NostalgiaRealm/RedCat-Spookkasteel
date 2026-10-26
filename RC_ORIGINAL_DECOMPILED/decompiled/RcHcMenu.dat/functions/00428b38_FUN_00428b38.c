/*
 * FUN_00428b38 at 00428b38
 * undefined __register FUN_00428b38(int param_1, LPRECT param_2)
 * Address ranges: 00428b38-00428b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 33 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 33 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_00428b38(int param_1,LPRECT param_2)

{
  LONG LVar1;
  
  FUN_00434bdc();
  FUN_0041ce68(*(int *)(param_1 + 0x1f0));
  LVar1 = FUN_0041cdc4(*(int **)(param_1 + 0x1f0),&DAT_00428b90);
  param_2->top = param_2->top + LVar1;
  InflateRect(param_2,-1,-1);
  if (*(char *)(param_1 + 0x138) != '\0') {
    InflateRect(param_2,-1,-1);
  }
  return;
}

