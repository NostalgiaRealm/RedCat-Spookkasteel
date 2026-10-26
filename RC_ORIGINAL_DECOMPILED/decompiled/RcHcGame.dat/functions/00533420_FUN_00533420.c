/*
 * FUN_00533420 at 00533420
 * undefined FUN_00533420(void)
 * Address ranges: 00533420-00533550
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0053343a) */

void __thiscall FUN_00533420(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (param_1 + 0x68 == param_2) {
    if (*(uint *)(param_1 + 0x70) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 0x70) - uVar1;
    iVar8 = -1;
    if (iVar3 != -1) {
      iVar8 = iVar3;
    }
    if (iVar8 != 0) {
      iVar6 = uVar1 + *(int *)(param_1 + 0x6c);
      FUN_0060ab50(iVar6,iVar6 + iVar8,iVar3 - iVar8);
      iVar8 = *(int *)(param_1 + 0x70) - iVar8;
      cVar2 = FUN_00401940(iVar8,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar8);
      }
    }
    FUN_0040ce10();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar8 = *(int *)(param_1 + 0x6c);
      if (iVar8 != 0) {
        cVar2 = *(char *)(iVar8 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iVar8 + -1));
        }
        else {
          *(char *)(iVar8 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      *(undefined1 **)(param_1 + 0x6c) = puVar4;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00401940(uVar1,1);
  if (cVar2 != '\0') {
    puVar7 = (undefined4 *)&DAT_0064a3b4;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_2 + 4);
    }
    puVar9 = *(undefined4 **)(param_1 + 0x6c);
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)(param_1 + 0x70) = uVar1;
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + uVar1) = 0;
  }
  return;
}

