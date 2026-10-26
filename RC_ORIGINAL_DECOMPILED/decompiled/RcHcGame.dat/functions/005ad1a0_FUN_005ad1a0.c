/*
 * FUN_005ad1a0 at 005ad1a0
 * undefined FUN_005ad1a0(void)
 * Address ranges: 005ad1a0-005ad361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ad1a0(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  LPCSTR lpFileName;
  BOOL BVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  LPCSTR lpAppName;
  LPCSTR lpString;
  LPCSTR lpKeyName;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_006ca01c == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x44);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      DAT_006ca01c = 0;
    }
    else {
      DAT_006ca01c = FUN_005a44a0();
    }
  }
  local_4 = 0xffffffff;
  FUN_005a46a0(param_1 + 0x50);
  iVar3 = FUN_005a56e0(param_1 + 0x34);
  if ((iVar3 != 0) && (iVar3 = FUN_005a5b60(param_1 + 0x24), iVar3 != 0)) {
    FUN_004c2a00(param_1 + 0x14);
  }
  lpFileName = *(LPCSTR *)(param_1 + 0x54);
  if (lpFileName == (LPCSTR)0x0) {
    lpFileName = "";
  }
  lpString = "";
  if (*(LPCSTR *)(param_1 + 0x18) != (LPCSTR)0x0) {
    lpString = *(LPCSTR *)(param_1 + 0x18);
  }
  lpKeyName = *(LPCSTR *)(param_1 + 0x28);
  if (lpKeyName == (LPCSTR)0x0) {
    lpKeyName = "";
  }
  lpAppName = *(LPCSTR *)(param_1 + 0x38);
  if (lpAppName == (LPCSTR)0x0) {
    lpAppName = "";
  }
  BVar4 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar4 == 0) {
    if (DAT_006cad94 == 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x54);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_2c,s_Some_INI_file_s__cannot_be_updat_006a8f7c,puVar5);
      local_4 = 1;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a8edc,0x16f,uVar6);
      local_4 = 0xffffffff;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    DAT_006cad94 = DAT_006cad94 + 1;
    if (DAT_006cad94 < 6) {
      puVar5 = *(undefined1 **)(param_1 + 0x54);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_1c,s_Cannot_write_to_INI_file__s_006a8f60,puVar5);
      local_4 = 2;
      FUN_005aff00(uVar6);
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(local_18 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_005fe5f0((char *)(local_18 + -1));
      }
    }
  }
  ExceptionList = local_c;
  return;
}

