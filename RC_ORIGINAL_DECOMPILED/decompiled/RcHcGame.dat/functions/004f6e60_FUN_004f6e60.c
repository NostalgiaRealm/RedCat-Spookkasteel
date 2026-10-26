/*
 * FUN_004f6e60 at 004f6e60
 * undefined FUN_004f6e60(void)
 * Address ranges: 004f6e60-004f70df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004f6fbf) */
/* WARNING: Removing unreachable block (ram,0x004f7025) */

undefined4 FUN_004f6e60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puStack_70;
  undefined4 *local_5c;
  undefined1 local_54 [4];
  undefined1 *puStack_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634cc8;
  pvStack_c = ExceptionList;
  puStack_70 = (undefined4 *)0x3fe;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  local_5c = (undefined4 *)0x0;
  puStack_70 = (undefined4 *)0x4f6ea4;
  FUN_005844b0();
  puStack_70 = (undefined4 *)0x0;
  local_4._0_1_ = 1;
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0();
  puStack_70 = (undefined4 *)0x0;
  local_3c[0] = (undefined1)param_1;
  local_4._0_1_ = 2;
  FUN_004040a0();
  puStack_70 = (undefined4 *)0x0;
  local_4._0_1_ = 3;
  local_4c[0] = (undefined1)param_1;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_0069c9ac;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puStack_70 = (undefined4 *)(~uVar6 - 1);
  FUN_004040f0(&DAT_0069c9ac);
  puStack_70 = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005b1140(param_1,0,0,local_3c);
  FUN_005b0ff0(local_2c,0,0,local_3c,local_4c);
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_70 = (undefined4 *)0x4f6f45;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xf8) == 0) {
    puStack_70 = &param_1;
    FUN_00409810(&DAT_006b3f70);
    puStack_70 = local_1c;
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x182);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_70 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_70 = (undefined4 *)local_2c;
  piVar4 = (int *)FUN_0049ffa0(local_54);
  if (*piVar4 != 0) {
    local_4._0_1_ = 6;
    local_5c = (undefined4 *)*piVar4;
    puStack_70 = (undefined4 *)0x4f6fd3;
    FUN_005844b0();
  }
  local_4._0_1_ = 4;
  puStack_70 = (undefined4 *)0x4f6fe1;
  FUN_0057d310();
  if (local_5c == (undefined4 *)0x0) {
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 3;
    FUN_004040a0();
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 2;
    FUN_004040a0();
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 1;
    FUN_004040a0();
    local_4 = 0xffffffff;
    puStack_70 = (undefined4 *)0x4f703f;
    FUN_005ae770();
    uVar5 = 0;
  }
  else {
    puStack_50 = (undefined1 *)&puStack_70;
    puStack_70 = local_5c;
    if (local_5c != (undefined4 *)0x0) {
      local_5c[5] = local_5c[5] + 1;
    }
    FUN_004f68a0();
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 3;
    FUN_004040a0();
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 2;
    FUN_004040a0();
    puStack_70 = (undefined4 *)0x1;
    local_4._0_1_ = 1;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_5c != (undefined4 *)0x0) &&
       (iVar2 = local_5c[5], local_5c[5] = iVar2 + -1, iVar2 + -1 == 0)) {
      puStack_70 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    local_4 = 0xffffffff;
    puStack_70 = (undefined4 *)0x4f70c9;
    FUN_005ae770();
    uVar5 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

