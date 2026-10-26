/*
 * FUN_00567990 at 00567990
 * undefined FUN_00567990(void)
 * Address ranges: 00567990-00567b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00567b1e) */
/* WARNING: Removing unreachable block (ram,0x00567b2c) */
/* WARNING: Removing unreachable block (ram,0x005679e9) */

void __thiscall FUN_00567990(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x14);
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (param_1 + 0x134 == param_2) {
    if (*(uint *)(param_1 + 0x13c) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 0x13c) - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      iVar6 = *(int *)(param_1 + 0x138) + uVar1;
      FUN_0060ab50(iVar6,iVar6 + iVar5,iVar3 - iVar5);
      iVar5 = *(int *)(param_1 + 0x13c) - iVar5;
      cVar2 = FUN_00401940(iVar5,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar5);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x138) = puVar4;
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00567adc;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar8 = *(undefined4 **)(param_2 + 4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x138);
      for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_00567adc:
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
  return;
}

