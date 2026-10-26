/*
 * FUN_005375b0 at 005375b0
 * undefined FUN_005375b0(void)
 * Address ranges: 005375b0-00537702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005375da) */

int __thiscall FUN_005375b0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  FUN_005ab760(param_2);
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (param_1 + 0x14 == param_2 + 0x14) {
    if (*(uint *)(param_1 + 0x1c) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 0x1c) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar6 = uVar1 + *(int *)(param_1 + 0x18);
      FUN_0060ab50(iVar6,iVar6 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(param_1 + 0x1c) - iVar7;
      cVar2 = FUN_00401940(iVar7,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar7);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar7 = *(int *)(param_1 + 0x18);
        if (iVar7 != 0) {
          cVar2 = *(char *)(iVar7 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iVar7 + -1));
          }
          else {
            *(char *)(iVar7 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        puVar4 = *(undefined1 **)(param_2 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x18) = puVar4;
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005376e9;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar8 = *(undefined4 **)(param_2 + 0x18);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x18);
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)(param_1 + 0x1c) = uVar1;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar1) = 0;
    }
  }
LAB_005376e9:
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}

