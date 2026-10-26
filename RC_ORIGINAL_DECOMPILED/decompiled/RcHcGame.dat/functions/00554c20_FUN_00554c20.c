/*
 * FUN_00554c20 at 00554c20
 * undefined FUN_00554c20(void)
 * Address ranges: 00554c20-00554dc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00554c20(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e4c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_2c[0] = 0;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
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
      FUN_00404190(uVar4);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Actor____0_00699780,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a1,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  iVar3 = FUN_005525c0();
  if (iVar3 == 0) {
    auStack_1c[0] = 0;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_18;
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
      FUN_00404190(uVar4);
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_userData____0_00699770,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a3,auStack_1c);
    (*pcVar2)();
    if (puStack_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_18 + -1));
      }
      else {
        *(char *)((int)puStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return iVar3;
}

