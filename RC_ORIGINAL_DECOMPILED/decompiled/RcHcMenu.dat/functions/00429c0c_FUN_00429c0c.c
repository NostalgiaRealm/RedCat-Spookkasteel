/*
 * FUN_00429c0c at 00429c0c
 * undefined __register FUN_00429c0c(int param_1, UINT * param_2)
 * Address ranges: 00429c0c-00429c40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot -4 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot -4 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00429c0c(int param_1,UINT *param_2)

{
  BOOL BVar1;
  
  if ((*param_2 == 7) && (*(int *)PTR_DAT_00572608 == 1)) {
    BVar1 = IsWindow((HWND)param_2[1]);
    if (BVar1 == 0) {
      param_2[1] = 0;
    }
  }
  FUN_004363ac(param_1,param_2);
  return;
}

