/*
 * FUN_005d7bf0 at 005d7bf0
 * undefined FUN_005d7bf0(void)
 * Address ranges: 005d7bf0-005d7e0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005d7bf0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *local_308;
  undefined4 *local_304;
  undefined1 local_300 [768];
  
  FUN_005630e0();
  FUN_005d9800(DAT_006cf004);
  iVar3 = FUN_005d9790(DAT_006cf004);
  iVar4 = FUN_005d8180(iVar3,param_1,param_2,1);
  puVar5 = (undefined4 *)FUN_005cf370(iVar4 * 4);
  local_304 = puVar5;
  FUN_005d8020(iVar3);
  *(int *)(iVar3 + 0x20) = iVar3;
  FUN_005d7fb0(iVar3);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  local_308 = puVar5;
  FUN_005d7f10(iVar3,&local_308);
  uVar11 = (uint)((int)local_308 - (int)puVar5) >> 2;
  if (uVar11 < 0x100) {
    FUN_005d80d0(puVar5,uVar11,local_300,0x100);
  }
  else {
    iVar4 = FUN_005cf370(0x11000);
    iVar6 = 0x400;
    iVar3 = iVar4;
    do {
      *(int *)(iVar3 + 0x3c) = iVar3;
      *(int *)(iVar3 + 0x40) = iVar3;
      iVar3 = iVar3 + 0x44;
      iVar6 = iVar6 + -1;
      uVar1 = uVar11;
      puVar2 = puVar5;
    } while (iVar6 != 0);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_005d7e10(iVar4,*puVar2);
      puVar2 = puVar2 + 1;
      puVar5 = local_304;
    }
    iVar3 = 0;
    if (0x100 < uVar11) {
      do {
        iVar7 = *(int *)(iVar4 + 0x40 + iVar3 * 0x44);
        iVar6 = iVar4 + iVar3 * 0x44;
        if (iVar7 == iVar6) {
          do {
            iVar7 = *(int *)(iVar6 + 0x84);
            iVar6 = iVar6 + 0x44;
            iVar3 = iVar3 + 1;
          } while (iVar7 == iVar6);
        }
        *(undefined4 *)(*(int *)(iVar7 + 0x3c) + 0x40) = *(undefined4 *)(iVar7 + 0x40);
        *(undefined4 *)(*(int *)(iVar7 + 0x40) + 0x3c) = *(undefined4 *)(iVar7 + 0x3c);
        iVar6 = *(int *)(iVar7 + 0x20);
        iVar7 = *(int *)(iVar6 + 0x28) + -1;
        *(int *)(iVar6 + 0x28) = iVar7;
        if (iVar7 == 0) {
          FUN_005d7e10(iVar4,iVar6);
        }
        else {
          uVar11 = uVar11 - 1;
        }
      } while (0x100 < (int)uVar11);
    }
    iVar3 = *(int *)(iVar4 + 0x10ff8);
    puVar10 = local_300;
    iVar6 = 0x3ff;
    iVar7 = 0;
    do {
      if (iVar6 < 1) break;
      *puVar10 = *(undefined1 *)(iVar3 + 0x2c);
      puVar10[1] = *(undefined1 *)(iVar3 + 0x30);
      puVar10[2] = *(undefined1 *)(iVar3 + 0x34);
      iVar3 = *(int *)(iVar3 + 0x3c);
      puVar10 = puVar10 + 3;
      iVar8 = iVar4 + iVar6 * 0x44;
      if (iVar3 == iVar8) {
        do {
          iVar6 = iVar6 + -1;
          iVar9 = iVar8 + -0x44;
          if (iVar6 == 0) break;
          iVar3 = *(int *)(iVar8 + -8);
          iVar8 = iVar9;
        } while (iVar3 == iVar9);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    if (iVar4 != 0) {
      FUN_005cf400(iVar4);
      _DAT_007203c0 = 0;
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_005cf400(puVar5);
    _DAT_007203c0 = 0;
  }
  FUN_005630e0(s_createPalGood_006b071c);
  FUN_005e1130(local_300,local_300,0x100);
  iVar3 = FUN_005c4aa0();
  if (iVar3 != 0) {
    FUN_005c4fd0(9,0x100);
    return iVar3;
  }
  return 0;
}

