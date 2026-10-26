/*
 * FUN_005603d0 at 005603d0
 * undefined FUN_005603d0(void)
 * Address ranges: 005603d0-005605fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_005603d0(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_131;
  float fStack_130;
  undefined1 local_12c [4];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_11c [4];
  undefined4 *puStack_118;
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f9e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x125) == '\0') {
    uVar3 = 0xffffffff;
    local_128 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = 0;
    local_120 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x51d,local_12c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_128 != 0) {
      cVar1 = *(char *)(local_128 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_128 + -1) = cVar1 + -1;
      }
    }
  }
  if (0.0 <= param_2) {
    if (10.0 < param_2) {
      param_2 = 10.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  puVar6 = auStack_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_0069081c,(double)param_2);
  FUN_005acdb0();
  if (*(float *)(param_1 + 0x188) == 0.0) {
    fVar8 = (float10)FUN_005ad390(param_1 + 0x13c,&local_131);
    *(float *)(param_1 + 0x188) = (float)fVar8;
    fStack_130 = (float)fVar8;
  }
  else {
    fStack_130 = *(float *)(param_1 + 0x188);
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    auStack_11c[0] = local_131;
    FUN_004040a0();
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puStack_118 = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_118 = puStack_118 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puStack_118 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puStack_118 = (undefined4 *)((int)puStack_118 + 1);
      }
      FUN_00404190();
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  auStack_11c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  iVar4 = FUN_005bb580(*(undefined4 *)(param_1 + 0x100),fStack_130);
  ExceptionList = pvStack_c;
  return iVar4 != 0;
}

