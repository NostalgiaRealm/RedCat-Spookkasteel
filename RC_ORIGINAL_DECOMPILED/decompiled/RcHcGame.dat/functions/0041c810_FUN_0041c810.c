/*
 * FUN_0041c810 at 0041c810
 * undefined FUN_0041c810(void)
 * Address ranges: 0041c810-0041c985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041c810(int *param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621af8;
  pvStack_c = ExceptionList;
  if ((param_2 < 0.0) || (ExceptionList = &pvStack_c, 1.0 < param_2)) {
    local_1c[0] = param_2._0_1_;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pvVar4 = (void *)(~uVar3 - 1);
    local_18 = (undefined4 *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(pvVar4,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar3 = (uint)pvVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = (uint)pvVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + (int)pvVar4) = 0;
      local_14 = pvVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Phase_>__0_0f____a_Phase_<__1__0068f35c,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x1cb,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
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
  (**(code **)(*param_1 + 0x48))(local_28);
  (**(code **)(*param_1 + 0x4c))(&stack0xffffffc8);
  ExceptionList = local_14;
  return;
}

