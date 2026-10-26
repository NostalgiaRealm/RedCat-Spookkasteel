/*
 * FUN_0045cd58 at 0045cd58
 * undefined __register FUN_0045cd58(int param_1, undefined * param_2, undefined * param_3, undefined * param_4)
 * Address ranges: 0045cd58-0045cdc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 1 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 1 for TIniFile.
   Original bytes unchanged; names and types still inferred. */

void FUN_0045cd58(int param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  LPCSTR lpFileName;
  LPCSTR lpString;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined1 local_8;
  
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  lpString = FUN_004041f4(param_4);
  lpKeyName = FUN_004041f4(param_3);
  lpAppName = FUN_004041f4(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_c = *(undefined4 *)(param_1 + 4);
    local_8 = 0xb;
    uVar2 = FUN_0040cfe4((int)&DAT_00408ac4,'\x01',(undefined4 *)PTR_PTR_005724b4,0,&local_c);
    FUN_0040382c(uVar2);
  }
  return;
}

