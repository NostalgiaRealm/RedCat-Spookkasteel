/*
 * FUN_00599600 at 00599600
 * undefined FUN_00599600(void)
 * Address ranges: 00599600-005997d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00599600(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006442b8;
  pvStack_c = ExceptionList;
  puVar8 = param_2;
  ExceptionList = &pvStack_c;
  for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar3 = FUN_0059b1e0();
  param_2[3] = uVar3;
  puVar8 = param_2 + 0x16;
  param_2 = (undefined4 *)0x8;
  do {
    uVar3 = FUN_0059b1e0();
    *puVar8 = uVar3;
    puVar8 = puVar8 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  puVar8 = puVar1 + 0x1e;
  param_2 = (undefined4 *)0x4;
  do {
    uVar3 = FUN_0059b1e0();
    *puVar8 = uVar3;
    puVar8 = puVar8 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  if (0x3f < *(uint *)(param_1 + 0x20)) {
    local_1c[0] = 0;
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)(uVar6 + (int)local_18) = 0;
      local_14 = uVar6;
    }
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_m_Name_length___<_64_006a6edc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x268,local_1c);
    (*pcVar4)();
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
  pcVar10 = *(char **)(param_1 + 0x1c);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  uVar6 = 0xffffffff;
  do {
    pcVar11 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar11 + -uVar6;
  pcVar11 = (char *)(puVar1 + 5);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  puVar1[4] = *(undefined4 *)(param_1 + 100);
  *puVar1 = *(undefined4 *)(param_1 + 0x28);
  puVar1[1] = *(undefined4 *)(param_1 + 0x2c);
  puVar1[2] = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x94) == 0) {
    puVar1[0x22] = 0xffffffff;
    puVar1[0x23] = *(undefined4 *)(param_1 + 0x98);
  }
  else {
    puVar1[0x22] = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x34);
    puVar1[0x23] = *(undefined4 *)(param_1 + 0x98);
  }
  ExceptionList = pvStack_c;
  return;
}

