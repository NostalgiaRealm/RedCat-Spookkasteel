/*
 * FUN_005eed10 at 005eed10
 * undefined FUN_005eed10(void)
 * Address ranges: 005eed10-005eee12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005eed4c) */

undefined1 * __thiscall FUN_005eed10(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1[1] < 4) {
    FUN_005eeb80(param_2,param_1[1]);
    return param_2;
  }
  iVar2 = *param_1;
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar3 = *(uint *)(iVar2 + 0x14);
  if (param_2 == (undefined1 *)(iVar2 + 0xc)) {
    FUN_0040c9b0(uVar3,0xffffffff);
    FUN_0040c9b0(0,0);
    return param_2;
  }
  if (uVar3 != 0) {
    puVar5 = *(undefined1 **)(iVar2 + 0x10);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    if ((byte)puVar5[-1] < 0xfe) {
      FUN_004040a0(1);
      puVar5 = *(undefined1 **)(iVar2 + 0x10);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      *(undefined1 **)(param_2 + 4) = puVar5;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x18);
      puVar5[-1] = puVar5[-1] + '\x01';
      return param_2;
    }
  }
  cVar4 = FUN_00401940(uVar3,1);
  if (cVar4 != '\0') {
    puVar7 = *(undefined4 **)(iVar2 + 0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar8 = *(undefined4 **)(param_2 + 4);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00404190(uVar3);
  }
  return param_2;
}

