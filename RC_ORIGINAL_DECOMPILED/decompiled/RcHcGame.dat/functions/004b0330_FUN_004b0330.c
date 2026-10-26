/*
 * FUN_004b0330 at 004b0330
 * undefined FUN_004b0330(void)
 * Address ranges: 004b0330-004b05f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004b0330(int param_1,char param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e620;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00696748,0x3e);
  local_4 = 0;
  iVar1 = FUN_005181b0();
  iVar3 = *(int *)(iVar1 + 100);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 100) = iVar3;
  }
  cVar6 = (char)param_3;
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_1c,s_CAdamFont__AddCharacters____c____00696848,(int)param_2,param_2,
                         (int)cVar6,param_3 & 0xff);
    local_4._0_1_ = 1;
    FUN_005aff00(uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005ae390(local_2c,&DAT_006920fc);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = FUN_004b0230();
  if (iVar3 != 0) {
    FUN_0040cc00(param_1 + 0x20,0,0xffffffff);
  }
  iVar1 = FUN_005181b0();
  iVar3 = *(int *)(iVar1 + 100);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    puVar2 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_geFont_AddCharacters____s_____c__00696814,puVar2,(int)param_2,
                         param_2,(int)cVar6,param_3 & 0xff);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  FUN_004b0230(param_3);
  iVar3 = FUN_005bedd0(param_3);
  if (iVar3 == 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x24);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_Couldn_t_add_characters___c______006967e0,(int)param_2,
                         (int)cVar6,puVar2);
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,0x56
                                  ,uVar4);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iStack_18 != 0) {
      cVar6 = *(char *)(iStack_18 + -1);
      if ((cVar6 == '\0') || (cVar6 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar6 + -1;
      }
    }
  }
  iVar1 = FUN_005181b0();
  iVar3 = *(int *)(iVar1 + 100);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_1c,s_CAdamFont__AddCharacters____leav_006967b4);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_005aff00(uVar4);
    if (iStack_18 != 0) {
      cVar6 = *(char *)(iStack_18 + -1);
      if ((cVar6 == '\0') || (cVar6 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar6 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  if (local_28 != (undefined1 *)0x0) {
    cVar6 = local_28[-1];
    if ((cVar6 == '\0') || (cVar6 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar6 + -1;
    }
  }
  local_28 = (undefined1 *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return 1;
}

