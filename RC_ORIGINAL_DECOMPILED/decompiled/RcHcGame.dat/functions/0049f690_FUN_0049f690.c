/*
 * FUN_0049f690 at 0049f690
 * undefined FUN_0049f690(void)
 * Address ranges: 0049f690-0049f948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_0049f690(int param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined1 local_51;
  int local_50 [3];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cd5f;
  pvStack_c = ExceptionList;
  local_50[1] = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00695128,0x22);
  iVar6 = param_3;
  local_50[0] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar1 = *(undefined1 **)(param_3 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  uVar2 = FUN_005ae390(local_34,s_CAdamActorDefMgr__AddActorDefFro_006951a8,puVar1);
  local_4._0_1_ = 3;
  FUN_005ab4a0();
  local_4._0_1_ = 4;
  local_10 = timeGetTime();
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940,uVar2);
  FUN_0051c180();
  FUN_00515ff0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar3 = FUN_0049f950();
    puVar1 = *(undefined1 **)(iVar3 + 4);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005ae390(local_44,s_CAdamLoadUpdater_>>__s_00695190,puVar1);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar2);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  piVar4 = (int *)FUN_0049f220(&param_3,iVar6);
  local_4._0_1_ = 8;
  if (local_50[0] != *piVar4) {
    if ((local_50[0] != 0) &&
       (iVar6 = *(int *)(local_50[0] + 0x14) + -1, *(int *)(local_50[0] + 0x14) = iVar6, iVar6 == 0)
       ) {
      FUN_005abfc0(0);
    }
    local_50[0] = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 7;
  if ((param_3 != 0) &&
     (iVar6 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  if (local_50[0] != 0) {
    uVar2 = FUN_0059bd20();
    if (*(char *)(param_1 + 0x2c) != '\0') {
      FUN_00409810(&DAT_006b3f70,&local_51);
      local_4._0_1_ = 10;
      pcVar5 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x49,local_44);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0(1);
    }
    iVar6 = FUN_004a02c0(uVar2,&param_3);
    if ((char)param_3 != '\0') {
      FUN_00409810(&DAT_006b3f70,&local_51);
      local_4._0_1_ = 0xb;
      pcVar5 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b
                                    ,local_44);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0(1);
    }
    FUN_004fdb90(*(int *)(param_1 + 0x18) + iVar6 * 4,local_50);
  }
  *param_2 = local_50[0];
  if (local_50[0] != 0) {
    *(int *)(local_50[0] + 0x14) = *(int *)(local_50[0] + 0x14) + 1;
  }
  local_50[1] = 1;
  local_4._0_1_ = 2;
  FUN_0049fa20();
  local_4._0_1_ = 1;
  if (local_50[0] != 0) {
    iVar6 = *(int *)(local_50[0] + 0x14) + -1;
    *(int *)(local_50[0] + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    local_50[0] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_2;
}

