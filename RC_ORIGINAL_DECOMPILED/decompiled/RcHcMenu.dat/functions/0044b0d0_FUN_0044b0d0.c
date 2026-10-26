/*
 * FUN_0044b0d0 at 0044b0d0
 * undefined __register FUN_0044b0d0(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0044b0d0-0044b10a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 34 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 34 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044b0d0(int *param_1,undefined4 param_2,int *param_3)

{
  FUN_004494a8(param_1,param_2,param_3);
  if ((HWND)param_1[0x8f] != (HWND)0x0) {
    SetWindowPos((HWND)param_1[0x8f],(HWND)0x1,*param_3,param_3[1],param_3[2] - *param_3,
                 param_3[3] - param_3[1],0x14);
  }
  return;
}

