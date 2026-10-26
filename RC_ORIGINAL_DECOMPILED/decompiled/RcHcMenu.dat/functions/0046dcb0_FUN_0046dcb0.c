/*
 * FUN_0046dcb0 at 0046dcb0
 * undefined __register FUN_0046dcb0(int param_1, char param_2)
 * Address ranges: 0046dcb0-0046dce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465428 slot 12 for TDataSetField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465428 slot 12 for
   TDataSetField. Original bytes unchanged; names and types still inferred. */

void FUN_0046dcb0(int param_1,char param_2)

{
  int *piVar1;
  
  FUN_00468c08(param_1,param_2);
  piVar1 = *(int **)(param_1 + 0xec);
  if (piVar1 != (int *)0x0) {
    if (param_2 == '\0') {
      FUN_004713cc(piVar1);
    }
    else if (*(char *)((int)piVar1 + 0x8d) == '\0') {
      FUN_004713c0(piVar1);
    }
  }
  return;
}

