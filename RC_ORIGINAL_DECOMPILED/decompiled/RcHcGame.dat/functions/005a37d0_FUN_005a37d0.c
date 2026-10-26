/*
 * FUN_005a37d0 at 005a37d0
 * undefined FUN_005a37d0(void)
 * Address ranges: 005a37d0-005a3b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005a37d0(void)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_858;
  char acStack_84a [1582];
  undefined1 local_21c [264];
  undefined1 local_114 [264];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006452a7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  local_4 = 0;
  FUN_0060d721();
  FUN_0060d5da();
  FUN_0060d588(acStack_84a + 2,&DAT_0069c984,local_21c,local_114);
  if (&stack0x00000000 == (undefined1 *)0x848) {
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_858;
      for (uVar6 = ~uVar5 - 1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = ~uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0();
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  uVar5 = 0xffffffff;
  pcVar3 = acStack_84a + 2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = acStack_84a + ~uVar5;
  if ((int)(~uVar5 - 1) < 1) {
    pcVar3 = acStack_84a + 2;
  }
  if (*pcVar3 == '\\') {
    if (&stack0x00000000 == (undefined1 *)0x848) {
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      cVar1 = FUN_00401940();
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar8 = local_858;
        for (uVar6 = ~uVar5 - 1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = ~uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190();
      }
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0();
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
    uVar5 = 0xffffffff;
    pcVar3 = acStack_84a + 2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = acStack_84a + ~uVar5;
    if ((int)(~uVar5 - 1) < 1) {
      pcVar3 = acStack_84a + 2;
    }
    *pcVar3 = '\0';
  }
  FUN_0060d588();
  iVar4 = FUN_005cd0a0();
  if (iVar4 == 0) {
    FUN_005ae390();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005aff20();
    if (local_858 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_858 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)((int)local_858 + -1) = cVar1 + -1;
      }
    }
    local_4 = 0xffffffff;
    FUN_005ae770();
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005cd200();
    FUN_005cd320();
    if (iVar4 == 0) {
      FUN_005ae390();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_005aff20();
      if (local_858 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_858 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)((int)local_858 + -1) = cVar1 + -1;
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_005ae770();
  }
  ExceptionList = pvStack_c;
  return iVar4;
}

