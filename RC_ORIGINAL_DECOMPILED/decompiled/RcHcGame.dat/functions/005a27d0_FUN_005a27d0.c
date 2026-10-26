/*
 * FUN_005a27d0 at 005a27d0
 * undefined FUN_005a27d0(void)
 * Address ranges: 005a27d0-005a2943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a2810) */

void FUN_005a27d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  FUN_005a3620();
  uVar3 = FUN_005a2480(param_1,param_3);
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  iVar4 = FUN_005a1d60();
  uVar1 = *(uint *)(iVar4 + 8);
  if (param_2 + 0x18 == iVar4) {
    if (*(uint *)(param_2 + 0x20) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar5 = *(int *)(param_2 + 0x20) - uVar1;
    iVar4 = -1;
    if (iVar5 != -1) {
      iVar4 = iVar5;
    }
    if (iVar4 != 0) {
      iVar8 = uVar1 + *(int *)(param_2 + 0x1c);
      FUN_0060ab50(iVar8,iVar8 + iVar4,iVar5 - iVar4);
      iVar4 = *(int *)(param_2 + 0x20) - iVar4;
      cVar2 = FUN_00401940(iVar4,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar4);
      }
    }
    FUN_0040ce10();
    FUN_005a37c0();
    return;
  }
  if (uVar1 != 0) {
    puVar6 = *(undefined1 **)(iVar4 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      iVar5 = *(int *)(param_2 + 0x1c);
      if (iVar5 != 0) {
        cVar2 = *(char *)(iVar5 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iVar5 + -1));
        }
        else {
          *(char *)(iVar5 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      puVar6 = *(undefined1 **)(iVar4 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      *(undefined1 **)(param_2 + 0x1c) = puVar6;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar4 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      FUN_005a37c0();
      return;
    }
  }
  cVar2 = FUN_00401940(uVar1,1);
  if (cVar2 != '\0') {
    puVar9 = *(undefined4 **)(iVar4 + 4);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar10 = *(undefined4 **)(param_2 + 0x1c);
    for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(uint *)(param_2 + 0x20) = uVar1;
    *(undefined1 *)(*(int *)(param_2 + 0x1c) + uVar1) = 0;
  }
  FUN_005a37c0();
  return;
}

