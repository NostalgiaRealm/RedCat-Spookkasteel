/*
 * FUN_0045cec4 at 0045cec4
 * undefined __register FUN_0045cec4(int param_1, undefined * param_2, int * param_3)
 * Address ranges: 0045cec4-0045cf84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 14 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 14 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045cec4(int param_1,undefined *param_2,int *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpKeyName;
  LPCSTR lpDefault;
  DWORD DVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  char *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_0045cfbf;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x45cef0;
  local_8 = param_3;
  local_c = (char *)FUN_004027e8(0x4000);
  puStack_2c = &LAB_0045cfa2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x45cf09;
  puStack_28 = &stack0xfffffffc;
  FUN_00413580(local_8);
  puStack_38 = &LAB_0045cf85;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  DVar3 = 0x4000;
  lpDefault = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  pcVar2 = local_c;
  lpAppName = FUN_004041f4(param_2);
  DVar3 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,pcVar2,DVar3,lpFileName);
  pcVar2 = local_c;
  if (DVar3 != 0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + iVar1 + 1) {
      FUN_00403f68(&local_10,pcVar2);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar1 = FUN_0040a108(pcVar2);
    }
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0045cf8c;
  puStack_38 = (undefined1 *)0x45cf84;
  FUN_0041363c(local_8);
  return;
}

