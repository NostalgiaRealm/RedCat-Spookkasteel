/*
 * FUN_00587e80 at 00587e80
 * undefined FUN_00587e80(void)
 * Address ranges: 00587e80-005882d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00587e80(undefined4 *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  float fVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642ddf;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_0060a4a0();
  fVar9 = (float)(iVar4 % 10000) * 0.0002 - 1.0;
  iVar4 = FUN_0060a4a0();
  fVar1 = (float)(iVar4 % 10000) * 0.0002 - 1.0;
  iVar4 = FUN_0060a4a0();
  fVar2 = (float)(iVar4 % 10000) * 0.0002 - 1.0;
  FUN_005b2f20();
  iVar4 = FUN_0060a4a0();
  FUN_005b2fa0((float)(iVar4 % 10000) * 0.004 + 60.0);
  if (param_3 != 0.0) {
    fVar12 = (float10)FUN_005b2e40();
    if (fVar12 < (float10)0.0) {
      FUN_005b2fa0(0xbf800000);
    }
  }
  puVar5 = operator_new(0x184);
  local_4._0_1_ = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = s_spark_00696fbc;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_spark_00696fbc,~uVar8 - 1);
    local_4._0_1_ = 2;
    uVar6 = FUN_005033a0(local_1c,local_2c);
    local_4._0_1_ = 3;
    FUN_00501cb0(uVar6);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    iVar4 = __ftol();
    param_3 = (float)iVar4 * 0.8;
    FUN_0060a4a0();
    uVar6 = __ftol();
    FUN_004041b0(uVar6);
    puVar5[0x4a] = *param_1;
    puVar5[0x4b] = param_1[1];
    puVar5[0x4c] = param_1[2];
    puVar5[0x4d] = *param_1;
    puVar5[0x4e] = param_1[1];
    puVar5[0x4f] = param_1[2];
    puVar5[0x50] = fVar9;
    puVar5[0x51] = fVar1;
    puVar5[0x52] = fVar2;
    puVar5[0x53] = fVar9;
    puVar5[0x54] = fVar1;
    *(undefined1 *)(puVar5 + 0x56) = 0;
    puVar5[0x55] = fVar2;
    DAT_006b9538 = DAT_006b9538 + 1;
    puVar5[0x57] = DAT_006b9538;
    *(undefined1 *)(puVar5 + 0x58) = 0;
    puVar5[0x59] = 0x3f800000;
    FUN_00457240(0);
    local_4._0_1_ = 7;
    FUN_00409810(&DAT_006b3f70,&param_3);
    puVar5[0x5f] = 0x3ea3d70a;
    puVar5[0x60] = 0x3ff5c28f;
    *puVar5 = &PTR_FUN_0064ec04;
    DAT_006b953c = DAT_006b953c + 1;
    local_4._0_1_ = 8;
    puVar5[0x42] = 0x437a0000;
    puVar5[0x43] = 0x43700000;
    puVar5[0x44] = 0x43340000;
    puVar5[0x45] = 0x437f0000;
    puVar5[0x46] = 0x43740000;
    puVar5[0x47] = 0x43550000;
    puVar5[0x48] = 0x42cc0000;
    puVar5[0x49] = 0x42700000;
    uVar6 = FUN_005a1d60();
    FUN_0040cc00(uVar6,0,0xffffffff);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004041b0(0xfa);
  puVar5[0x59] = 0x3f800000;
  FUN_004e4780(0x5a);
  FUN_00502350(1);
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    fVar9 = (float)(~uVar8 - 1);
    param_3 = fVar9;
    cVar3 = FUN_00401940(fVar9,1);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = (uint)fVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_28 = *puVar10;
        puVar10 = puVar10 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar8 = (uint)fVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(fVar9);
    }
    local_4._0_1_ = 9;
    pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar7)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_004f41c0(puVar5);
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

