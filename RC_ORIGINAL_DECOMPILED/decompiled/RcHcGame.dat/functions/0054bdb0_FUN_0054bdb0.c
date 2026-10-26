/*
 * FUN_0054bdb0 at 0054bdb0
 * undefined FUN_0054bdb0(void)
 * Address ranges: 0054bdb0-0054bfbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0054bdc8) */

int __thiscall FUN_0054bdb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    FUN_0040c9b0(uVar9,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar9 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar3 = *(undefined1 **)(param_2 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_0054be6a;
      }
    }
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar10 = *(undefined4 **)(param_1 + 4);
      for (uVar5 = uVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar9);
    }
  }
LAB_0054be6a:
  FUN_0054bfc0(param_2 + 0x10);
  if (param_1 + 0x20 != param_2 + 0x20) {
    puVar4 = *(undefined4 **)(param_2 + 0x24);
    if (puVar4 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(param_2 + 0x28) - (int)puVar4 >> 3;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x24);
    if (puVar10 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(param_1 + 0x28) - (int)puVar10 >> 3;
    }
    if (uVar5 < uVar9) {
      if (puVar4 == (undefined4 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(int *)(param_2 + 0x28) - (int)puVar4 >> 3;
      }
      if (puVar10 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 0x2c) - (int)puVar10 >> 3;
      }
      if (uVar5 < uVar9) {
        FUN_00587d50(puVar10,*(undefined4 *)(param_1 + 0x28));
        FUN_005fe5f0(*(undefined4 *)(param_1 + 0x24));
        iVar6 = FUN_00548d10();
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        pvVar7 = operator_new(iVar6 * 8);
        *(void **)(param_1 + 0x24) = pvVar7;
        uVar8 = FUN_0054a240(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),pvVar7)
        ;
        *(undefined4 *)(param_1 + 0x28) = uVar8;
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
      }
      else {
        iVar6 = FUN_00548d10();
        FUN_0054c4d0(*(undefined4 *)(param_2 + 0x24),puVar4 + iVar6 * 2,
                     *(undefined4 *)(param_1 + 0x24));
        FUN_0054a240(puVar4 + iVar6 * 2,*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(param_1 + 0x28));
        iVar6 = FUN_00548d10();
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar6 * 8;
      }
    }
    else {
      puVar1 = *(undefined4 **)(param_2 + 0x28);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
        *puVar10 = *puVar4;
        puVar10[1] = puVar4[1];
        puVar10 = puVar10 + 2;
      }
      if (*(int *)(param_2 + 0x24) == 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
      }
      else {
        *(int *)(param_1 + 0x28) =
             *(int *)(param_1 + 0x24) +
             (*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 3) * 8;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}

