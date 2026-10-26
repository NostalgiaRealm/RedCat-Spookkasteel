/*
 * FUN_00457960 at 00457960
 * undefined FUN_00457960(void)
 * Address ranges: 00457960-00457b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00457992) */
/* WARNING: Removing unreachable block (ram,0x00457a4b) */

int __thiscall FUN_00457960(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_0040cc00(param_2,0,0xffffffff);
  uVar1 = *(uint *)(param_2 + 0x18);
  if (param_1 + 0x10 == param_2 + 0x10) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x14);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 0x14);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x14) = puVar4;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00457a32;
      }
    }
    cVar3 = FUN_00401940(uVar1,1);
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x14);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x14);
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_00457a32:
  uVar1 = *(uint *)(param_2 + 0x28);
  if (param_1 + 0x20 == param_2 + 0x20) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x24);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 0x24);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x24) = puVar4;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00457aeb;
      }
    }
    cVar3 = FUN_00401940(uVar1,1);
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x24);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x24);
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_00457aeb:
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != *(int *)(param_2 + 0x30)) {
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    iVar2 = *(int *)(param_2 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}

