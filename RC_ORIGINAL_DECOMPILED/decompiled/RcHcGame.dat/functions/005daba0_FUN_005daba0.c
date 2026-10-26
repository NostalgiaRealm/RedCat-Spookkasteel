/*
 * FUN_005daba0 at 005daba0
 * undefined FUN_005daba0(void)
 * Address ranges: 005daba0-005dafe2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005daba0(void)

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
  
  if ((DAT_0070f850 != 0) && (DAT_0070f868 != 0)) {
    local_14 = DAT_0070f840;
    local_18 = DAT_0070f890;
    if ((DAT_0070f884 != 0) && (DAT_0070f83c != 0)) {
      if (((*(int *)(DAT_0070f850 + 0xc) != 0) && (*(int *)(DAT_0070f868 + 0xc) == 0)) &&
         (*(int *)(DAT_0070f854 + 0x18) != 0)) {
        uVar1 = *(uint *)(DAT_0070f854 + 0x1c);
        iVar6 = DAT_0070f860;
        for (iVar5 = DAT_0070f864; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            (*DAT_0070f888)(&local_14,&local_4,&local_8,&local_c,&local_10);
            uVar3 = uVar1;
            if ((0x4f < local_10) &&
               (uVar3 = (*DAT_0070f838)(local_4,local_8,local_c,local_10), uVar3 == uVar1)) {
              uVar3 = uVar3 ^ 1;
            }
            (*DAT_0070f870)(&local_18,uVar3);
            iVar6 = DAT_0070f860;
          }
          local_14 = local_14 + DAT_0070f89c;
          local_18 = local_18 + DAT_0070f8a0;
        }
        return 1;
      }
      if (*(int *)(DAT_0070f880 + 0x18) == 0) {
        if (*(int *)(DAT_0070f854 + 0x18) != 0) {
          uVar1 = *(uint *)(DAT_0070f854 + 0x1c);
          iVar6 = DAT_0070f860;
          for (iVar5 = DAT_0070f864; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              (*DAT_0070f888)(&local_14,&local_4,&local_8,&local_c,&local_10);
              uVar3 = (*DAT_0070f838)(local_4,local_8,local_c,local_10);
              if (uVar3 == uVar1) {
                uVar3 = uVar3 ^ 1;
              }
              (*DAT_0070f870)(&local_18,uVar3);
              iVar6 = DAT_0070f860;
            }
            local_14 = local_14 + DAT_0070f89c;
            local_18 = local_18 + DAT_0070f8a0;
          }
          return 1;
        }
      }
      else if (*(int *)(DAT_0070f854 + 0x18) != 0) {
        uVar1 = *(uint *)(DAT_0070f854 + 0x1c);
        iVar5 = *(int *)(DAT_0070f880 + 0x1c);
        iVar4 = DAT_0070f860;
        for (iVar6 = DAT_0070f864; iVar2 = iVar4, iVar6 != 0; iVar6 = iVar6 + -1) {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar4 = (*DAT_0070f878)(&local_14);
            uVar3 = uVar1;
            if (iVar4 != iVar5) {
              (*DAT_0070f874)(iVar4,&local_4,&local_8,&local_c,&local_10);
              uVar3 = (*DAT_0070f838)(local_4,local_8,local_c,local_10);
              if (uVar3 == uVar1) {
                uVar3 = uVar3 ^ 1;
              }
            }
            (*DAT_0070f870)(&local_18,uVar3);
            iVar4 = DAT_0070f860;
          }
          local_14 = local_14 + DAT_0070f89c;
          local_18 = local_18 + DAT_0070f8a0;
        }
        return 1;
      }
      iVar5 = DAT_0070f864;
      iVar6 = DAT_0070f860;
      if (*(int *)(DAT_0070f880 + 0x18) == 0) {
        for (; iVar4 = iVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            (*DAT_0070f888)(&local_14,&local_4,&local_8,&local_c,&local_10);
            (*DAT_0070f87c)(&local_18,local_4,local_8,local_c,local_10);
            iVar6 = DAT_0070f860;
          }
          local_14 = local_14 + DAT_0070f89c;
          local_18 = local_18 + DAT_0070f8a0;
        }
        return 1;
      }
      iVar5 = *(int *)(DAT_0070f880 + 0x1c);
      iVar4 = DAT_0070f860;
      for (iVar6 = DAT_0070f864; iVar2 = iVar4, iVar6 != 0; iVar6 = iVar6 + -1) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          iVar4 = (*DAT_0070f878)(&local_14);
          if (iVar4 == iVar5) {
            (*DAT_0070f87c)(&local_18,0,0,0,0);
          }
          else {
            (*DAT_0070f874)(iVar4,&local_4,&local_8,&local_c,&local_10);
            (*DAT_0070f87c)(&local_18,local_4,local_8,local_c,local_10);
          }
          iVar4 = DAT_0070f860;
        }
        local_14 = local_14 + DAT_0070f89c;
        local_18 = local_18 + DAT_0070f8a0;
      }
      return 1;
    }
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b0764,0x1af,
                 &DAT_006b3f70,0);
  }
  return 0;
}

