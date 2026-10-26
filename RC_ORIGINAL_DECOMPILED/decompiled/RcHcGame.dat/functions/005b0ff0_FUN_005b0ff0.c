/*
 * FUN_005b0ff0 at 005b0ff0
 * undefined FUN_005b0ff0(void)
 * Address ranges: 005b0ff0-005b1132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b0ff0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char local_104 [260];
  
  if (param_5 == 0) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    puVar9 = *(undefined1 **)(param_5 + 4);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0064a3b4;
    }
  }
  if (param_4 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = *(undefined1 **)(param_4 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
  }
  if (param_3 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = *(undefined1 **)(param_3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
  }
  if (param_2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
  }
  FUN_0060daf4(local_104,puVar3,puVar4,puVar7,puVar9);
  uVar5 = 0xffffffff;
  pcVar8 = local_104;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  if (0xfffffffd < uVar5) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar5 <= *(uint *)(param_1 + 0xc))) goto LAB_005b1107;
    FUN_004040a0(1);
  }
  else if (uVar5 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  FUN_00401a60(uVar5);
LAB_005b1107:
  pcVar8 = local_104;
  pcVar10 = *(char **)(param_1 + 4);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  *(uint *)(param_1 + 8) = uVar5;
  *(undefined1 *)(uVar5 + *(int *)(param_1 + 4)) = 0;
  return;
}

