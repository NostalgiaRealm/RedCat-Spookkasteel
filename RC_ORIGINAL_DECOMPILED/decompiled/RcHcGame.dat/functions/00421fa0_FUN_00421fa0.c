/*
 * FUN_00421fa0 at 00421fa0
 * undefined FUN_00421fa0(void)
 * Address ranges: 00421fa0-00422187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0042203f) */

undefined4 * __thiscall
FUN_00421fa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int aiStack_34 [5];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006223a8;
  pvStack_c = ExceptionList;
  piVar8 = aiStack_34;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *param_6;
    param_6 = param_6 + 1;
    piVar8 = piVar8 + 1;
  }
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00595280(param_2,param_3,param_4,param_5);
  param_1[0xd1] = param_8;
  aiStack_34[4] = param_7;
  local_4._0_1_ = 1;
  aiStack_34[3] = 0x422016;
  FUN_005ab450();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_7 + 0x14);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  uVar1 = *(uint *)(param_7 + 0x1c);
  if (param_1 + 0xd7 == (undefined4 *)(param_7 + 0x14)) {
    if (uVar1 != 0) {
      aiStack_34[4] = 0x422050;
      FUN_005fe747();
    }
    aiStack_34[4] = 0x422057;
    FUN_0040ce10();
    aiStack_34[4] = param_1[0xd9] - uVar1;
    iVar5 = -1;
    if (aiStack_34[4] != -1) {
      iVar5 = aiStack_34[4];
    }
    if (iVar5 != 0) {
      aiStack_34[4] = aiStack_34[4] - iVar5;
      aiStack_34[2] = uVar1 + param_1[0xd8];
      aiStack_34[3] = aiStack_34[2] + iVar5;
      aiStack_34[1] = 0x422078;
      FUN_0060ab50();
      iVar2 = param_1[0xd9];
      aiStack_34[4] = 0;
      aiStack_34[2] = 0x42208a;
      aiStack_34[3] = iVar2 - iVar5;
      cVar3 = FUN_00401940();
      if (cVar3 != '\0') {
        aiStack_34[3] = 0x422096;
        aiStack_34[4] = iVar2 - iVar5;
        FUN_00404190();
      }
    }
    aiStack_34[4] = 0;
    aiStack_34[3] = 0;
    aiStack_34[2] = 0x4220a1;
    FUN_0040c9b0();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_7 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        aiStack_34[4] = 1;
        aiStack_34[3] = 0x4220c9;
        FUN_004040a0();
        puVar4 = *(undefined1 **)(param_7 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[0xd8] = puVar4;
        param_1[0xd9] = *(undefined4 *)(param_7 + 0x1c);
        param_1[0xda] = *(undefined4 *)(param_7 + 0x20);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0042212c;
      }
    }
    aiStack_34[4] = 1;
    aiStack_34[2] = 0x4220f8;
    aiStack_34[3] = uVar1;
    cVar3 = FUN_00401940();
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_7 + 0x18);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = (undefined4 *)param_1[0xd8];
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_1[0xd9] = uVar1;
      *(undefined1 *)(param_1[0xd8] + uVar1) = 0;
    }
  }
LAB_0042212c:
  param_1[0xd2] = &PTR_FUN_0064bca0;
  local_4 = 0xffffffff;
  param_1[0xdb] = *(undefined4 *)(param_7 + 0x24);
  param_1[0xdc] = *(undefined4 *)(param_7 + 0x28);
  param_1[0xd2] = &PTR_FUN_0064bc98;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  *(undefined1 *)((int)param_1 + 0x375) = 0;
  *param_1 = &PTR_FUN_0064bc08;
  aiStack_34[4] = 0x422171;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return param_1;
}

