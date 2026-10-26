/*
 * FUN_00565ae0 at 00565ae0
 * undefined FUN_00565ae0(void)
 * Address ranges: 00565ae0-00565bfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00565ae0(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 < 0.0) {
    local_1c[0] = param_2._0_1_;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_ClockSpeed_>__0_0f_006a3d48,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a3d60,0x7b,local_1c);
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
  if (param_2 != *(float *)(param_1 + 0x14)) {
    if (*(int *)(param_1 + 0xc) != -1) {
      uVar3 = FUN_00565870();
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      DVar4 = timeGetTime();
      *(DWORD *)(param_1 + 0x10) = DVar4;
    }
    *(float *)(param_1 + 0x14) = param_2;
  }
  ExceptionList = pvStack_c;
  return;
}

