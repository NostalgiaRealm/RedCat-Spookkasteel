/*
 * FUN_005ad490 at 005ad490
 * undefined FUN_005ad490(void)
 * Address ranges: 005ad490-005ad6b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ad5c0) */

uint FUN_005ad490(int param_1,char param_2,uint *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645e68;
  pvStack_c = ExceptionList;
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar9 = *(undefined4 **)(param_4 + 4);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)(param_4 + 8) = uVar5;
    *(undefined1 *)(*(int *)(param_4 + 4) + uVar5) = 0;
  }
  if (*param_3 < *(uint *)(param_1 + 8)) {
    do {
      iVar7 = *(int *)(param_1 + 4);
      if (iVar7 == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)(*param_3 + iVar7);
      }
      if (*pcVar3 == param_2) {
        uVar5 = *param_3;
        *param_3 = uVar5 + 1;
        ExceptionList = pvStack_c;
        return CONCAT31((int3)(uVar5 + 1 >> 8),1);
      }
      if (iVar7 == 0) {
        puVar4 = &DAT_0064a3b4;
      }
      else {
        puVar4 = (undefined1 *)(*param_3 + iVar7);
      }
      uVar1 = *puVar4;
      if (-*(int *)(param_4 + 8) - 1U < 2) {
        FUN_005fe5fb();
      }
      iVar7 = *(int *)(param_4 + 8) + 1;
      cVar2 = FUN_00401940(iVar7,0);
      if (cVar2 != '\0') {
        *(undefined1 *)(*(int *)(param_4 + 4) + *(int *)(param_4 + 8)) = uVar1;
        *(int *)(param_4 + 8) = iVar7;
        *(undefined1 *)(*(int *)(param_4 + 4) + iVar7) = 0;
      }
      uVar5 = *param_3;
      *param_3 = uVar5 + 1;
    } while (uVar5 + 1 < *(uint *)(param_1 + 8));
  }
  iVar7 = FUN_005ae390(local_1c,s_ERROR__Expected___c_006a8fa4,(int)param_2);
  uVar5 = *(uint *)(iVar7 + 8);
  uStack_4 = 0;
  if (param_5 == iVar7) {
    FUN_0040c9b0(uVar5,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar5 != 0) {
      puVar4 = *(undefined1 **)(iVar7 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(iVar7 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_5 + 4) = puVar4;
        *(undefined4 *)(param_5 + 8) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005ad67a;
      }
    }
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar8 = *(undefined4 **)(iVar7 + 4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = *(undefined4 **)(param_5 + 4);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar5);
    }
  }
LAB_005ad67a:
  uVar5 = 0;
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      uVar5 = FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    else {
      uVar5 = CONCAT31((int3)((uint)iStack_18 >> 8),cVar2 + -1);
      *(char *)(iStack_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar5 & 0xffffff00;
}

