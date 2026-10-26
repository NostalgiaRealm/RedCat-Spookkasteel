/*
 * FUN_10023280 at 10023280
 * undefined FUN_10023280(void)
 * Address ranges: 10023280-100236a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10023280(void)

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
  
  local_40 = DAT_1052a16c;
  local_44 = DAT_1052a1b4;
  iVar2 = FUN_10018c60(0);
  if (iVar2 != 0) {
    if (local_18 == 2) {
      puVar3 = (undefined1 *)FUN_10016ac0();
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      iVar7 = local_1c - DAT_1052a184;
      local_2c = iVar7;
      iVar2 = FUN_100203f0();
      if (iVar2 == 0) {
        if ((DAT_1052a1a8 != 0) && (DAT_1052a168 != 0)) {
          if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
            if (*(int *)(DAT_1052a17c + 0x18) != 0) {
              uVar1 = *(uint *)(DAT_1052a17c + 0x1c);
              iVar2 = DAT_1052a184;
              iVar7 = DAT_1052a184;
              iVar4 = DAT_1052a188;
              if (DAT_1052a188 == 0) {
                return 1;
              }
              do {
                for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                  (*DAT_1052a1ac)(&local_40,&local_34,&local_38,&local_3c,local_30);
                  uVar5 = (*DAT_1052a164)(local_34,local_38,local_3c,0xff);
                  if (uVar5 == uVar1) {
                    uVar5 = uVar5 ^ 1;
                  }
                  *puVar3 = local_30[0];
                  puVar3 = puVar3 + 1;
                  (*DAT_1052a194)(&local_44,uVar5);
                  iVar7 = DAT_1052a184;
                }
                local_40 = local_40 + DAT_1052a1c0;
                local_44 = local_44 + DAT_1052a1c4;
                puVar3 = puVar3 + local_2c;
                iVar4 = iVar4 + -1;
                iVar2 = iVar7;
              } while (iVar4 != 0);
              return 1;
            }
          }
          else if (*(int *)(DAT_1052a17c + 0x18) != 0) {
            uVar1 = *(uint *)(DAT_1052a17c + 0x1c);
            local_28 = *(int *)(DAT_1052a1a4 + 0x1c);
            iVar2 = DAT_1052a184;
            iVar4 = DAT_1052a184;
            local_2c = DAT_1052a188;
            if (DAT_1052a188 == 0) {
              return 1;
            }
            do {
              for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                iVar4 = (*DAT_1052a19c)(&local_40);
                if (iVar4 == local_28) {
                  *puVar3 = 0;
                  (*DAT_1052a194)(&local_44,uVar1);
                }
                else {
                  (*DAT_1052a198)(iVar4,&local_34,&local_38,&local_3c,local_30);
                  uVar5 = (*DAT_1052a164)(local_34,local_38,local_3c,0xff);
                  if (uVar5 == uVar1) {
                    uVar5 = uVar5 ^ 1;
                  }
                  (*DAT_1052a194)(&local_44,uVar5);
                  *puVar3 = local_30[0];
                }
                puVar3 = puVar3 + 1;
                iVar4 = DAT_1052a184;
              }
              local_40 = local_40 + DAT_1052a1c0;
              puVar3 = puVar3 + iVar7;
              local_44 = local_44 + DAT_1052a1c4;
              local_2c = local_2c + -1;
              iVar2 = iVar4;
            } while (local_2c != 0);
            return 1;
          }
          iVar2 = DAT_1052a184;
          iVar7 = DAT_1052a188;
          if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
            for (; iVar4 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                (*DAT_1052a1ac)(&local_40,&local_34,&local_38,&local_3c,local_30);
                (*DAT_1052a1a0)(&local_44,local_34,local_38,local_3c,0xff);
                *puVar3 = local_30[0];
                puVar3 = puVar3 + 1;
                iVar2 = DAT_1052a184;
              }
              local_44 = local_44 + DAT_1052a1c4;
              local_40 = local_40 + DAT_1052a1c0;
              puVar3 = puVar3 + local_2c;
            }
          }
          else {
            iVar2 = *(int *)(DAT_1052a1a4 + 0x1c);
            iVar7 = DAT_1052a184;
            iVar4 = DAT_1052a184;
            iVar6 = DAT_1052a188;
            if (DAT_1052a188 != 0) {
              do {
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  iVar4 = (*DAT_1052a19c)(&local_40);
                  if (iVar4 == iVar2) {
                    *puVar3 = 0;
                    (*DAT_1052a1a0)(&local_44,0,0,0,0);
                  }
                  else {
                    (*DAT_1052a198)(iVar4,&local_34,&local_38,&local_3c,local_30);
                    (*DAT_1052a1a0)(&local_44,local_34,local_38,local_3c,0xff);
                    *puVar3 = local_30[0];
                  }
                  puVar3 = puVar3 + 1;
                  iVar4 = DAT_1052a184;
                }
                local_40 = local_40 + DAT_1052a1c0;
                local_44 = local_44 + DAT_1052a1c4;
                puVar3 = puVar3 + local_2c;
                iVar6 = iVar6 + -1;
                iVar7 = iVar4;
              } while (iVar6 != 0);
              return 1;
            }
          }
          return 1;
        }
        uVar8 = 0x37e;
      }
      else {
        uVar8 = 0x373;
      }
    }
    else {
      uVar8 = 0x365;
    }
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,uVar8,&DAT_10265ce0,
                 0);
  }
  return 0;
}

