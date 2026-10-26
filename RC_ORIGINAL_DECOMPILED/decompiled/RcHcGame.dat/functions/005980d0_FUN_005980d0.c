/*
 * FUN_005980d0 at 005980d0
 * undefined FUN_005980d0(void)
 * Address ranges: 005980d0-00598300
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005980d0(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_54;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006440e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059b1c0();
  local_4 = 0;
  if (param_1 == 0) {
    local_1c[0] = 0;
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_CheckWayPoint____0_006a6d44,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x8c,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_00597fb0();
  FUN_00597fb0();
  FUN_005b2fe0(auStack_28);
  FUN_005b2f20();
  iVar7 = 0;
  do {
    uVar3 = FUN_00598310(&param_1,iVar7);
    local_4._0_1_ = 2;
    FUN_0059b1d0(uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005630e0();
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(local_54);
      FUN_00597fb0();
      FUN_005b2fe0(auStack_34);
      FUN_005b2f20();
      fVar10 = (float10)FUN_005b2e40();
      fVar11 = (float10)fcos((float10)param_2 * (float10)0.017453292);
      if (fVar11 < fVar10) {
        local_4 = 0xffffffff;
        FUN_005630e0();
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return 0;
}

