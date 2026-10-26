/*
 * FUN_004288d0 at 004288d0
 * undefined FUN_004288d0(void)
 * Address ranges: 004288d0-00428a84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0042893b) */

void __fastcall FUN_004288d0(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0xa8))();
  if (cVar2 == '\0') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  FUN_004282e0();
  FUN_00422350();
  iVar4 = (**(code **)(*param_1 + 0x9c))();
  uVar1 = *(uint *)(iVar4 + 0x1bc);
  if (param_1 + 0x61 == (int *)(iVar4 + 0x1b4)) {
    if ((uint)param_1[99] < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar5 = param_1[99] - uVar1;
    iVar4 = -1;
    if (iVar5 != -1) {
      iVar4 = iVar5;
    }
    if (iVar4 != 0) {
      FUN_0060ab50(uVar1 + param_1[0x62],uVar1 + param_1[0x62] + iVar4,iVar5 - iVar4);
      iVar5 = param_1[99];
      cVar2 = FUN_00401940(iVar5 - iVar4,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar5 - iVar4);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar6 = *(undefined1 **)(iVar4 + 0x1b8);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      if ((byte)puVar6[-1] < 0xfe) {
        iVar5 = param_1[0x62];
        if (iVar5 != 0) {
          cVar2 = *(char *)(iVar5 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar2 + -1;
          }
        }
        param_1[0x62] = 0;
        param_1[99] = 0;
        param_1[100] = 0;
        puVar6 = *(undefined1 **)(iVar4 + 0x1b8);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        param_1[0x62] = (int)puVar6;
        param_1[99] = *(int *)(iVar4 + 0x1bc);
        param_1[100] = *(int *)(iVar4 + 0x1c0);
        puVar6[-1] = puVar6[-1] + '\x01';
        goto LAB_00428a4c;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar8 = *(undefined4 **)(iVar4 + 0x1b8);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = (undefined4 *)param_1[0x62];
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
      param_1[99] = uVar1;
      *(undefined1 *)(uVar1 + param_1[0x62]) = 0;
    }
  }
LAB_00428a4c:
  uVar3 = FUN_004a0bc0();
  *(undefined1 *)(param_1 + 0x65) = uVar3;
  fVar10 = (float10)FUN_00439bc0();
  param_1[0x66] = (int)(float)fVar10;
  (**(code **)(*param_1 + 0x8c))(1,0,0x3f800000);
  return;
}

