/*
 * FUN_004b1d60 at 004b1d60
 * undefined FUN_004b1d60(void)
 * Address ranges: 004b1d60-004b1fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b1d60(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_70 [4];
  int iStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  int iStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e840;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005c3350(0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_40,s_Couldn_t_get_bitmap_info__00696b70);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x2f2,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_70[0] = *param_1;
  FUN_004040a0(0);
  FUN_0040cc00(param_1,0,0xffffffff);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar5 = FUN_00518f30();
  iVar2 = *(int *)(iVar5 + 100);
  if (iVar2 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    uVar3 = FUN_004b1410(local_40,local_70);
    local_4._0_1_ = 2;
    FUN_0040cc00(uVar3,0,0xffffffff);
    local_4._0_1_ = 1;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
  }
  uStack_50 = in_stack_0000001c;
  iStack_4c = in_stack_00000020;
  uStack_48 = in_stack_00000024;
  uStack_44 = in_stack_00000028;
  puVar8 = &uStack_60;
  uStack_5c = local_30;
  uStack_54 = uStack_2c;
  puVar7 = &uStack_50;
  uVar3 = 0;
  puVar6 = &stack0x0000000c;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_004b0230(puVar6,puVar7,0,puVar8,param_2);
  iVar2 = FUN_005bf560(puVar6,puVar7,uVar3,puVar8,param_2);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(&stack0x0000001c,s_Couldn_t_draw_text_to_bitmap__00696bc0);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x310,uVar3);
    (*pcVar4)();
    if (in_stack_00000020 != 0) {
      cVar1 = *(char *)(in_stack_00000020 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(in_stack_00000020 + -1));
      }
      else {
        *(char *)(in_stack_00000020 + -1) = cVar1 + -1;
      }
    }
  }
  if (iStack_6c != 0) {
    cVar1 = *(char *)(iStack_6c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_6c + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return 1;
    }
    FUN_005fe5f0(iStack_6c + -1);
  }
  ExceptionList = pvStack_c;
  return 1;
}

