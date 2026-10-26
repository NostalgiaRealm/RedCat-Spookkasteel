/*
 * FUN_0050cb60 at 0050cb60
 * undefined FUN_0050cb60(void)
 * Address ranges: 0050cb60-0050ce78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050cb60(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_stack_00000030;
  undefined4 auStack_8c [5];
  undefined4 uStack_78;
  char *pcStack_74;
  char *pcStack_70;
  char *pcStack_6c;
  int *piStack_68;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636bb7;
  pvStack_c = ExceptionList;
  piStack_68 = (int *)0x37;
  pcStack_6c = s_D__Work_RCHorror_AdamSource_Adam_0069e8f0;
  local_4c = 0;
  pcStack_70 = (char *)0x50cb96;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  iVar7 = param_2;
  local_54 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  piStack_68 = *(int **)(param_2 + 4);
  if (piStack_68 == (int *)0x0) {
    piStack_68 = (int *)&DAT_0064a3b4;
  }
  pcStack_70 = local_34;
  pcStack_6c = s_CAdamBitmapMgr__AddBitmap___s___0069e964;
  pcStack_74 = (char *)0x50cbc7;
  uVar1 = FUN_005ae390();
  local_4._0_1_ = 3;
  piStack_68 = (int *)0x50cbda;
  FUN_005ab4a0();
  local_4._0_1_ = 4;
  piStack_68 = (int *)0x50cbe6;
  local_10 = timeGetTime();
  pcStack_6c = (char *)DAT_006b9940;
  local_24 = &PTR_FUN_0064e854;
  pcStack_70 = (undefined1 *)0x50cc03;
  piStack_68 = (int *)uVar1;
  FUN_00442bf0();
  piStack_68 = (int *)0x50cc08;
  FUN_0051c180();
  piStack_68 = (int *)0x50cc0d;
  FUN_00515ff0();
  piStack_68 = (int *)0x50cc14;
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    piStack_68 = (int *)0x50cc1d;
    iVar2 = FUN_0049f950();
    piStack_68 = *(int **)(iVar2 + 4);
    if (piStack_68 == (int *)0x0) {
      piStack_68 = (int *)&DAT_0064a3b4;
    }
    pcStack_70 = local_44;
    pcStack_6c = s_CAdamLoadUpdater_>>__s_00695190;
    pcStack_74 = (char *)0x50cc39;
    pcStack_74 = (char *)FUN_005ae390();
    local_4._0_1_ = 5;
    uStack_78 = 0x50cc44;
    FUN_005aff00();
    local_4._0_1_ = 4;
    piStack_68 = (int *)0x1;
    pcStack_6c = (char *)0x50cc56;
    FUN_004040a0();
  }
  piStack_68 = (int *)0x1;
  local_4._0_1_ = 7;
  pcStack_6c = (char *)0x50cc67;
  FUN_004040a0();
  piStack_68 = *(int **)(iVar7 + 4);
  if (piStack_68 == (int *)0x0) {
    piStack_68 = (int *)&DAT_0064a3b4;
  }
  pcStack_70 = local_44;
  pcStack_6c = s_CAdamBitmapMgr__AddBitmap___s___0069e964;
  pcStack_74 = (char *)0x50cc83;
  pcStack_74 = (char *)FUN_005ae390();
  local_4._0_1_ = 8;
  uStack_78 = 0x50cc8e;
  FUN_005aff00();
  local_4 = CONCAT31(local_4._1_3_,7);
  piStack_68 = (int *)0x1;
  pcStack_6c = (char *)0x50cca0;
  FUN_004040a0();
  piStack_68 = (int *)in_stack_00000030;
  puVar5 = (undefined4 *)&stack0x0000000c;
  puVar6 = auStack_8c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar3 = (int *)FUN_0050b320(&param_2,iVar7);
  local_4._0_1_ = 9;
  if (local_54 != *piVar3) {
    if ((local_54 != 0) &&
       (iVar7 = *(int *)(local_54 + 0x14) + -1, *(int *)(local_54 + 0x14) = iVar7, iVar7 == 0)) {
      piStack_68 = (int *)0x0;
      pcStack_6c = (char *)0x50ccf4;
      FUN_005abfc0();
    }
    local_54 = *piVar3;
    piStack_68 = (int *)0x50cd03;
    FUN_005844b0();
  }
  local_4._0_1_ = 7;
  if ((param_2 != 0) &&
     (iVar7 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar7, iVar7 == 0)) {
    piStack_68 = (int *)0x0;
    pcStack_6c = (char *)0x50cd2b;
    FUN_005abfc0();
  }
  if (local_54 != 0) {
    piStack_68 = (int *)0x50cd3c;
    uVar1 = FUN_00556560();
    if (*(char *)(local_50 + 0x2c) != '\0') {
      piStack_68 = &stack0x00000030;
      pcStack_6c = &DAT_006b3f70;
      pcStack_70 = (char *)0x50cd62;
      FUN_00409810();
      piStack_68 = (int *)&stack0x0000000c;
      local_4._0_1_ = 0xb;
      pcStack_6c = (char *)0x49;
      pcStack_70 = s___AdamSource_DaviSortedList_h_00690798;
      pcStack_74 = s__GetIsLocked___00695180;
      uStack_78 = 0x50cd7d;
      pcVar4 = (code *)FUN_005a07f0();
      uStack_78 = 0x50cd7f;
      (*pcVar4)();
      local_4._0_1_ = 7;
      piStack_68 = (int *)0x1;
      pcStack_6c = (char *)0x50cd91;
      FUN_004040a0();
    }
    piStack_68 = &param_2;
    pcStack_70 = (char *)0x50cd9e;
    pcStack_6c = (char *)uVar1;
    iVar7 = FUN_004fd890();
    if ((char)param_2 != '\0') {
      piStack_68 = &stack0x00000030;
      pcStack_6c = &DAT_006b3f70;
      pcStack_70 = (char *)0x50cdbe;
      FUN_00409810();
      piStack_68 = (int *)&stack0x0000000c;
      local_4._0_1_ = 0xc;
      pcStack_6c = (char *)0x4b;
      pcStack_70 = s___AdamSource_DaviSortedList_h_00690798;
      pcStack_74 = s___exist_00695178;
      uStack_78 = 0x50cdd9;
      pcVar4 = (code *)FUN_005a07f0();
      uStack_78 = 0x50cddb;
      (*pcVar4)();
      local_4._0_1_ = 7;
      piStack_68 = (int *)0x1;
      pcStack_6c = (char *)0x50cded;
      FUN_004040a0();
    }
    piStack_68 = &local_54;
    pcStack_6c = (char *)(*(int *)(local_50 + 0x18) + iVar7 * 4);
    pcStack_70 = (undefined1 *)0x50ce00;
    FUN_004fdb90();
  }
  *param_1 = local_54;
  if (local_54 != 0) {
    *(int *)(local_54 + 0x14) = *(int *)(local_54 + 0x14) + 1;
  }
  local_4c = 1;
  local_4._0_1_ = 2;
  piStack_68 = (int *)0x50ce27;
  FUN_0049fa20();
  local_4._0_1_ = 1;
  if (local_54 != 0) {
    iVar7 = *(int *)(local_54 + 0x14) + -1;
    *(int *)(local_54 + 0x14) = iVar7;
    if (iVar7 == 0) {
      piStack_68 = (int *)0x0;
      pcStack_6c = (char *)0x50ce4c;
      FUN_005abfc0();
    }
    local_54 = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  piStack_68 = (int *)0x50ce62;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

