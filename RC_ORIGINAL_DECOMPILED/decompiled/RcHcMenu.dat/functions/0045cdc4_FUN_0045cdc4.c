/*
 * FUN_0045cdc4 at 0045cdc4
 * undefined __register FUN_0045cdc4(int param_1, int * param_2)
 * Address ranges: 0045cdc4-0045ce7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 15 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 15 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045cdc4(int param_1,int *param_2)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  LPSTR local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0045ceb6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x45cded;
  local_8 = param_2;
  local_c = (LPSTR)FUN_004027e8(0x4000);
  puStack_28 = &LAB_0045ce99;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x45ce06;
  puStack_24 = &stack0xfffffffc;
  FUN_00413580(local_8);
  puStack_34 = &LAB_0045ce7c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  DVar1 = GetPrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,local_c,0x4000,lpFileName);
  pcVar3 = local_c;
  if (DVar1 != 0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + iVar2 + 1) {
      FUN_00403f68(&local_10,pcVar3);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar2 = FUN_0040a108(pcVar3);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0045ce83;
  puStack_34 = (undefined1 *)0x45ce7b;
  FUN_0041363c(local_8);
  return;
}

