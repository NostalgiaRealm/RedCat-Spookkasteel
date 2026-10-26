/*
 * FUN_004856c0 at 004856c0
 * int __register FUN_004856c0(int param_1, int param_2, int param_3)
 * Address ranges: 004856c0-0048570d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 131 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 131 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

int FUN_004856c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_1c;
  
  if ((&DAT_0057154c)[(uint)(param_3 == 0) + (uint)(param_2 == 0) * 2] == '\x02') {
    iVar1 = *(int *)(param_1 + 0x168);
    if (iVar1 != 0) {
      thunk_FUN_004799ee(param_1);
      local_1c = iVar1;
    }
    if (local_1c == 2) {
      local_1c = 0;
    }
  }
  return local_1c;
}

