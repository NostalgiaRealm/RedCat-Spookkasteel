/*
 * FUN_0056eb90 at 0056eb90
 * undefined FUN_0056eb90(void)
 * Address ranges: 0056eb90-0056eee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0056eb90(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  int *piStack_144;
  undefined1 uStack_12d;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_fc [2];
  undefined1 auStack_f4 [32];
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  int iStack_c8;
  undefined4 uStack_8c;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  char cStack_5c;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640e7f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piStack_144 = param_1;
  FUN_004042e0();
  FUN_00565c30();
  piStack_144 = local_fc;
  local_4 = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
  uStack_118 = *puVar2;
  uStack_114 = puVar2[1];
  iStack_10c = param_1[99];
  uStack_110 = puVar2[2];
  iStack_108 = param_1[100];
  iStack_104 = param_1[0x65];
  fVar9 = (float10)FUN_005b2f20();
  uStack_128 = (double)fVar9;
  if ((float10)0.0 < fVar9) {
    FUN_005b3020(0x489c4000,auStack_f4);
    uStack_d3 = 1;
    uStack_d2 = 1;
    uStack_d1 = 0;
    uStack_d0 = 1;
    uStack_cf = 0;
    uStack_d4 = 0;
    uStack_ce = 0;
    uStack_8c = 0x3f23d70a;
    FUN_00565e10(&uStack_118,auStack_f4);
    if (cStack_5c != '\0') {
      FUN_005b2fe0();
      param_1[0x54] = iStack_4c;
      param_1[0x55] = iStack_48;
      param_1[0x56] = iStack_44;
      param_1[0x57] = iStack_6c;
      param_1[0x58] = iStack_68;
      param_1[0x59] = iStack_64;
      fVar10 = (float10)FUN_005b2fd0();
      iVar3 = FUN_00518630();
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == -0x80000000) {
        iVar4 = FUN_0060af10();
        *(int *)(iVar3 + 100) = iVar4;
      }
      if (iVar4 != 0) {
        uVar5 = FUN_005ae390(&uStack_128,s_SpriteParticle__distance__f__spe_006a461c,
                             (double)(float)fVar10,(undefined4)uStack_128,uStack_128._4_4_,
                             (double)(float)(fVar10 / (float10)(float)fVar9));
        puStack_8._0_1_ = 2;
        FUN_005aff00(uVar5);
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_004040a0();
      }
      iVar4 = __ftol();
      if ((iVar4 != -1) && (iVar4 < 0)) {
        uStack_12d = (undefined1)((uint)&piStack_144 >> 0x18);
        uStack_128 = (double)CONCAT71(uStack_128._1_7_,uStack_12d);
        FUN_004040a0();
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        puStack_8._0_1_ = 3;
        pcVar6 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                      s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,&uStack_128);
        (*pcVar6)();
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_004040a0();
      }
      param_1[0x5a] = iVar4;
      param_1[0x5b] = -1;
      param_1[0x5c] = 0x3f800000;
      *(undefined1 *)(param_1 + 0x5d) = 1;
      goto LAB_0056ee48;
    }
  }
  param_1[0x5a] = -1;
  param_1[0x5b] = -1;
  param_1[0x5c] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5d) = 1;
LAB_0056ee48:
  puStack_8 = (undefined1 *)0x7;
  FUN_00587d50(uStack_1c,uStack_18);
  FUN_005fe5f0();
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  puStack_8._0_1_ = 6;
  FUN_00514430();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
  if (iStack_c8 != 0) {
    FUN_004098d0();
    iStack_c8 = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_10;
  return;
}

