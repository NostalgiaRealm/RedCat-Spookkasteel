/*
 * FUN_00563570 at 00563570
 * undefined FUN_00563570(void)
 * Address ranges: 00563570-005637a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_00563570(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 local_21;
  float fStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fd60;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_1c[0] = (undefined1)param_1;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Camera_IsNotNull___006a3758,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x754,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(float *)(param_1 + 0x180) == 0.0) {
    fVar9 = (float10)FUN_005ad390(param_1 + 0x134,&local_21);
    *(float *)(param_1 + 0x180) = (float)fVar9;
    fStack_20 = (float)fVar9;
  }
  else {
    fStack_20 = *(float *)(param_1 + 0x180);
  }
  if (fStack_20 == 0.0) {
    local_1c[0] = (undefined1)param_1;
    uVar4 = 0xffffffff;
    local_18 = (undefined4 *)0x0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = CONCAT31(local_4._1_3_,3);
    pcVar2 = (code *)FUN_005a07f0(s_zScale____0_0f_006a3748,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x756,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    uStack_10 = 0;
  }
  fVar9 = (float10)fStack_20 * (float10)param_2;
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
    fVar9 = (float10)(float)fVar9;
  }
  ExceptionList = pvStack_c;
  return fVar9;
}

