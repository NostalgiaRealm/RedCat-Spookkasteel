/*
 * FUN_004894ec at 004894ec
 * undefined4 __register FUN_004894ec(int param_1, int param_2, short param_3)
 * Address ranges: 004894ec-0048951c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 3 for TBlobStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 3 for
   TBlobStream. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004894ec(int param_1,int param_2,short param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  else if (param_3 == 1) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  }
  else if (param_3 == 2) {
    iVar1 = FUN_00489560(param_1);
    *(int *)(param_1 + 0x1c) = param_2 + iVar1;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}

