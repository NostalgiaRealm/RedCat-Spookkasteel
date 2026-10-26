/*
 * FUN_00420a40 at 00420a40
 * undefined FUN_00420a40(void)
 * Address ranges: 00420a40-00420b70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00420a40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined3 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062213e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a8460(param_2,param_3,param_4);
  *(undefined1 *)((int)param_1 + 0x30d) = 0;
  param_1[0xc4] = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_0064bb14;
  if (param_4 == 0) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_1c[0] = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_Entity____0_0068f604,
                                  s_D__Work_RCHorror_RCSource_RcAnyA_0068f614,0x12,local_1c);
    (*pcVar3)();
    uVar1 = local_4._1_3_;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
        uVar1 = local_4._1_3_;
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  local_4._1_3_ = uVar1;
  *(bool *)(param_1 + 0xc3) = *(int *)(param_4 + 0x50) != 0;
  FUN_005b3070();
  ExceptionList = pvStack_c;
  return param_1;
}

