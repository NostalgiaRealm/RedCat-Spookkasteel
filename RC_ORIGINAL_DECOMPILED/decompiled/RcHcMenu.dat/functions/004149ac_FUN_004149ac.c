/*
 * FUN_004149ac at 004149ac
 * DWORD __register FUN_004149ac(int param_1, LPVOID param_2, DWORD param_3)
 * Address ranges: 004149ac-004149bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410e10 slot 1 for THandleStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410e10 slot 1 for
   THandleStream. Original bytes unchanged; names and types still inferred. */

DWORD FUN_004149ac(int param_1,LPVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = FUN_00409cfc(*(HANDLE *)(param_1 + 4),param_2,param_3);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}

