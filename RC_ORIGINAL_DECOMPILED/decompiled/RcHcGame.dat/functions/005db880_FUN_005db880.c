/*
 * FUN_005db880 at 005db880
 * undefined FUN_005db880(void)
 * Address ranges: 005db880-005dbca4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005db880(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  
  local_40 = DAT_0070f840;
  local_44 = DAT_0070f890;
  iVar2 = FUN_005c3350(0);
  if (iVar2 != 0) {
    if (local_18 == 2) {
      puVar3 = (undefined1 *)FUN_005c0d90();
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      iVar7 = local_1c - DAT_0070f860;
      local_2c = iVar7;
      iVar2 = FUN_005c6a90();
      if (iVar2 == 0) {
        if ((DAT_0070f884 != 0) && (DAT_0070f83c != 0)) {
          if (*(int *)(DAT_0070f880 + 0x18) == 0) {
            if (*(int *)(DAT_0070f854 + 0x18) != 0) {
              uVar1 = *(uint *)(DAT_0070f854 + 0x1c);
              iVar2 = DAT_0070f860;
              iVar7 = DAT_0070f860;
              iVar4 = DAT_0070f864;
              if (DAT_0070f864 == 0) {
                return 1;
              }
              do {
                for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                  (*DAT_0070f888)(&local_40,&local_34,&local_38,&local_3c,local_30);
                  uVar5 = (*DAT_0070f838)(local_34,local_38,local_3c,0xff);
                  if (uVar5 == uVar1) {
                    uVar5 = uVar5 ^ 1;
                  }
                  *puVar3 = local_30[0];
                  puVar3 = puVar3 + 1;
                  (*DAT_0070f870)(&local_44,uVar5);
                  iVar7 = DAT_0070f860;
                }
                local_40 = local_40 + DAT_0070f89c;
                local_44 = local_44 + DAT_0070f8a0;
                puVar3 = puVar3 + local_2c;
                iVar4 = iVar4 + -1;
                iVar2 = iVar7;
              } while (iVar4 != 0);
              return 1;
            }
          }
          else if (*(int *)(DAT_0070f854 + 0x18) != 0) {
            uVar1 = *(uint *)(DAT_0070f854 + 0x1c);
            local_28 = *(int *)(DAT_0070f880 + 0x1c);
            iVar2 = DAT_0070f860;
            iVar4 = DAT_0070f860;
            local_2c = DAT_0070f864;
            if (DAT_0070f864 == 0) {
              return 1;
            }
            do {
              for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                iVar4 = (*DAT_0070f878)(&local_40);
                if (iVar4 == local_28) {
                  *puVar3 = 0;
                  (*DAT_0070f870)(&local_44,uVar1);
                }
                else {
                  (*DAT_0070f874)(iVar4,&local_34,&local_38,&local_3c,local_30);
                  uVar5 = (*DAT_0070f838)(local_34,local_38,local_3c,0xff);
                  if (uVar5 == uVar1) {
                    uVar5 = uVar5 ^ 1;
                  }
                  (*DAT_0070f870)(&local_44,uVar5);
                  *puVar3 = local_30[0];
                }
                puVar3 = puVar3 + 1;
                iVar4 = DAT_0070f860;
              }
              local_40 = local_40 + DAT_0070f89c;
              puVar3 = puVar3 + iVar7;
              local_44 = local_44 + DAT_0070f8a0;
              local_2c = local_2c + -1;
              iVar2 = iVar4;
            } while (local_2c != 0);
            return 1;
          }
          iVar2 = DAT_0070f860;
          iVar7 = DAT_0070f864;
          if (*(int *)(DAT_0070f880 + 0x18) == 0) {
            for (; iVar4 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                (*DAT_0070f888)(&local_40,&local_34,&local_38,&local_3c,local_30);
                (*DAT_0070f87c)(&local_44,local_34,local_38,local_3c,0xff);
                *puVar3 = local_30[0];
                puVar3 = puVar3 + 1;
                iVar2 = DAT_0070f860;
              }
              local_44 = local_44 + DAT_0070f8a0;
              local_40 = local_40 + DAT_0070f89c;
              puVar3 = puVar3 + local_2c;
            }
          }
          else {
            iVar2 = *(int *)(DAT_0070f880 + 0x1c);
            iVar7 = DAT_0070f860;
            iVar4 = DAT_0070f860;
            iVar6 = DAT_0070f864;
            if (DAT_0070f864 != 0) {
              do {
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  iVar4 = (*DAT_0070f878)(&local_40);
                  if (iVar4 == iVar2) {
                    *puVar3 = 0;
                    (*DAT_0070f87c)(&local_44,0,0,0,0);
                  }
                  else {
                    (*DAT_0070f874)(iVar4,&local_34,&local_38,&local_3c,local_30);
                    (*DAT_0070f87c)(&local_44,local_34,local_38,local_3c,0xff);
                    *puVar3 = local_30[0];
                  }
                  puVar3 = puVar3 + 1;
                  iVar4 = DAT_0070f860;
                }
                local_40 = local_40 + DAT_0070f89c;
                local_44 = local_44 + DAT_0070f8a0;
                puVar3 = puVar3 + local_2c;
                iVar6 = iVar6 + -1;
                iVar7 = iVar4;
              } while (iVar6 != 0);
              return 1;
            }
          }
          return 1;
        }
        uVar8 = 0x3d0;
      }
      else {
        uVar8 = 0x3c1;
      }
    }
    else {
      uVar8 = 0x3b3;
    }
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b0764,uVar8,
                 &DAT_006b3f70,0);
  }
  return 0;
}

