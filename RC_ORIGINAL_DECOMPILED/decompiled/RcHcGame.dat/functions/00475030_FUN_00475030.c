/*
 * FUN_00475030 at 00475030
 * undefined FUN_00475030(void)
 * Address ranges: 00475030-00475644
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00475030(undefined4 *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  undefined4 *puStack_160;
  int local_14c;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  int local_c4;
  undefined4 local_88;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puStack_160 = param_1;
  FUN_004042e0(&puStack_160);
  FUN_00565c30();
  puVar3 = (undefined4 *)param_1[0x3e];
  local_88 = 0x40000000;
  local_cf = 1;
  local_ce = 1;
  local_cd = 0;
  local_cc = 1;
  local_cb = 0;
  local_d0 = 0;
  local_ca = 0;
  local_f0 = *puVar3;
  puVar5 = param_1 + 0x525c;
  local_ec = puVar3[1];
  local_4 = 0;
  local_e8 = puVar3[2];
  *puVar5 = *puVar3;
  param_1[0x525d] = puVar3[1];
  puVar1 = param_1 + 0x525f;
  param_1[0x525e] = puVar3[2];
  *puVar1 = *puVar3;
  param_1[0x5260] = puVar3[1];
  uVar4 = puVar3[2];
  param_1[0x525d] = (float)param_1[0x525d] + 10000.0;
  param_1[0x5261] = uVar4;
  param_1[0x5260] = (float)param_1[0x5260] - 10000.0;
  puStack_160 = puVar5;
  cVar17 = FUN_00565e10(&local_f0);
  if (cVar17 == '\0') {
    param_1[0x525d] = *(float *)(param_1[0x3e] + 4) + 200.0;
  }
  else {
    *puVar5 = local_54;
    param_1[0x525d] = local_50;
    param_1[0x525e] = local_4c;
  }
  puStack_160 = puVar1;
  cVar17 = FUN_00565e10(&local_f0);
  if (cVar17 == '\0') {
    fVar2 = *(float *)(param_1[0x3e] + 4);
    param_1[0x5263] = 0x3f800000;
    param_1[0x5260] = fVar2 + 200.0;
  }
  else {
    *puVar1 = local_54;
    param_1[0x5260] = local_50;
    param_1[0x5261] = local_4c;
    param_1[0x5262] = local_68;
    param_1[0x5263] = local_64;
    param_1[0x5264] = local_60;
  }
  *(undefined1 *)(param_1 + 0x5205) = 1;
  param_1[0x51fc] = *puVar1;
  param_1[0x51fd] = param_1[0x5260];
  param_1[0x51fe] = param_1[0x5261];
  param_1[0x5206] = (float)param_1[0x5260] + 75.0;
  param_1[0x51ff] = *puVar5;
  param_1[0x5200] = param_1[0x525d];
  param_1[0x5201] = param_1[0x525e];
  param_1[0x5202] = *puVar5;
  param_1[0x5203] = param_1[0x525d];
  param_1[0x5204] = param_1[0x525e];
  puVar5 = (undefined4 *)param_1[0x3e];
  uVar4 = *puVar5;
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[6];
  uVar9 = puVar5[2];
  uVar10 = puVar5[1];
  uVar11 = puVar5[2];
  puStack_160 = (undefined4 *)0x4752b3;
  FUN_00475650();
  uVar14 = DAT_006b868c;
  uVar13 = DAT_006b8688;
  uVar12 = param_1[0x5215];
  puVar5 = param_1 + 0x5068;
  local_14c = 0xfa;
  do {
    puStack_160 = (undefined4 *)0x3f800000;
    FUN_0047db60(uVar6,uVar7,uVar9,0,0,0,0x40400000,0,puVar5,1,1,0,0x3f800000,0,0x42c80000,0,uVar14,
                 uVar13,0,uVar12,uVar12,uVar12,1,1,uVar8,0x41f00000,0x41f00000,0x40b00000,2,uVar4,
                 uVar10,uVar11,0x3fc90fdb,0,0);
    puStack_160 = (undefined4 *)0x1;
    FUN_0047ea70(puVar5);
    uVar16 = DAT_006b86a0;
    uVar15 = DAT_006b869c;
    local_14c = local_14c + -1;
  } while (local_14c != 0);
  uVar6 = param_1[0x525c];
  uVar7 = param_1[0x525d];
  uVar8 = param_1[0x525e];
  local_14c = 0;
  do {
    puStack_160 = (undefined4 *)((float)local_14c * 1.2566371);
    FUN_0047db60(uVar6,uVar7,uVar8,0,0,0,uVar15,0,puVar5,1,2,0,0x3f800000,0,0x42c80000,0,uVar14,0,0,
                 uVar12,uVar12,uVar12,1,1,uVar16,0x42c80000,0x41200000,0xc0f00000,2,uVar4,uVar10,
                 uVar11,0x3fc90fdb,0,0);
    local_14c = local_14c + 1;
  } while (local_14c < 5);
  local_4 = 1;
  puStack_160 = local_18;
  FUN_005fe5f0();
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_005fe5f0(local_28);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_c4 != 0) {
    iVar18 = *(int *)(local_c4 + 0x14) + -1;
    *(int *)(local_c4 + 0x14) = iVar18;
    if (iVar18 == 0) {
      puStack_160 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    local_c4 = 0;
  }
  local_4 = 0xffffffff;
  puStack_160 = (undefined4 *)0x47562c;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

