/*
 * FUN_10014180 at 10014180
 * undefined FUN_10014180(void)
 * Address ranges: 10014180-100142c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014180(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_c40 [3128];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  if (0 < (int)DAT_104e98c8) {
    iVar5 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar5 + 0x40 + DAT_104e98b4) = 0;
      iVar5 = iVar5 + 0x44;
    } while (iVar1 < (int)DAT_104e98c8);
  }
  iVar1 = 0;
  if (0 < (int)DAT_104e98c8) {
    do {
      iVar5 = *(int *)(DAT_104e98b8 + iVar1 * 4);
      puVar2 = (undefined4 *)FUN_10014310(DAT_104e98d8);
      *(undefined4 **)(iVar5 + 0x30) = puVar2;
      uVar7 = DAT_104e98d8;
      for (uVar6 = DAT_104e98d8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar6 = DAT_104e98c8, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar2 = DAT_104e98d4;
      for (uVar7 = DAT_104e98c8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      DAT_104e98e8 = 0;
      iVar4 = 0;
      if (0 < (int)DAT_104e98d8) {
        do {
          iVar3 = iVar4 + 1;
          local_c40[iVar4] = *(undefined1 *)(*(int *)(iVar5 + 0x2c) + -1 + iVar3);
          iVar4 = iVar3;
        } while (iVar3 < (int)DAT_104e98d8);
      }
      iVar4 = FUN_1000d6a0(*(undefined4 *)(iVar5 + 4),&local_8);
      if (iVar4 == 0) {
        return 0;
      }
      local_4 = 0;
      iVar4 = FUN_10013e20(iVar5,iVar5,local_c40);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_1000c2e0(local_8);
      *(undefined4 *)(iVar5 + 0x40) = 1;
      if (DAT_104e98e0 != 0) {
        (*DAT_1014e35c)(s_Portal___4i___Fast_Vis___4i__Ful_1003a618,iVar1 + 1,
                        *(undefined4 *)(iVar5 + 0x38),*(undefined4 *)(iVar5 + 0x3c));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)DAT_104e98c8);
  }
  return 1;
}

