/*
 * FUN_004a1b40 at 004a1b40
 * undefined FUN_004a1b40(void)
 * Address ranges: 004a1b40-004a1c74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a1b40(void)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1d;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cff8;
  local_c = ExceptionList;
  if (DAT_006b8f60 == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    if (DAT_006b9058 != '\0') {
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
      pcVar2 = (code *)FUN_005a07f0(s_m_CreatedList____false_00695404,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x3f,local_1c);
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
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
    }
    DAT_006b9058 = '\x01';
    DAT_006b8f60 = operator_new(0x1c);
    if (DAT_006b8f60 == (undefined1 *)0x0) {
      DAT_006b8f60 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(DAT_006b8f60 + 4) = 0;
      *DAT_006b8f60 = local_1d;
      *(undefined4 *)(DAT_006b8f60 + 8) = 0;
      *(undefined4 *)(DAT_006b8f60 + 0xc) = 0;
      *(undefined4 *)(DAT_006b8f60 + 0x10) = 0;
      *(code **)(DAT_006b8f60 + 0x14) = FUN_004a6d20;
      DAT_006b8f60[0x18] = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

