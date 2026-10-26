/*
 * FUN_004f6c70 at 004f6c70
 * undefined __register FUN_004f6c70(int param_1, int param_2)
 * Address ranges: 004f6c70-004f6c98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3b70 slot 4 for THeaderSections. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3b70 slot 4 for
   THeaderSections. Original bytes unchanged; names and types still inferred. */

void FUN_004f6c70(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00412ca4(param_2);
    FUN_004f73fc(*(int **)(param_1 + 0x18),iVar1);
    return;
  }
  FUN_004f7420(*(int **)(param_1 + 0x18));
  return;
}

