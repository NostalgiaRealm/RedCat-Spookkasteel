/*
 * FUN_0045ae30 at 0045ae30
 * undefined FUN_0045ae30(void)
 * Address ranges: 0045ae30-0045b20a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045ae30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puStack_214;
  undefined4 *puStack_210;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0 [4];
  undefined4 uStack_1d0;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined1 local_1ae;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_170;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined4 uStack_98;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626f6d;
  pvStack_c = ExceptionList;
  puStack_210 = (undefined4 *)0x45ae5c;
  ExceptionList = &pvStack_c;
  puVar5 = (undefined4 *)FUN_00554a20();
  puVar7 = local_1e0;
  for (puStack_210 = (undefined4 *)0x6; puStack_210 != (undefined4 *)0x0;
      puStack_210 = (undefined4 *)((int)puStack_210 + -1)) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1f0 = (undefined1 *)&puStack_210;
  puStack_214 = &puStack_210;
  FUN_004042e0();
  puStack_214 = (undefined4 *)0x45ae81;
  FUN_00565c30();
  local_1b4 = 0;
  local_1b3 = 1;
  local_1b2 = 1;
  local_1b1 = 0;
  local_1b0 = 1;
  local_1af = 0;
  local_1ae = 0;
  puStack_210 = &local_1ec;
  local_4 = 0;
  puStack_214 = (undefined4 *)0x45aeb9;
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
  fVar1 = *pfVar6;
  puVar5 = (undefined4 *)(param_1 + 0x3b8);
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  uStack_190 = uStack_1e4;
  uStack_184 = local_1e0[2];
  uStack_18c = local_1e0[0];
  uStack_188 = local_1e0[1];
  uStack_180 = local_1e0[3];
  uStack_17c = uStack_1d0;
  puStack_214 = puVar5;
  cVar4 = FUN_00565e10(param_1 + 0x410);
  puStack_214 = extraout_ECX;
  if (cVar4 != '\0') {
    uStack_170 = 0x3c23d70a;
    puStack_214 = puVar5;
    cVar4 = FUN_00565e10(&stack0xfffffe00);
    puStack_214 = extraout_ECX_00;
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x521) = 1;
      *puVar5 = uStack_130;
      *(undefined4 *)(param_1 + 0x3bc) = uStack_12c;
      *(undefined4 **)(param_1 + 0x3c0) = puStack_128;
      puStack_214 = puStack_128;
    }
  }
  if (*(char *)(param_1 + 0x432) != '\0') {
    if (*(char *)(param_1 + 0x521) != '\0') {
      *(undefined4 *)(param_1 + 0x440) = *puVar5;
      *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x3bc);
      puStack_214 = *(undefined4 **)(param_1 + 0x3c0);
      *(undefined4 **)(param_1 + 0x448) = puStack_214;
    }
    if (*(char *)(param_1 + 0x432) != '\0') goto LAB_0045b138;
  }
  if ((*(char *)(param_1 + 0x431) == '\0') ||
     (((*(float *)(param_1 + 0x424) == fVar1 && (*(float *)(param_1 + 0x428) == fVar2)) &&
      (*(float *)(param_1 + 0x42c) == fVar3)))) {
    FUN_004042e0(&puStack_214);
    FUN_00565c30();
    uStack_e0 = 0;
    uStack_df = 1;
    uStack_de = 1;
    uStack_dd = 0;
    uStack_dc = 1;
    uStack_db = 0;
    uStack_da = 0;
    puStack_214 = auStack_1c;
    puStack_8._0_1_ = 1;
    puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
    local_1f0 = (undefined1 *)*puVar7;
    local_1ec = puVar7[1];
    uStack_1e8 = puVar7[2];
    uStack_98 = 0x3c23d70a;
    puStack_214 = puVar5;
    cVar4 = FUN_00565e10(&local_1f0);
    if (cVar4 != '\0') {
      *puVar5 = uStack_58;
      *(undefined4 *)(param_1 + 0x3bc) = uStack_54;
      *(undefined4 *)(param_1 + 0x3c0) = uStack_50;
    }
    puStack_8._0_1_ = 3;
    puStack_214 = puStack_28;
    FUN_005fe5f0();
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    puStack_214 = puStack_34;
    FUN_00587d50(puStack_38);
    puStack_214 = puStack_38;
    FUN_005fe5f0();
    puStack_38 = (undefined4 *)0x0;
    puStack_34 = (undefined4 *)0x0;
    uStack_30 = 0;
    puStack_8._0_1_ = 2;
    puStack_214 = (undefined4 *)0x45b125;
    FUN_0057d310();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    puStack_214 = (undefined4 *)0x45b138;
    FUN_005ab4d0();
  }
LAB_0045b138:
  puStack_214 = puStack_fc;
  puStack_8 = (undefined1 *)0x6;
  FUN_00587d50(puStack_100);
  puStack_214 = puStack_100;
  FUN_005fe5f0();
  puStack_100 = (undefined4 *)0x0;
  puStack_fc = (undefined4 *)0x0;
  uStack_f8 = 0;
  puStack_214 = puStack_10c;
  puStack_8._0_1_ = 5;
  FUN_00587d50(puStack_110);
  puStack_214 = puStack_110;
  FUN_005fe5f0();
  puStack_110 = (undefined4 *)0x0;
  puStack_10c = (undefined4 *)0x0;
  uStack_108 = 0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
  puStack_214 = (undefined4 *)0x45b1de;
  FUN_0057d310();
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_214 = (undefined4 *)0x45b1f2;
  FUN_005ab4d0();
  ExceptionList = pvStack_10;
  return;
}

