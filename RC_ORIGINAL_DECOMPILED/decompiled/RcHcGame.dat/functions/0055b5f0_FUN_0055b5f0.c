/*
 * FUN_0055b5f0 at 0055b5f0
 * undefined FUN_0055b5f0(void)
 * Address ranges: 0055b5f0-0055b7c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0055b5f0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int local_34;
  LONG local_30;
  tagRECT local_2c;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f4b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005c96a0(*(undefined4 *)(param_1 + 0x118),&local_34,&local_30);
  if ((bool)*(char *)(param_1 + 0x120) != (local_34 == -1)) {
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_2c.left._0_1_ = (undefined1)param_2;
    local_2c.top = 0;
    local_2c.right = 0;
    local_2c.bottom = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_DriverIsWindowed_____w___1__006a283c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0xd0,&local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_2c.top != 0) {
      cVar1 = *(char *)(local_2c.top + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_2c.top + -1));
      }
      else {
        *(char *)(local_2c.top + -1) = cVar1 + -1;
      }
    }
  }
  if (local_34 == -1) {
    FUN_005a7d00();
    GetClientRect(*(HWND *)(param_2 + 0x54),&local_2c);
    local_34 = local_2c.right;
    local_30 = local_2c.bottom;
  }
  iVar3 = FUN_00517430();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    uVar6 = FUN_005ae390(&local_2c,s_Engine_Mode__ld_X__ld_006a2824,local_34,local_30);
    local_4 = 1;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    if (local_2c.top != 0) {
      cVar1 = *(char *)(local_2c.top + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_2c.top + -1));
      }
      else {
        *(char *)(local_2c.top + -1) = cVar1 + -1;
      }
    }
  }
  *(int *)(param_1 + 0x40) = local_34;
  *(LONG *)(param_1 + 0x44) = local_30;
  FUN_00564090(auStack_1c);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

