/*
 * FUN_004ac810 at 004ac810
 * undefined FUN_004ac810(void)
 * Address ranges: 004ac810-004ac937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ac810(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e138;
  local_c = ExceptionList;
  if (param_2 < 0.0) {
    local_1c[0] = param_2._0_1_;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Size_>__0_00696268,s_D__Work_RCHorror_AdamSource_Adam_00696274
                                  ,0x24,local_1c);
    (*pcVar2)();
    if (local_18 == (undefined4 *)0x0) {
      *(float *)(param_1 + 0x60) = param_2;
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_18 + -1));
      *(float *)(param_1 + 0x60) = param_2;
      ExceptionList = local_c;
      return;
    }
    *(char *)((int)local_18 + -1) = cVar1 + -1;
  }
  *(float *)(param_1 + 0x60) = param_2;
  ExceptionList = local_c;
  return;
}

