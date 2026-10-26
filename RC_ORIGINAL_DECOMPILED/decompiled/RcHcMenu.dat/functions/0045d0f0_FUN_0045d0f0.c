/*
 * FUN_0045d0f0 at 0045d0f0
 * undefined __register FUN_0045d0f0(int param_1, undefined * param_2)
 * Address ranges: 0045d0f0-0045d140
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 17 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 17 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045d0f0(int param_1,undefined *param_2)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR lpKeyName;
  LPCSTR lpString;
  undefined4 local_10;
  undefined1 local_c;
  
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  lpAppName = FUN_004041f4(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_10 = *(undefined4 *)(param_1 + 4);
    local_c = 0xb;
    uVar2 = FUN_0040cfe4((int)&DAT_00408ac4,'\x01',(undefined4 *)PTR_PTR_005724b4,0,&local_10);
    FUN_0040382c(uVar2);
  }
  return;
}

