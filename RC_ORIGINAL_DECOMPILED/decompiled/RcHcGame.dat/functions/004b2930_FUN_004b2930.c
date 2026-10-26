/*
 * FUN_004b2930 at 004b2930
 * undefined FUN_004b2930(void)
 * Address ranges: 004b2930-004b2b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004b2930(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e941;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ad7d0(param_2);
  puVar1 = param_3;
  *(undefined1 *)(param_1 + 0x14) = *param_3;
  local_4 = 0;
  FUN_004040a0(0);
  FUN_0040cc00(puVar1,0,0xffffffff);
  param_1[0x18] = 1000;
  param_1[0x19] = 0x5dc;
  param_1[0x1a] = 0x3c23d70a;
  param_1[0x1b] = 0x3ca3d70a;
  param_1[0x1c] = 0x42c80000;
  param_1[0x1d] = 0x42c80000;
  param_1[0x20] = 0x411ccccd;
  param_1[0x21] = 0x42c80000;
  param_1[0x22] = 0x43160000;
  param_1[0x23] = 1;
  param_1[0x24] = 1;
  param_1[0x2b] = 0;
  *param_1 = &PTR_FUN_0064eb4c;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    param_2._0_1_ = (undefined1)iVar3;
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_18 = *puVar9;
        puVar9 = puVar9 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  local_1c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  piVar5 = (int *)FUN_0050d730(&param_3,param_5);
  iVar3 = param_1[0x2b];
  local_4._0_1_ = 4;
  if (iVar3 != *piVar5) {
    if ((iVar3 != 0) &&
       (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
      FUN_005abfc0(0);
    }
    iVar3 = *piVar5;
    param_1[0x2b] = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((param_3 != (undefined1 *)0x0) &&
     (iVar3 = *(int *)(param_3 + 0x14), *(int *)(param_3 + 0x14) = iVar3 + -1, iVar3 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  param_1[0x25] = *param_4;
  param_1[0x26] = param_4[1];
  param_1[0x27] = param_4[2];
  param_1[0x28] = *param_6;
  param_1[0x29] = param_6[1];
  param_1[0x2a] = param_6[2];
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

