/*
 * FUN_005a9fa0 at 005a9fa0
 * undefined FUN_005a9fa0(void)
 * Address ranges: 005a9fa0-005aa214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a9fa0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  tagPOINT local_3c;
  tagPOINT local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006459d8;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x5b) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    ExceptionList = &local_c;
    iVar5 = FUN_005178b0();
    iVar2 = *(int *)(iVar5 + 100);
    if (iVar2 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar3);
      *(int *)(iVar5 + 100) = iVar2;
    }
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    GetCursorPos(&local_34);
    iVar5 = FUN_005178b0();
    iVar2 = *(int *)(iVar5 + 100);
    if (iVar2 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar3);
      *(int *)(iVar5 + 100) = iVar2;
    }
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar4 = FUN_005ae390(local_1c,s_CDaviMainWindow__RestrictMouse___006a897c,local_34.x,local_34.y,
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    local_4 = 2;
    FUN_005aff00(uVar4);
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = (char *)(local_18 + -1);
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar6 = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    ExceptionList = &local_c;
    GetCursorPos(&local_3c);
    iVar2 = local_3c.x - *(int *)(param_1 + 100);
    iVar5 = local_3c.y - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar2;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar5;
    if ((iVar2 != 0) || (iVar5 != 0)) {
      iVar5 = FUN_00517af0();
      iVar2 = *(int *)(iVar5 + 100);
      if (iVar2 == -0x80000000) {
        puVar3 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10(puVar3);
        *(int *)(iVar5 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        uVar4 = FUN_005ae390(local_2c,s_CDaviMainWindow__RestrictMouse___006a8a18,
                             *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
        local_4 = 0;
        FUN_005aff00(uVar4);
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
      SetCursorPos(*(int *)(param_1 + 100),*(int *)(param_1 + 0x68));
    }
    iVar5 = FUN_005178b0();
    iVar2 = *(int *)(iVar5 + 100);
    if (iVar2 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar3);
      *(int *)(iVar5 + 100) = iVar2;
    }
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar4 = FUN_005ae390(local_2c,s_CDaviMainWindow__RestrictMouse___006a89d0,local_3c.x,local_3c.y,
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    local_4 = 1;
    FUN_005aff00(uVar4);
    if (local_28 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = (char *)(local_28 + -1);
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar6 = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  FUN_005fe5f0(pcVar6);
  ExceptionList = local_c;
  return;
}

