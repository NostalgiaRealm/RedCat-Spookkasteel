/*
 * FUN_0046a920 at 0046a920
 * undefined FUN_0046a920(void)
 * Address ranges: 0046a920-0046acd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0046abb2) */
/* WARNING: Removing unreachable block (ram,0x0046abc5) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 * __thiscall FUN_0046a920(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627c2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  local_4 = 0;
  param_1[0x3e] = param_3;
  FUN_0060b1db(param_1 + 0x203,0x18,1,&LAB_0046ada0,FUN_0046ace0);
  param_1[0x209] = 0xffffffff;
  param_1[0x20a] = 0xffffffff;
  param_1[0x20b] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  param_1[0x20d] = 0xffffffff;
  param_1[0x20e] = 0xffffffff;
  param_1[0x20f] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x210) = 1;
  param_1[0x213] = 0x3f800000;
  local_4._0_1_ = 1;
  param_1[0x211] = 0xffffffff;
  param_1[0x212] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x214) = 1;
  FUN_0047d9b0();
  param_1[0x266] = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined1 *)((int)param_1 + 0x9c1) = 0;
  *(undefined1 *)((int)param_1 + 0x9c2) = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x279] = 0;
  *(undefined1 *)(param_1 + 0x27a) = 1;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  *(undefined1 *)(param_1 + 0x27d) = 1;
  param_1[0x27e] = 0;
  *param_1 = &PTR_FUN_0064dc04;
  puVar6 = param_1 + 0x3f;
  param_3 = 7;
  do {
    param_2 = 4;
    puVar8 = puVar6;
    do {
      FUN_005b3070();
      FUN_005b3070();
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0x437f0000;
      puVar8[0xe] = 0x437f0000;
      puVar8[0xf] = 0x437f0000;
      puVar8[0x10] = 0x43160000;
      param_2 = param_2 + -1;
      puVar6[7] = 0x40a00000;
      puVar6[6] = 0;
      puVar8 = puVar8 + 9;
    } while (param_2 != 0);
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0x3f800000;
    puVar6[0x14] = 0x3f800000;
    puVar6[0x15] = 0x3f800000;
    puVar6[0x1d] = 0x3f800000;
    puVar6[0x1e] = 0;
    puVar6 = puVar6 + 0x2c;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  puVar6 = param_1 + 0x19d;
  iVar5 = 4;
  do {
    puVar6[-1] = 0x432d0000;
    *puVar6 = 0x436b0000;
    puVar6[1] = 0x437f0000;
    puVar6[2] = 0x43340000;
    puVar6 = puVar6 + 9;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  puVar6 = param_1 + 0x274;
  iVar5 = 4;
  do {
    puVar6[-1] = 0x41a00000;
    *puVar6 = 0x437f0000;
    puVar6[1] = 0x41a00000;
    puVar6 = puVar6 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 6;
  do {
    iVar4 = param_1[0x203];
    local_4._0_1_ = 7;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x14) + -1;
      *(int *)(iVar4 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      param_1[0x203] = 0;
    }
    iVar4 = param_1[0x204];
    local_4._0_1_ = 8;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x14) + -1;
      *(int *)(iVar4 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      param_1[0x204] = 0;
    }
    uVar1 = DAT_006b85f0;
    iVar5 = iVar5 + -1;
    local_4._0_1_ = 6;
  } while (iVar5 != 0);
  if (param_1 == (undefined4 *)0x6b7dd4) {
    local_4._0_1_ = 6;
    FUN_0040ce10();
    iVar4 = DAT_006b85f0 - uVar1;
    iVar5 = -1;
    if (iVar4 != -1) {
      iVar5 = iVar4;
    }
    if (iVar5 != 0) {
      FUN_0060ab50(uVar1 + (int)DAT_006b85ec,uVar1 + (int)DAT_006b85ec + iVar5,iVar4 - iVar5);
      iVar5 = DAT_006b85f0 - iVar5;
      cVar2 = FUN_00401940(iVar5,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar5);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (DAT_006b85f0 != 0) {
      puVar6 = DAT_006b85ec;
      if (DAT_006b85ec == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar6 = DAT_006b85ec;
        if (DAT_006b85ec == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        param_1[0x206] = puVar6;
        param_1[0x207] = DAT_006b85f0;
        param_1[0x208] = DAT_006b85f4;
        *(char *)((int)puVar6 + -1) = *(char *)((int)puVar6 + -1) + '\x01';
        ExceptionList = local_c;
        return param_1;
      }
    }
    cVar2 = FUN_00401940(DAT_006b85f0,1);
    if (cVar2 != '\0') {
      puVar6 = DAT_006b85ec;
      if (DAT_006b85ec == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)param_1[0x206];
      for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[0x207] = uVar1;
      *(undefined1 *)(param_1[0x206] + uVar1) = 0;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

