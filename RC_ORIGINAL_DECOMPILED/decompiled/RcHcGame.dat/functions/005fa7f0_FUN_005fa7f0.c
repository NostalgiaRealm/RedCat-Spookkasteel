/*
 * FUN_005fa7f0 at 005fa7f0
 * undefined FUN_005fa7f0(void)
 * Address ranges: 005fa7f0-005faac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005fa929) */
/* WARNING: Removing unreachable block (ram,0x005fa870) */
/* WARNING: Removing unreachable block (ram,0x005fa9e2) */

int __thiscall FUN_005fa7f0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_0040cc00(param_2 + 0x68,0,0xffffffff);
  FUN_0040cc00(param_2 + 0x24,0,0xffffffff);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  FUN_0040cc00(param_2,0,0xffffffff);
  FUN_0040cc00(param_2 + 0x34,0,0xffffffff);
  uVar1 = *(uint *)(param_2 + 0x5c);
  if (param_1 + 0x54 == param_2 + 0x54) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x58);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar3 = *(undefined1 **)(param_2 + 0x58);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x58) = puVar3;
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_005fa910;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 0x58);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x58);
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_005fa910:
  uVar1 = *(uint *)(param_2 + 0x4c);
  if (param_1 + 0x44 == param_2 + 0x44) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x48);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar3 = *(undefined1 **)(param_2 + 0x48);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x48) = puVar3;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_005fa9c9;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 0x48);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x48);
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_005fa9c9:
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (param_1 + 0x14 == param_2 + 0x14) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    return param_1;
  }
  if (uVar1 != 0) {
    puVar3 = *(undefined1 **)(param_2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      FUN_004040a0(1);
      puVar3 = *(undefined1 **)(param_2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      *(undefined1 **)(param_1 + 0x18) = puVar3;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      puVar3[-1] = puVar3[-1] + '\x01';
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      return param_1;
    }
  }
  cVar2 = FUN_00401940(uVar1,1);
  if (cVar2 != '\0') {
    puVar5 = *(undefined4 **)(param_2 + 0x18);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(param_1 + 0x1c) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x18)) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

