/*
 * FUN_00422fb0 at 00422fb0
 * undefined FUN_00422fb0(void)
 * Address ranges: 00422fb0-0042327f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00422fb0(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined1 *puVar11;
  undefined1 local_55;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006225a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((char)param_1[0x1f] != '\0') {
    iVar6 = param_1[0x38];
    ExceptionList = &pvStack_c;
    param_1[0x38] = iVar6 + 1;
    if (iVar6 + 1 < 0xe) {
      cVar1 = *(char *)((int)param_1 + 0xde);
    }
    else {
      param_1[0x38] = 0;
      if (DAT_006c8de0 == 0) {
        FUN_0055b280();
      }
      piVar2 = (int *)FUN_00421750(&local_54);
      local_4 = 0;
      if (*piVar2 == 0) {
        FUN_00409810(&DAT_006b3f70,&local_55);
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar6 = *piVar2;
      local_4 = 0xffffffff;
      local_50 = *(undefined4 *)(iVar6 + 0x210);
      local_4c = *(undefined4 *)(iVar6 + 0x214);
      local_48 = *(undefined4 *)(iVar6 + 0x218);
      if (local_54 != 0) {
        iVar6 = *(int *)(local_54 + 0x14) + -1;
        *(int *)(local_54 + 0x14) = iVar6;
        if (iVar6 == 0) {
          FUN_005abfc0(0);
        }
        local_54 = 0;
      }
      puVar11 = auStack_44;
      (**(code **)(*param_1 + 0x48))(auStack_38,puVar11);
      FUN_005b2fe0(puVar11);
      fVar10 = (float10)FUN_005b2fc0();
      if (fVar10 <= (float10)(float)param_1[0x39]) {
        *(undefined1 *)((int)param_1 + 0xde) = 1;
        cVar1 = *(char *)((int)param_1 + 0xde);
      }
      else {
        *(undefined1 *)((int)param_1 + 0xde) = 0;
        cVar1 = *(char *)((int)param_1 + 0xde);
      }
    }
    if (cVar1 != '\0') {
      if ((char)param_1[0x40] != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      FUN_00403ec0(param_2,param_3);
      if (param_1[0x3f] != 0) {
        FUN_00402d20(param_3,param_2);
      }
      if (param_2 - param_1[0x5b] < DAT_0068f7f0) {
        if ((char)param_1[0x59] != '\0') {
          param_1[0x5a] = param_2;
        }
      }
      else {
        param_1[0x5b] = param_2;
        (**(code **)(*param_1 + 0x78))(param_2);
      }
      (**(code **)(*param_1 + 0x5c))(param_2,param_3);
      ExceptionList = pvStack_c;
      return;
    }
  }
  if (param_1[0x3f] == 0) {
    local_2c[0] = (undefined1)param_3;
    uVar4 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_24 = 0;
    local_20 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_MainState____0_0068f8b0,
                                  s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0xf0,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
  }
  cVar1 = FUN_004034a0();
  if ((cVar1 != '\0') || (cVar1 = FUN_004034c0(), cVar1 != '\0')) {
    (**(code **)(*(int *)param_1[0x3f] + 0x24))();
  }
  ExceptionList = pvStack_c;
  return;
}

