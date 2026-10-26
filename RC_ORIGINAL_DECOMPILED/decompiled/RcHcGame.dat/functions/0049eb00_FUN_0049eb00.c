/*
 * FUN_0049eb00 at 0049eb00
 * undefined FUN_0049eb00(void)
 * Address ranges: 0049eb00-0049eecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049eb00(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined1 local_132;
  undefined1 uStack_131;
  int local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *piStack_100;
  int aiStack_fc [9];
  undefined1 auStack_d8 [12];
  int aiStack_cc [9];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [96];
  int aiStack_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cc0d;
  local_c = ExceptionList;
  if (param_1[0x90] != 0) {
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_004042e0(&local_130);
    local_4 = 0;
    if (*piVar2 == 0) {
      local_11c[0] = local_132;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_11c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar4 = *piVar2;
    if (*(int *)(iVar4 + 0x5c) == 0) {
      local_12c[0] = local_132;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_12c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_005b9810(*(undefined4 *)(iVar4 + 0x5c),param_1[0x90],aiStack_3c);
    local_4 = 0xffffffff;
    if (local_130 != 0) {
      FUN_004098d0();
    }
    FUN_005b30c0();
    piStack_100 = param_1 + 0x91;
    FUN_005b3690();
    FUN_005b30c0();
    FUN_005b32c0(auStack_9c);
    piVar2 = (int *)FUN_004042e0(&local_130);
    local_4 = 3;
    if (*piVar2 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_132);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_12c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar4 = *piVar2;
    if (*(int *)(iVar4 + 0x5c) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_131);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_11c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar4 = FUN_005b98a0(*(undefined4 *)(iVar4 + 0x5c),param_1[0x90],&uStack_10c);
    local_4 = 0xffffffff;
    if (local_130 != 0) {
      FUN_004098d0();
    }
    if (iVar4 == 0) {
      local_12c[0] = uStack_131;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = s_Could_not_get_model_origin__00695040;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_Could_not_get_model_origin__00695040,~uVar6 - 1);
      local_4 = 6;
      FUN_005035a0(local_12c);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_11c);
      uStack_10c = *puVar5;
      uStack_108 = puVar5[1];
      uStack_104 = puVar5[2];
    }
    piVar2 = param_1 + 0x5a;
    piVar8 = aiStack_fc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
    FUN_005b2fe0(auStack_d8);
    FUN_005b32c0(aiStack_fc);
    piVar2 = aiStack_fc;
    piVar8 = aiStack_cc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
    FUN_005b3000(auStack_a8);
    FUN_005b3840();
    piVar2 = aiStack_cc;
    piVar8 = param_1 + 0x5a;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
    FUN_0049d5e0(1);
    *(undefined1 *)(param_1 + 0x66) = 1;
    FUN_0049eed0();
    piVar2 = aiStack_3c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piStack_100 = *piVar2;
      piVar2 = piVar2 + 1;
      piStack_100 = piStack_100 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

