/*
 * FUN_1001e850 at 1001e850
 * undefined FUN_1001e850(void)
 * Address ranges: 1001e850-1001ea6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001e850(undefined4 param_1,undefined4 param_2)

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
  
  FUN_10027320();
  FUN_1001e610(DAT_104e9940);
  iVar3 = FUN_1001e5a0(DAT_104e9940);
  iVar4 = FUN_1001ede0(iVar3,param_1,param_2,1);
  puVar5 = (undefined4 *)FUN_100142d0(iVar4 * 4);
  local_304 = puVar5;
  FUN_1001ec80(iVar3);
  *(int *)(iVar3 + 0x20) = iVar3;
  FUN_1001ec10(iVar3);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  local_308 = puVar5;
  FUN_1001eb70(iVar3,&local_308);
  uVar11 = (uint)((int)local_308 - (int)puVar5) >> 2;
  if (uVar11 < 0x100) {
    FUN_1001ed30(puVar5,uVar11,local_300,0x100);
  }
  else {
    iVar4 = FUN_100142d0(0x11000);
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
      FUN_1001ea70(iVar4,*puVar2);
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
          FUN_1001ea70(iVar4,iVar6);
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
      FUN_10014360(iVar4);
      _DAT_1003fde8 = 0;
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_10014360(puVar5);
    _DAT_1003fde8 = 0;
  }
  FUN_10027320(s_createPalGood_1003c7f4);
  FUN_10027330(local_300,local_300,0x100);
  iVar3 = FUN_10019ae0();
  if (iVar3 != 0) {
    FUN_10019fe0(9,0x100);
    return iVar3;
  }
  return 0;
}

