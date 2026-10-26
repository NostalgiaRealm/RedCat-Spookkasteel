/*
 * FUN_00594470 at 00594470
 * undefined FUN_00594470(void)
 * Address ranges: 00594470-005947a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00594538) */
/* WARNING: Removing unreachable block (ram,0x0059469b) */

int __fastcall FUN_00594470(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  piVar3 = (int *)FUN_0051d750();
  cVar2 = (**(code **)(*piVar3 + 0x34))(*(undefined4 *)(param_1 + 0x30c),0x1b);
  if (cVar2 != '\0') {
    iVar4 = FUN_005943d0(param_1);
    return iVar4;
  }
  if (*(int *)(param_1 + 4) != 0x100) {
    if (*(int *)(param_1 + 4) != 0x102) {
      return param_1;
    }
    switch(*(uint *)(param_1 + 8)) {
    case 8:
      iVar4 = FUN_005932b0();
      return iVar4;
    default:
      if (*(uint *)(param_1 + 8) < 0x20) {
        return param_1;
      }
      iVar4 = FUN_005933b0(*(undefined1 *)(param_1 + 8));
      return iVar4;
    case 0xd:
      goto switchD_005944eb_caseD_d;
    case 0x1b:
    case 0x60:
      iVar4 = FUN_005943d0(param_1);
      return iVar4;
    }
  }
  if (*(int *)(param_1 + 8) != 0x72) {
    return param_1;
  }
  iVar4 = *(int *)(param_1 + 0x2e8) * 0x10;
  uVar1 = *(uint *)(iVar4 + 0x1ac + param_1);
  iVar4 = iVar4 + 0x1a4 + param_1;
  if (param_1 + 0x2f8 == iVar4) {
    if (*(uint *)(param_1 + 0x300) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar5 = *(int *)(param_1 + 0x300) - uVar1;
    iVar4 = -1;
    if (iVar5 != -1) {
      iVar4 = iVar5;
    }
    if (iVar4 != 0) {
      iVar9 = uVar1 + *(int *)(param_1 + 0x2fc);
      FUN_0060ab50(iVar9,iVar4 + iVar9,iVar5 - iVar4);
      iVar4 = *(int *)(param_1 + 0x300) - iVar4;
      cVar2 = FUN_00401940(iVar4,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar4);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar6 = *(undefined1 **)(iVar4 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      if ((byte)puVar6[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar6 = *(undefined1 **)(iVar4 + 4);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x2fc) = puVar6;
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(iVar4 + 0xc);
        puVar6[-1] = puVar6[-1] + '\x01';
        goto LAB_00594786;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar10 = *(undefined4 **)(iVar4 + 4);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar11 = *(undefined4 **)(param_1 + 0x2fc);
      for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar1);
      param_1 = unaff_EBP;
    }
  }
LAB_00594786:
  iVar4 = *(int *)(param_1 + 0x2e8) + 0x13;
  *(int *)(param_1 + 0x2e8) = iVar4 % 0x14;
  return iVar4 / 0x14;
switchD_005944eb_caseD_d:
  uVar1 = *(uint *)(param_1 + 0x300);
  iVar4 = *(int *)(param_1 + 0x2e4) * 0x10 + 0x1a4 + param_1;
  if (iVar4 == param_1 + 0x2f8) {
    if (*(uint *)(iVar4 + 8) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar9 = *(int *)(iVar4 + 8) - uVar1;
    iVar5 = -1;
    if (iVar9 != -1) {
      iVar5 = iVar9;
    }
    if (iVar5 != 0) {
      iVar7 = *(int *)(iVar4 + 4) + uVar1;
      FUN_0060ab50(iVar7,iVar7 + iVar5,iVar9 - iVar5);
      iVar5 = *(int *)(iVar4 + 8) - iVar5;
      cVar2 = FUN_00401940(iVar5,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar5);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar6 = *(undefined1 **)(param_1 + 0x2fc);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      if ((byte)puVar6[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar6 = *(undefined1 **)(param_1 + 0x2fc);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        *(undefined1 **)(iVar4 + 4) = puVar6;
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x300);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x304);
        puVar6[-1] = puVar6[-1] + '\x01';
        goto LAB_00594623;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar10 = *(undefined4 **)(param_1 + 0x2fc);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar11 = *(undefined4 **)(iVar4 + 4);
      for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar1);
      param_1 = unaff_EBP;
    }
  }
LAB_00594623:
  *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e4);
  *(int *)(param_1 + 0x2e4) = (*(int *)(param_1 + 0x2e4) + 1) % 0x14;
  iVar4 = FUN_005935a0();
  return iVar4;
}

