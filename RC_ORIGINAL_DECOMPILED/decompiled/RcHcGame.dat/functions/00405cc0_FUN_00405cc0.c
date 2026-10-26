/*
 * FUN_00405cc0 at 00405cc0
 * undefined FUN_00405cc0(void)
 * Address ranges: 00405cc0-00405e04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00405cc0(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061ffe0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00405530(param_2);
  local_4 = 0;
  if ((param_3 != -1) && (param_3 < 0)) {
    local_1c[0] = (undefined1)param_3;
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)(uVar5 + (int)local_18) = 0;
      local_14 = uVar5;
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  param_1[0xc] = param_3;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x48))(local_1c);
  param_1[0x10] = *puVar4;
  param_1[0x11] = puVar4[1];
  uVar1 = puVar4[2];
  *param_1 = &PTR_FUN_0064a6b0;
  param_1[0x12] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

