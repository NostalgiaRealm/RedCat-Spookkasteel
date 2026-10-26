/*
 * FUN_0045d174 at 0045d174
 * undefined __register FUN_0045d174(int param_1)
 * Address ranges: 0045d174-0045d18c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 19 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 19 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045d174(int param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return;
}

