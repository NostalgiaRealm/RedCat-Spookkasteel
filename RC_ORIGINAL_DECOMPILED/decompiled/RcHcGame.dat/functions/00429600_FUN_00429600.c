/*
 * FUN_00429600 at 00429600
 * undefined FUN_00429600(void)
 * Address ranges: 00429600-004298b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * __thiscall FUN_00429600(int param_1,float *param_2,float *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined8 uStack_b0;
  undefined1 local_95;
  undefined1 *puStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [4];
  undefined4 *local_74;
  uint local_70;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_38 [12];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622ea8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x18) == 0) {
    uStack_b0 = 2.15602293388222e-317;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uStack_b0 = (double)CONCAT44(1,uVar5);
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_74;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_74 + uVar5) = 0;
      local_70 = uVar5;
    }
    local_4 = 0;
    uStack_b0 = (double)CONCAT44(local_78,0x25f);
    pcVar2 = (code *)FUN_005a07f0(s_TestSubLevel___0068fe5c,
                                  s_D__Work_RCHorror_RCSource_RcMovi_0068fda8);
    (*pcVar2)();
    local_4 = 0xffffffff;
    uStack_b0 = 2.12415187960989e-314;
    FUN_004040a0();
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    uStack_b0 = (double)CONCAT44(0x4296d3,(undefined4)uStack_b0);
    iVar3 = FUN_004bc480();
  }
  if (*(float *)(iVar3 + 0x478) == 0.0) {
    uStack_b0 = (double)CONCAT44(&local_95,iVar3 + 0x42c);
    fVar10 = (float10)FUN_005ad390();
    *(float *)(iVar3 + 0x478) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar3 + 0x478);
  }
  fStack_84 = *param_3;
  fStack_90 = *param_3;
  fStack_7c = param_3[2];
  fStack_8c = param_3[1] - 1.0;
  fStack_88 = param_3[2];
  fStack_80 = (float)(fVar10 * (float10)100.0 + (float10)param_3[1]);
  uStack_b0 = (double)CONCAT44(0x429760,(undefined4)uStack_b0);
  iVar3 = FUN_004282e0();
  puStack_94 = (undefined1 *)&uStack_b0;
  uStack_b0 = (double)CONCAT44(iVar3 + 0x11c,extraout_ECX);
  FUN_004042e0();
  FUN_005545f0();
  local_4 = 1;
  uStack_b0 = (double)CONCAT44(0x429790,(undefined4)uStack_b0);
  iVar3 = FUN_004282e0();
  puStack_94 = (undefined1 *)
               (CONCAT31(puStack_94._1_3_,(char)(*(uint *)(iVar3 + 0x14c) >> 3)) & 0xffffff01);
  uStack_b0._4_4_ = 0;
  uStack_b0._0_4_ = 0x4297aa;
  FUN_004282e0();
  uStack_b0 = (double)CONCAT44(uStack_b0._4_4_,0x4297b1);
  FUN_0049df30();
  uStack_b0 = (double)(ZEXT48(auStack_38) << 0x20);
  cVar1 = FUN_00554ab0(&fStack_90,&fStack_84);
  uStack_b0._4_4_ = (uint)puStack_94;
  uStack_b0._0_4_ = 0x4297d8;
  FUN_004282e0();
  uStack_b0 = (double)CONCAT44(uStack_b0._4_4_,0x4297df);
  FUN_0049df30();
  if (cVar1 == '\0') {
    uStack_b0 = (double)param_3[2];
    uVar4 = FUN_005ae390(auStack_68,s_Actor_can_t_find_the_ceiling_nea_0068fe28,(double)*param_3,
                         (double)param_3[1]);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005aff20(s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x288,uVar4);
    if (iStack_64 != 0) {
      cVar1 = *(char *)(iStack_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        uStack_b0 = (double)CONCAT44((char *)(iStack_64 + -1),0x42985d);
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_64 + -1) = cVar1 + -1;
      }
    }
    fStack_2c = *param_3;
    fStack_28 = param_3[1];
    fStack_24 = param_3[2];
    iStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
  }
  local_4 = 0xffffffff;
  *param_2 = fStack_2c;
  param_2[1] = fStack_28;
  param_2[2] = fStack_24;
  uStack_b0 = (double)CONCAT44(0x429899,(undefined4)uStack_b0);
  FUN_00554630();
  ExceptionList = pvStack_c;
  return param_2;
}

