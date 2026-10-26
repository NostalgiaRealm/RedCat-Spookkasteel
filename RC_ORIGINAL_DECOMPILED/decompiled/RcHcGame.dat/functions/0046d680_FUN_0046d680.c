/*
 * FUN_0046d680 at 0046d680
 * undefined FUN_0046d680(void)
 * Address ranges: 0046d680-0046da12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046d680(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float *pfStack_154;
  float *pfStack_150;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_11c [2];
  undefined4 *puStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100 [8];
  undefined1 *puStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  int iStack_d0;
  undefined4 uStack_98;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00627fc6;
  local_c = ExceptionList;
  if (*(int **)(param_1 + 0x194) == (int *)0x0) {
    pfStack_150 = (float *)0x46d6b3;
    ExceptionList = &local_c;
    FUN_0046da90();
  }
  else {
    pfStack_150 = (float *)local_100;
    pfStack_154 = (float *)0x46d6c2;
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x194) + 0x48))();
    *(undefined4 *)(param_1 + 0x1a4) = *puVar2;
    *(undefined4 *)(param_1 + 0x1a8) = puVar2[1];
    *(undefined4 *)(param_1 + 0x1ac) = puVar2[2];
    pfStack_154 = *(float **)(param_1 + 0x18c);
    puStack_f8 = (undefined1 *)&pfStack_154;
    puStack_114 = pfStack_154;
    FUN_004042e0(&pfStack_154);
    FUN_00565c30();
    uStack_98 = 0x3fa66666;
    uStack_df = 1;
    uStack_de = 1;
    uStack_dd = 0;
    uStack_dc = 1;
    uStack_db = 0;
    uStack_e0 = 1;
    uStack_da = 0;
    pfStack_154 = (float *)&uStack_104;
    puStack_8 = (undefined1 *)0x0;
    pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x194) + 0x48))();
    fStack_124 = *pfVar3;
    fStack_120 = pfVar3[1] + 10.0;
    afStack_11c[0] = pfVar3[2];
    pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x194) + 0x48))(&uStack_108);
    fStack_140 = *pfVar3;
    pfStack_150 = &fStack_140;
    pfStack_154 = afStack_11c;
    fStack_13c = pfVar3[1] - 10000.0;
    fStack_138 = pfVar3[2];
    cVar1 = FUN_00565e10();
    if (cVar1 == '\0') {
      pfStack_150 = (float *)auStack_18;
      pfStack_154 = (float *)0x46d802;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x194) + 0x48))();
      fStack_13c = *(float *)(iVar4 + 4) - 5.0;
      uStack_108 = 0x3f800000;
    }
    else {
      fStack_140 = fStack_54;
      fStack_13c = fStack_50;
      fStack_138 = fStack_4c;
      uStack_10c = uStack_74;
      uStack_108 = uStack_70;
      uStack_104 = uStack_6c;
    }
    pfStack_150 = &fStack_134;
    pfStack_154 = &fStack_128;
    FUN_00477d50(&uStack_10c);
    pfStack_150 = (float *)uStack_110;
    pfStack_154 = (float *)0x46d83f;
    FUN_005b2fa0();
    pfStack_150 = (float *)uStack_110;
    pfStack_154 = (float *)0x46d84d;
    FUN_005b2fa0();
    *(float *)(param_1 + 0xfc) = ((fStack_140 + -0.5) - fStack_128) + fStack_134;
    *(float *)(param_1 + 0x100) = ((fStack_13c + 0.5) - fStack_124) + fStack_130;
    *(float *)(param_1 + 0x104) = ((fStack_138 + 0.0) - fStack_120) + fStack_12c;
    *(float *)(param_1 + 0x120) = fStack_134 + fStack_128 + fStack_140 + 0.5;
    *(float *)(param_1 + 0x124) = fStack_130 + fStack_124 + 0.5 + fStack_13c;
    *(float *)(param_1 + 0x128) = fStack_12c + fStack_120 + fStack_138 + 0.0;
    *(float *)(param_1 + 0x144) = (fStack_128 + fStack_140 + 0.5) - fStack_134;
    *(float *)(param_1 + 0x148) = (fStack_124 + -0.5 + fStack_13c) - fStack_130;
    *(float *)(param_1 + 0x14c) = (fStack_120 + fStack_138 + 0.0) - fStack_12c;
    *(float *)(param_1 + 0x168) = ((fStack_140 + -0.5) - fStack_128) - fStack_134;
    *(float *)(param_1 + 0x16c) = ((fStack_13c + -0.5) - fStack_124) - fStack_130;
    *(float *)(param_1 + 0x170) = ((fStack_138 + 0.0) - fStack_120) - fStack_12c;
    uStack_4 = 1;
    pfStack_150 = (float *)uStack_24;
    pfStack_154 = (float *)0x46d985;
    FUN_005fe5f0();
    uStack_24 = 0;
    pfStack_154 = (float *)puStack_34;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_005fe5f0();
    puStack_34 = (undefined4 *)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
    if (iStack_d0 != 0) {
      iVar4 = *(int *)(iStack_d0 + 0x14) + -1;
      *(int *)(iStack_d0 + 0x14) = iVar4;
      if (iVar4 == 0) {
        pfStack_150 = (float *)0x0;
        pfStack_154 = (float *)0x46d9e1;
        FUN_005abfc0();
      }
      iStack_d0 = 0;
    }
    uStack_4 = 0xffffffff;
    pfStack_150 = (float *)0x46d9f9;
    FUN_005ab4d0();
  }
  ExceptionList = local_c;
  return;
}

