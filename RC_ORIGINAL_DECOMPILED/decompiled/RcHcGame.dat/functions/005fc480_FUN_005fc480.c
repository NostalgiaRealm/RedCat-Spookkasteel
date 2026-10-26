/*
 * FUN_005fc480 at 005fc480
 * undefined FUN_005fc480(void)
 * Address ranges: 005fc480-005fcb8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered UNOP 26-case table from original bytes at 005fcb90. Analysis-only switch override; no binary bytes changed. 0 -> 005fc4b4, 1 -> 005fc4ec, 2 -> 005fc509, 3 -> 005fc511, 4 -> 005fc579, 5 -> 005fc5ec, 6 -> 005fc621, 7 -> 005fc678, 8 -> 005fc6cf, 9 -> 005fc71c, 10 -> 005fc74c, 11 -> 005fc6ea, 12 -> 005fc814, 13 -> 005fc847, 14 -> 005fc87a, 15 -> 005fc77c, 16 -> 005fc7af, 17 -> 005fc7e2, 18 -> 005fc8ad, 19 -> 005fc8e1, 20 -> 005fc902, 21 -> 005fc90c, 22 -> 005fc965, 23 -> 005fcafa, 24 -> 005fca59, 25 -> 005fc9cd
 */

/* Recovered UNOP 26-case table from original bytes at 005fcb90. Analysis-only switch override; no
   binary bytes changed. 0 -> 005fc4b4, 1 -> 005fc4ec, 2 -> 005fc509, 3 -> 005fc511, 4 -> 005fc579,
   5 -> 005fc5ec, 6 -> 005fc621, 7 -> 005fc678, 8 -> 005fc6cf, 9 -> 005fc71c, 10 -> 005fc74c, 11 ->
   005fc6ea, 12 -> 005fc814, 13 -> 005fc847, 14 -> 005fc87a, 15 -> 005fc77c, 16 -> 005fc7af, 17 ->
   005fc7e2, 18 -> 005fc8ad, 19 -> 005fc8e1, 20 -> 005fc902, 21 -> 005fc90c, 22 -> 005fc965, 23 ->
   005fcafa, 24 -> 005fca59, 25 -> 005fc9cd */

undefined4 * FUN_005fc480(undefined4 *param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 **ppuVar9;
  float10 fVar10;
  float10 fVar11;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined8 uStack_d4;
  undefined1 *local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  int iStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00648bae;
  pvStack_14 = ExceptionList;
  bVar3 = false;
  local_c0 = (undefined1 *)0x0;
                    /* WARNING: Switch is manually overridden */
  switch(param_2) {
  case 0:
    if (*(int *)(param_3 + 8) == 2) {
      uStack_d4 = (double)CONCAT44(-*(int *)(param_3 + 0x10),0x5fc4cd);
      ExceptionList = &pvStack_14;
      FUN_005f4290();
      goto LAB_005fc604;
    }
    fVar10 = -(float10)*(double *)(param_3 + 0x10);
    break;
  case 1:
    uStack_d4 = (double)CONCAT44((uint)(*(int *)(param_3 + 0x10) == 0),0x5fc504);
    ExceptionList = &pvStack_14;
    FUN_005f4290();
    goto LAB_005fc604;
  case 2:
    fVar10 = (float10)*(int *)(param_3 + 0x10);
    break;
  case 3:
    puStack_d8 = auStack_34;
    uStack_d4 = (double)CONCAT44(*(undefined4 *)(param_3 + 0x10),&DAT_00690818);
    puStack_dc = (undefined1 *)0x5fc52a;
    ExceptionList = &pvStack_14;
    uVar7 = FUN_005e7110();
    uStack_c = 0;
    uStack_d4 = (double)CONCAT44(uVar7,0x5fc543);
    FUN_005e2be0();
    *param_1 = &PTR_FUN_00650ad4;
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509676928811e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 4:
    local_c0 = *(undefined1 **)(param_3 + 0x10);
    uStack_bc = *(undefined4 *)(param_3 + 0x14);
    uStack_d4 = *(double *)(param_3 + 0x10);
    puStack_dc = auStack_54;
    puStack_d8 = &DAT_006b1798;
    ExceptionList = &pvStack_14;
    uVar7 = FUN_005e7110();
    uStack_c = 1;
    uStack_d4 = (double)CONCAT44(uVar7,0x5fc5b9);
    FUN_005e2be0();
    *param_1 = &PTR_FUN_00650ad4;
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509682610566e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 5:
    ExceptionList = &pvStack_14;
    param_1[2] = 2;
    goto LAB_005fc5fc;
  case 6:
    uStack_d4 = (double)CONCAT44(auStack_74,0x5fc62e);
    ExceptionList = &pvStack_14;
    iVar5 = FUN_0045da10();
    puVar4 = *(undefined1 **)(iVar5 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uStack_d4 = (double)CONCAT44(puVar4,0x5fc640);
    uVar7 = FUN_0060af10();
    param_1[2] = 2;
    param_1[4] = uVar7;
    *param_1 = &PTR_FUN_00650ad4;
    uStack_d4 = 2.12509689527485e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 7:
    uStack_d4 = (double)CONCAT44(auStack_a4,0x5fc685);
    ExceptionList = &pvStack_14;
    iVar5 = FUN_0045da10();
    puVar4 = *(undefined1 **)(iVar5 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uStack_d4 = (double)CONCAT44(puVar4,0x5fc697);
    fVar10 = (float10)FUN_0060ea4c();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    uStack_d4 = 2.12509693825856e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 8:
    ExceptionList = &pvStack_14;
    param_1[2] = 2;
LAB_005fc5fc:
    uStack_d4 = (double)CONCAT44(0x5fc601,(undefined4)uStack_d4);
    uVar7 = __ftol();
    param_1[4] = uVar7;
    goto LAB_005fc604;
  case 9:
    fVar10 = (float10)fsin((float10)*(double *)(param_3 + 0x10));
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    *(double *)(param_1 + 4) = (double)fVar10;
    return param_1;
  case 10:
    fVar10 = (float10)fcos((float10)*(double *)(param_3 + 0x10));
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    *(double *)(param_1 + 4) = (double)fVar10;
    return param_1;
  case 0xb:
    fVar10 = (float10)fptan((float10)*(double *)(param_3 + 0x10));
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    *(double *)(param_1 + 4) = (double)fVar10;
    return param_1;
  case 0xc:
    uStack_d4 = (double)CONCAT44(0x5fc81f,(undefined4)uStack_d4);
    ExceptionList = &pvStack_14;
    fVar10 = (float10)FUN_0060eab8();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    ExceptionList = pvStack_14;
    return param_1;
  case 0xd:
    uStack_d4 = (double)CONCAT44(0x5fc852,(undefined4)uStack_d4);
    ExceptionList = &pvStack_14;
    fVar10 = (float10)FUN_0060eac9();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    ExceptionList = pvStack_14;
    return param_1;
  case 0xe:
    uStack_d4 = (double)CONCAT44(0x5fc885,(undefined4)uStack_d4);
    ExceptionList = &pvStack_14;
    fVar10 = (float10)FUN_0060eac2();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    ExceptionList = pvStack_14;
    return param_1;
  case 0xf:
    uStack_d4 = (double)CONCAT44(0x5fc787,(undefined4)uStack_d4);
    ExceptionList = &pvStack_14;
    fVar10 = (float10)FUN_0060b110();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    ExceptionList = pvStack_14;
    return param_1;
  case 0x10:
    uStack_d4 = (double)CONCAT44(0x5fc7ba,(undefined4)uStack_d4);
    ExceptionList = &pvStack_14;
    fVar10 = (float10)FUN_0060dcd0();
    *(double *)(param_1 + 4) = (double)fVar10;
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    ExceptionList = pvStack_14;
    return param_1;
  case 0x11:
    dVar1 = *(double *)(param_3 + 0x10);
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    fVar10 = (float10)fpatan((float10)dVar1,(float10)1);
    *(double *)(param_1 + 4) = (double)fVar10;
    return param_1;
  case 0x12:
    dVar1 = *(double *)(param_3 + 0x10);
    fVar10 = (float10)0.3010299956639812;
    goto LAB_005fc8b5;
  case 0x13:
    fVar11 = (float10)1.4426950408889634 * (float10)*(double *)(param_3 + 0x10);
    fVar10 = ROUND(fVar11);
    fVar11 = (float10)f2xm1(fVar11 - fVar10);
    fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
    break;
  case 0x14:
    dVar1 = *(double *)(param_3 + 0x10);
    fVar10 = (float10)0.6931471805599453;
LAB_005fc8b5:
    fVar11 = (float10)log2((float10)dVar1);
    param_1[2] = 1;
    *param_1 = &PTR_FUN_00650ad4;
    *(double *)(param_1 + 4) = (double)(fVar10 * fVar11);
    return param_1;
  case 0x15:
    uStack_d4 = (double)CONCAT44(auStack_94,0x5fc919);
    ExceptionList = &pvStack_14;
    iVar5 = FUN_0045da10();
    uStack_c = 2;
    uStack_d4 = (double)CONCAT44(*(undefined4 *)(iVar5 + 8),0x5fc932);
    FUN_005f4290();
    *param_1 = &PTR_FUN_00650ad4;
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509726533002e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 0x16:
    local_c0 = (undefined1 *)&puStack_dc;
    ExceptionList = &pvStack_14;
    FUN_0045da10(&puStack_dc);
    uVar7 = FUN_005fcc00(auStack_84);
    uStack_c = 3;
    uStack_d4 = (double)CONCAT44(uVar7,0x5fc99a);
    FUN_005e2be0();
    *param_1 = &PTR_FUN_00650ad4;
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509731671285e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 0x17:
    local_c0 = (undefined1 *)&puStack_dc;
    ExceptionList = &pvStack_14;
    FUN_0045da10(&puStack_dc);
    uVar7 = FUN_005fccf0(auStack_24);
    uStack_c = 6;
    uStack_d4 = (double)CONCAT44(uVar7,0x5fcb32);
    FUN_005e2be0();
    *param_1 = &PTR_FUN_00650ad4;
    if (iStack_20 == 0) {
      ExceptionList = pvStack_14;
      return param_1;
    }
    cVar2 = *(char *)(iStack_20 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iStack_20 + -1) = cVar2 + -1;
      ExceptionList = pvStack_14;
      return param_1;
    }
    uStack_d4 = (double)CONCAT44((char *)(iStack_20 + -1),0x5fcb76);
    FUN_005fe5f0();
    ExceptionList = pvStack_14;
    return param_1;
  case 0x18:
    uStack_d4 = (double)CONCAT44(auStack_44,0x5fca6b);
    ExceptionList = &pvStack_14;
    iVar5 = FUN_0045da10();
    uStack_c = 5;
    if (*(int *)(iVar5 + 8) == 0) {
      uVar8 = 0;
    }
    else {
      uStack_d4 = (double)CONCAT44(auStack_64,0x5fca89);
      iVar5 = FUN_0045da10();
      pbVar6 = *(byte **)(iVar5 + 4);
      bVar3 = true;
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = &DAT_0064a3b4;
      }
      uVar8 = (uint)*pbVar6;
    }
    param_1[2] = 2;
    param_1[4] = uVar8;
    *param_1 = &PTR_FUN_00650ad4;
    if (bVar3) {
      uStack_d4 = 2.12509745307497e-314;
      FUN_004040a0();
    }
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509746542661e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  case 0x19:
    auStack_b4[0] = (undefined1)*(uint *)(param_3 + 0x10);
    local_c0 = (undefined1 *)(*(uint *)(param_3 + 0x10) & 0xff);
    uStack_d4 = 3.1015539093177e-317;
    ExceptionList = &pvStack_14;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    ppuVar9 = &local_c0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *(char *)ppuVar9;
      ppuVar9 = (undefined1 **)((int)ppuVar9 + 1);
    } while (cVar2 != '\0');
    uStack_d4 = (double)CONCAT44(~uVar8 - 1,&local_c0);
    puStack_d8 = (undefined1 *)0x5fca0c;
    FUN_004040f0();
    uStack_c = 4;
    uStack_d4 = (double)CONCAT44(auStack_b4,0x5fca26);
    FUN_005e2be0();
    *param_1 = &PTR_FUN_00650ad4;
    uStack_c = 0xffffffff;
    uStack_d4 = 2.12509738588204e-314;
    FUN_004040a0();
    ExceptionList = pvStack_14;
    return param_1;
  }
  uStack_d4 = (double)fVar10;
  puStack_d8 = (undefined1 *)0x5fc4e7;
  ExceptionList = &pvStack_14;
  FUN_005f4270();
LAB_005fc604:
  *param_1 = &PTR_FUN_00650ad4;
  ExceptionList = pvStack_14;
  return param_1;
}

