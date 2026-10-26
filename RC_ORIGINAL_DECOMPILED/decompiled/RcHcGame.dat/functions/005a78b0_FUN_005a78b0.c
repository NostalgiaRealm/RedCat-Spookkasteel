/*
 * FUN_005a78b0 at 005a78b0
 * undefined FUN_005a78b0(void)
 * Address ranges: 005a78b0-005a79f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a78b0(void)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064581b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x4e);
  uVar6 = 0;
  local_4 = 0;
  if (DAT_006cad5c != '\0') {
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s___m_Created_006a178c,s_D__Work_RCHorror_AdamSource_Davi_006a84a8
                                  ,0x4f,local_1c);
    (*pcVar2)();
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
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  pvVar3 = operator_new(0x180);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar3 != (void *)0x0) {
    uVar6 = FUN_005a7670();
  }
  DAT_006cad5c = 1;
  local_4 = 0xffffffff;
  DAT_006cad58 = uVar6;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return uVar6;
}

