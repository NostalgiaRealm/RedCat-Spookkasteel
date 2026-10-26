/*
 * FUN_004e32f0 at 004e32f0
 * undefined FUN_004e32f0(void)
 * Address ranges: 004e32f0-004e3480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004e332e) */

void __thiscall FUN_004e32f0(int param_1,int param_2,float param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*(undefined4 **)(param_1 + 0x184) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x184))(1);
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  uVar1 = *(uint *)(param_2 + 8);
  if (param_1 + 0x1bc == param_2) {
    if (*(uint *)(param_1 + 0x1c4) < uVar1) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 0x1c4) - uVar1;
    iVar8 = -1;
    if (iVar3 != -1) {
      iVar8 = iVar3;
    }
    if (iVar8 != 0) {
      iVar7 = uVar1 + *(int *)(param_1 + 0x1c0);
      FUN_0060ab50(iVar7,iVar7 + iVar8,iVar3 - iVar8);
      iVar8 = *(int *)(param_1 + 0x1c4) - iVar8;
      cVar2 = FUN_00401940(iVar8,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar8);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar8 = *(int *)(param_1 + 0x1c0);
        if (iVar8 != 0) {
          cVar2 = *(char *)(iVar8 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iVar8 + -1));
          }
          else {
            *(char *)(iVar8 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)(param_1 + 0x1c0) = 0;
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        *(undefined4 *)(param_1 + 0x1c8) = 0;
        puVar4 = *(undefined1 **)(param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x1c0) = puVar4;
        *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004e3439;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar9 = *(undefined4 **)(param_2 + 4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar10 = *(undefined4 **)(param_1 + 0x1c0);
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(uint *)(param_1 + 0x1c4) = uVar1;
      *(undefined1 *)(*(int *)(param_1 + 0x1c0) + uVar1) = 0;
    }
  }
LAB_004e3439:
  *(float *)(param_1 + 0x1b8) = param_3;
  *(undefined4 *)(param_1 + 0x1cc) = param_4;
  if (0.0 < param_3) {
    uVar5 = FUN_00569110(param_4,param_2,param_3);
    *(undefined4 *)(param_1 + 0x184) = uVar5;
  }
  return;
}

