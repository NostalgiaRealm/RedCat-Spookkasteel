/*
 * FUN_004149bc at 004149bc
 * DWORD __register FUN_004149bc(int param_1, LPCVOID param_2, DWORD param_3)
 * Address ranges: 004149bc-004149cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410e10 slot 2 for THandleStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410e10 slot 2 for
   THandleStream. Original bytes unchanged; names and types still inferred. */

DWORD FUN_004149bc(int param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = FUN_00409d28(*(HANDLE *)(param_1 + 4),param_2,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}

