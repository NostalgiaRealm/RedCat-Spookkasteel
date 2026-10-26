/*
 * FUN_005028d0 at 005028d0
 * undefined FUN_005028d0(void)
 * Address ranges: 005028d0-00502bb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005028d0(int *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  int *piStack_4c;
  undefined1 *puStack_48;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_20;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00635b70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  puStack_48 = (undefined1 *)0x12e;
  piStack_4c = (int *)s_D__Work_RCHorror_AdamSource_Adam_0069d990;
  local_8 = 1;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_005ae5f0();
  local_8._0_1_ = 3;
  puVar4 = param_3;
  if ((char)param_1[0x1f] != '\0') {
    local_20 = (undefined1 *)0x0;
    puStack_48 = (undefined1 *)0x50292b;
    FUN_005844b0();
    bVar5 = (undefined1 *)param_2 != local_20;
    puStack_48 = (undefined1 *)0x50293e;
    FUN_0057d310();
    if (bVar5) {
      if (param_2 == 0) {
        puStack_48 = &local_15;
        piStack_4c = (int *)&DAT_006b3f70;
        FUN_00409810();
        local_8._0_1_ = 4;
        puStack_48 = (undefined1 *)0x502961;
        pcVar2 = (code *)FUN_005a07f0();
        puStack_48 = local_38;
        piStack_4c = (int *)0xb6;
        (*pcVar2)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        local_8._0_1_ = 3;
        puStack_48 = (undefined1 *)0x1;
        piStack_4c = (int *)0x502987;
        FUN_004040a0();
      }
      piStack_4c = param_1 + 7;
      puStack_48 = (undefined1 *)0x0;
      FUN_004f62e0();
    }
    puVar4 = param_3;
    local_20 = (undefined1 *)0x0;
    bVar5 = param_3 != (undefined1 *)0x0;
    puStack_48 = (undefined1 *)0x5029a7;
    FUN_0057d310();
    param_1 = local_1c;
    if (bVar5) {
      if (puVar4 == (undefined1 *)0x0) {
        puStack_48 = &local_15;
        piStack_4c = (int *)&DAT_006b3f70;
        FUN_00409810();
        local_8._0_1_ = 5;
        puStack_48 = (undefined1 *)0x5029c9;
        pcVar2 = (code *)FUN_005a07f0();
        puStack_48 = local_38;
        piStack_4c = (int *)0xb6;
        (*pcVar2)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        local_8._0_1_ = 3;
        puStack_48 = (undefined1 *)0x1;
        piStack_4c = (int *)0x5029ef;
        FUN_004040a0();
      }
      puStack_48 = (undefined1 *)0x1;
      piStack_4c = local_1c + 7;
      FUN_004f62e0();
      param_1 = local_1c;
    }
  }
  if (*(char *)((int)param_1 + 0x7d) != '\0') {
    bVar5 = param_2 != 0;
    local_20 = (undefined1 *)0x0;
    puStack_48 = (undefined1 *)0x502a24;
    FUN_0057d310();
    if (bVar5) {
      if (param_2 == 0) {
        puStack_48 = &local_15;
        piStack_4c = (int *)&DAT_006b3f70;
        FUN_00409810();
        local_8._0_1_ = 6;
        puStack_48 = (undefined1 *)0x502a49;
        pcVar2 = (code *)FUN_005a07f0();
        puStack_48 = local_38;
        piStack_4c = (int *)0xb6;
        (*pcVar2)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        local_8._0_1_ = 3;
        puStack_48 = (undefined1 *)0x1;
        piStack_4c = (int *)0x502a6f;
        FUN_004040a0();
      }
      piStack_4c = param_1 + 0xd;
      puStack_48 = (undefined1 *)0x0;
      FUN_004f62c0();
    }
    if (puVar4 != (undefined1 *)0x0) {
      if (puVar4 == (undefined1 *)0x0) {
        puStack_48 = &local_15;
        piStack_4c = (int *)&DAT_006b3f70;
        FUN_00409810();
        local_8._0_1_ = 7;
        puStack_48 = (undefined1 *)0x502aa4;
        pcVar2 = (code *)FUN_005a07f0();
        puStack_48 = local_38;
        piStack_4c = (int *)0xb6;
        (*pcVar2)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        local_8._0_1_ = 3;
        puStack_48 = (undefined1 *)0x1;
        piStack_4c = (int *)0x502aca;
        FUN_004040a0();
      }
      piStack_4c = param_1 + 0xd;
      puStack_48 = (undefined1 *)0x1;
      FUN_004f62c0();
    }
  }
  if ((undefined1 *)param_1[6] != puVar4) {
    if ((undefined1 *)param_1[6] != (undefined1 *)0x0) {
      puStack_48 = (undefined1 *)0x502aea;
      FUN_004098d0();
    }
    param_1[6] = (int)puVar4;
    puStack_48 = (undefined1 *)0x502af3;
    FUN_005844b0();
  }
  local_20 = (undefined1 *)&puStack_48;
  piStack_4c = (int *)0x502b00;
  puStack_48 = puVar4;
  FUN_005844b0();
  local_28 = (undefined1 *)&piStack_4c;
  local_8._0_1_ = 8;
  FUN_00449760(&param_2);
  piVar1 = local_1c;
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*local_1c + 0x34))();
  if (((puVar4 != (undefined1 *)0x0) && (*(char *)((int)piVar1 + 0xaa) != '\0')) &&
     (*(char *)((int)piVar1 + 0xab) == '\0')) {
    FUN_004fb080();
  }
  local_8 = 1;
  FUN_005ae770();
  local_8 = local_8 & 0xffffff00;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_2 = 0;
  }
  local_8 = 0xffffffff;
  if ((puVar4 != (undefined1 *)0x0) &&
     (iVar3 = *(int *)(puVar4 + 0x14), *(int *)(puVar4 + 0x14) = iVar3 + -1, iVar3 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_10;
  return;
}

