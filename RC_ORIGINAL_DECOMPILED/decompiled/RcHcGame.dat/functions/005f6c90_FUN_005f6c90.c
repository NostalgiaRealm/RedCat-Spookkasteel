/*
 * FUN_005f6c90 at 005f6c90
 * undefined FUN_005f6c90(void)
 * Address ranges: 005f6c90-005f6e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x650c84; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x650c84; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f6c90(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648458;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 8) == -2) {
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_006b1528;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    ExceptionList = &pvStack_c;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = &DAT_006b1528;
      puVar8 = *(undefined4 **)(param_2 + 4);
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
      *(uint *)(param_2 + 8) = uVar4;
      *(undefined1 *)(*(int *)(param_2 + 4) + uVar4) = 0;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    uVar3 = FUN_005e7110(local_1c,&DAT_006b1520,*(int *)(param_1 + 8));
    local_4 = 0;
    FUN_0040cc00(uVar3,0,0xffffffff);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)(local_18 + -1) = cVar2 + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_005f6cff;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_005f6cff:
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_005fe5fb();
  }
  iVar1 = *(int *)(param_3 + 4);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar4 == 0) {
      FUN_004040a0(1);
      ExceptionList = pvStack_c;
      return;
    }
    if ((*(uint *)(param_3 + 0xc) < 0x20) && (uVar4 <= *(uint *)(param_3 + 0xc))) goto LAB_005f6dfa;
    FUN_004040a0(1);
  }
  else if (uVar4 == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004040a0(0);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00401a60(uVar4);
LAB_005f6dfa:
  puVar6 = (undefined4 *)&DAT_006b3f70;
  puVar8 = *(undefined4 **)(param_3 + 4);
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
  *(uint *)(param_3 + 8) = uVar4;
  *(undefined1 *)(*(int *)(param_3 + 4) + uVar4) = 0;
  ExceptionList = pvStack_c;
  return;
}

