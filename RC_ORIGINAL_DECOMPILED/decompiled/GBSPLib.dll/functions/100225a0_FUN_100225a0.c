/*
 * FUN_100225a0 at 100225a0
 * undefined FUN_100225a0(void)
 * Address ranges: 100225a0-100229e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100225a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_1052a178 != 0) && (DAT_1052a18c != 0)) {
    local_14 = DAT_1052a16c;
    local_18 = DAT_1052a1b4;
    if ((DAT_1052a1a8 != 0) && (DAT_1052a168 != 0)) {
      if (((*(int *)(DAT_1052a178 + 0xc) != 0) && (*(int *)(DAT_1052a18c + 0xc) == 0)) &&
         (*(int *)(DAT_1052a17c + 0x18) != 0)) {
        uVar1 = *(uint *)(DAT_1052a17c + 0x1c);
        iVar6 = DAT_1052a184;
        for (iVar5 = DAT_1052a188; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            (*DAT_1052a1ac)(&local_14,&local_4,&local_8,&local_c,&local_10);
            uVar3 = uVar1;
            if ((0x4f < local_10) &&
               (uVar3 = (*DAT_1052a164)(local_4,local_8,local_c,local_10), uVar3 == uVar1)) {
              uVar3 = uVar3 ^ 1;
            }
            (*DAT_1052a194)(&local_18,uVar3);
            iVar6 = DAT_1052a184;
          }
          local_14 = local_14 + DAT_1052a1c0;
          local_18 = local_18 + DAT_1052a1c4;
        }
        return 1;
      }
      if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
        if (*(int *)(DAT_1052a17c + 0x18) != 0) {
          uVar1 = *(uint *)(DAT_1052a17c + 0x1c);
          iVar6 = DAT_1052a184;
          for (iVar5 = DAT_1052a188; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              (*DAT_1052a1ac)(&local_14,&local_4,&local_8,&local_c,&local_10);
              uVar3 = (*DAT_1052a164)(local_4,local_8,local_c,local_10);
              if (uVar3 == uVar1) {
                uVar3 = uVar3 ^ 1;
              }
              (*DAT_1052a194)(&local_18,uVar3);
              iVar6 = DAT_1052a184;
            }
            local_14 = local_14 + DAT_1052a1c0;
            local_18 = local_18 + DAT_1052a1c4;
          }
          return 1;
        }
      }
      else if (*(int *)(DAT_1052a17c + 0x18) != 0) {
        uVar1 = *(uint *)(DAT_1052a17c + 0x1c);
        iVar5 = *(int *)(DAT_1052a1a4 + 0x1c);
        iVar4 = DAT_1052a184;
        for (iVar6 = DAT_1052a188; iVar2 = iVar4, iVar6 != 0; iVar6 = iVar6 + -1) {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar4 = (*DAT_1052a19c)(&local_14);
            uVar3 = uVar1;
            if (iVar4 != iVar5) {
              (*DAT_1052a198)(iVar4,&local_4,&local_8,&local_c,&local_10);
              uVar3 = (*DAT_1052a164)(local_4,local_8,local_c,local_10);
              if (uVar3 == uVar1) {
                uVar3 = uVar3 ^ 1;
              }
            }
            (*DAT_1052a194)(&local_18,uVar3);
            iVar4 = DAT_1052a184;
          }
          local_14 = local_14 + DAT_1052a1c0;
          local_18 = local_18 + DAT_1052a1c4;
        }
        return 1;
      }
      iVar5 = DAT_1052a188;
      iVar6 = DAT_1052a184;
      if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
        for (; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            (*DAT_1052a1ac)(&local_14,&local_4,&local_8,&local_c,&local_10);
            (*DAT_1052a1a0)(&local_18,local_4,local_8,local_c,local_10);
            iVar6 = DAT_1052a184;
          }
          local_14 = local_14 + DAT_1052a1c0;
          local_18 = local_18 + DAT_1052a1c4;
        }
        return 1;
      }
      iVar5 = *(int *)(DAT_1052a1a4 + 0x1c);
      iVar4 = DAT_1052a184;
      for (iVar6 = DAT_1052a188; iVar2 = iVar4, iVar6 != 0; iVar6 = iVar6 + -1) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          iVar4 = (*DAT_1052a19c)(&local_14);
          if (iVar4 == iVar5) {
            (*DAT_1052a1a0)(&local_18,0,0,0,0);
          }
          else {
            (*DAT_1052a198)(iVar4,&local_4,&local_8,&local_c,&local_10);
            (*DAT_1052a1a0)(&local_18,local_4,local_8,local_c,local_10);
          }
          iVar4 = DAT_1052a184;
        }
        local_14 = local_14 + DAT_1052a1c0;
        local_18 = local_18 + DAT_1052a1c4;
      }
      return 1;
    }
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,0x165,&DAT_10265ce0,
                 0);
  }
  return 0;
}

