/*
 * FUN_0040a9a0 at 0040a9a0
 * undefined FUN_0040a9a0(void)
 * Address ranges: 0040a9a0-0040aafd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0040a9a0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006208e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a720(param_2);
  local_4 = 0;
  FUN_0060a4a0();
  iVar2 = __ftol();
  if ((iVar2 != -1) && (iVar2 < 0)) {
    uVar4 = 0xffffffff;
    param_2._0_1_ = (undefined1)iVar2;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_1c[0] = (undefined1)param_2;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
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
      *(undefined1 *)(uVar4 + (int)local_18) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
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
  param_1[0xc] = 0xffffffff;
  param_1[0xb] = iVar2;
  param_1[0xd] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *param_1 = &PTR_FUN_0064aa18;
  (**(code **)(*(int *)param_1[10] + 0x8c))(1,1,0x3f800000);
  ExceptionList = local_18;
  return param_1;
}

