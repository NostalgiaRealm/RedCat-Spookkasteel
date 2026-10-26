/*
 * FUN_0045d144 at 0045d144
 * undefined __register FUN_0045d144(int param_1, undefined * param_2, undefined * param_3)
 * Address ranges: 0045d144-0045d170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 18 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 18 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045d144(int param_1,undefined *param_2,undefined *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  LPCSTR lpString;
  
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = FUN_004041f4(param_3);
  lpAppName = FUN_004041f4(param_2);
  WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return;
}

