/*
 * FUN_004b97f0 at 004b97f0
 * undefined FUN_004b97f0(void)
 * Address ranges: 004b97f0-004b9948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004b97f0(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f2d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  uVar3 = 0xffffffff;
  local_4 = 0;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar5 = param_1[4];
  uVar4 = ~uVar3 - 1;
  uVar3 = uVar4;
  if (uVar5 < uVar4) {
    uVar3 = uVar5;
  }
  bVar12 = false;
  iVar6 = 0;
  bVar13 = true;
  pbVar7 = (byte *)param_1[3];
  pbVar9 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar12 = *pbVar7 < *pbVar9;
    bVar13 = *pbVar7 == *pbVar9;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  } while (bVar13);
  if (!bVar13) {
    iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  if (((iVar6 == 0) && (uVar4 <= uVar5)) && (uVar5 == uVar4)) {
    param_2._0_1_ = (undefined1)uVar4;
    local_1c[0] = param_2._0_1_;
    uVar3 = 0xffffffff;
    local_18 = (undefined4 *)0x0;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_18;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar2 = (code *)FUN_005a07f0(s_m_TextureName_______00697294,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697304,10,local_1c);
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
  }
  ExceptionList = local_c;
  return param_1;
}

