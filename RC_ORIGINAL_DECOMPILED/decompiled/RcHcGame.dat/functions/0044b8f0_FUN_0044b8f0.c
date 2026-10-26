/*
 * FUN_0044b8f0 at 0044b8f0
 * undefined FUN_0044b8f0(void)
 * Address ranges: 0044b8f0-0044bc50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0044b8f0(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = PTR_DAT_00691504;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625788;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_006b6d78 & 1) == 0) {
    DAT_006b6d78 = DAT_006b6d78 | 1;
    DAT_006b6cc8 = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_s_RcEnemyShot_00691508;
    DAT_006b6cd8 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_DAT_0069150c;
    DAT_006b6ce8 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_s_RcJesterBall_00691510;
    DAT_006b6cf8 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar7 = (undefined4 *)PTR_DAT_00691514;
    DAT_006b6d08 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = (char *)puVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar3 = FUN_00401940(uVar5,1);
    if (cVar3 != '\0') {
      puVar8 = DAT_006b6d0c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
    }
    puVar2 = PTR_s_RcMushRoom_00691518;
    DAT_006b6d18 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_DAT_0069151c;
    DAT_006b6d28 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_s_RcPowerShot_00691520;
    DAT_006b6d38 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_DAT_00691524;
    DAT_006b6d48 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_DAT_00691528;
    DAT_006b6d58 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    puVar2 = PTR_s_RcSuperShot_00691533_1_0069152c;
    DAT_006b6d68 = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = puVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(puVar2,~uVar5 - 1);
    FUN_0060a57b(&LAB_0044bc60);
  }
  iVar1 = param_2 + -1;
  if ((iVar1 < 0) || (10 < iVar1)) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = s_unknown_projectile_type_0069165c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_unknown_projectile_type_0069165c,~uVar5 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_index_>__0____index_<_PROJECTILE_00691630,
                                  s_D__Work_RCHorror_RCSource_RcWeap_006915fc,0xd1,local_1c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *param_1 = (&DAT_006b6cc8)[iVar1 * 0x10];
  FUN_004040a0(0);
  FUN_0040cc00(&DAT_006b6cc8 + iVar1 * 0x10,0,0xffffffff);
  ExceptionList = pvStack_c;
  return param_1;
}

