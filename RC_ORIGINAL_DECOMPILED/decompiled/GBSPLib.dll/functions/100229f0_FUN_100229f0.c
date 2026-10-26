/*
 * FUN_100229f0 at 100229f0
 * undefined FUN_100229f0(void)
 * Address ranges: 100229f0-10023272
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100229f0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *local_344;
  byte *local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  uint local_328;
  int local_31c;
  int local_318;
  byte local_300 [768];
  
  local_340 = DAT_1052a16c;
  local_344 = DAT_1052a1b4;
  iVar6 = FUN_10018c60(0);
  if (iVar6 != 0) {
    if (local_318 == 2) {
      pbVar7 = (byte *)FUN_10016ac0();
      if (pbVar7 == (byte *)0x0) {
        return 0;
      }
      iVar6 = local_31c - DAT_1052a184;
      local_32c = iVar6;
      iVar8 = FUN_100203f0();
      if (iVar8 != 0) {
        if (DAT_1052a1bc == DAT_1052a1b8) {
          bVar1 = *(byte *)(DAT_1052a17c + 0x1c);
          iVar6 = DAT_1052a184;
          for (iVar8 = DAT_1052a188; iVar9 = iVar6, iVar8 != 0; iVar8 = iVar8 + -1) {
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              bVar2 = *local_340;
              local_340 = local_340 + 1;
              bVar3 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              if (bVar3 < 0x50) {
                *local_344 = bVar1;
              }
              else {
                *local_344 = bVar2;
              }
              local_344 = local_344 + 1;
              iVar6 = DAT_1052a184;
            }
            local_340 = local_340 + DAT_1052a1b0;
            local_344 = local_344 + DAT_1052a1c4;
            pbVar7 = pbVar7 + local_32c;
          }
          return 1;
        }
        if (DAT_1052a1bc == 1) {
          iVar6 = FUN_10019f30(9,0x100);
          if (iVar6 == 0) {
            return 0;
          }
          iVar9 = FUN_10020410();
          local_328 = DAT_1052a188;
          iVar6 = DAT_1052a184;
          iVar8 = DAT_1052a188;
          if (iVar9 == 0) {
            if (*(int *)(DAT_1052a17c + 0x18) != 0) {
              uVar4 = *(uint *)(DAT_1052a17c + 0x1c);
              iVar8 = DAT_1052a184;
              if (DAT_1052a188 == 0) {
                return 1;
              }
              do {
                for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                  bVar1 = *local_340;
                  local_340 = local_340 + 1;
                  iVar8 = (uint)bVar1 * 3;
                  local_330 = (uint)local_300[iVar8];
                  local_338 = (uint)local_300[iVar8 + 1];
                  local_334 = (uint)local_300[iVar8 + 2];
                  bVar1 = *pbVar7;
                  local_33c = (uint)bVar1;
                  pbVar7 = pbVar7 + 1;
                  uVar10 = uVar4;
                  if ((0x7f < bVar1) &&
                     (uVar10 = (*DAT_1052a164)(local_330,local_338,local_334,0xff), uVar10 == uVar4)
                     ) {
                    uVar10 = uVar10 ^ 1;
                  }
                  (*DAT_1052a194)(&local_344,uVar10);
                  iVar8 = DAT_1052a184;
                }
                local_340 = local_340 + DAT_1052a1b0;
                local_344 = local_344 + DAT_1052a1c4;
                pbVar7 = pbVar7 + local_32c;
                local_328 = local_328 + -1;
                iVar6 = iVar8;
              } while (local_328 != 0);
              return 1;
            }
          }
          else if (*(int *)(DAT_1052a17c + 0x18) != 0) {
            uVar4 = *(uint *)(DAT_1052a17c + 0x1c);
            iVar8 = DAT_1052a184;
            if (DAT_1052a188 == 0) {
              return 1;
            }
            do {
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                uVar10 = (uint)*local_340;
                local_340 = local_340 + 1;
                local_330 = (uint)local_300[uVar10 * 2 + (uVar10 - 0x300) + 0x300];
                iVar8 = uVar10 * 2 + (uVar10 - 0x300);
                local_338 = (uint)local_300[iVar8 + 0x301];
                local_334 = (uint)local_300[iVar8 + 0x302];
                local_33c = (uint)*pbVar7;
                pbVar7 = pbVar7 + 1;
                uVar10 = (*DAT_1052a164)(local_330,local_338,local_334,local_33c);
                if (uVar10 == uVar4) {
                  uVar10 = uVar10 ^ 1;
                }
                (*DAT_1052a194)(&local_344,uVar10);
                iVar8 = DAT_1052a184;
              }
              local_344 = local_344 + DAT_1052a1c4;
              local_340 = local_340 + DAT_1052a1b0;
              pbVar7 = pbVar7 + local_32c;
              local_328 = local_328 + -1;
              iVar6 = iVar8;
            } while (local_328 != 0);
            return 1;
          }
          for (; iVar9 = iVar6, iVar8 != 0; iVar8 = iVar8 + -1) {
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              bVar1 = *local_340;
              local_340 = local_340 + 1;
              iVar6 = (uint)bVar1 * 3;
              local_330 = (uint)local_300[iVar6];
              local_338 = (uint)local_300[iVar6 + 1];
              local_334 = (uint)local_300[iVar6 + 2];
              local_33c = (uint)*pbVar7;
              pbVar7 = pbVar7 + 1;
              (*DAT_1052a1a0)(&local_344,local_330,local_338,local_334,local_33c);
              iVar6 = DAT_1052a184;
            }
            local_344 = local_344 + DAT_1052a1c4;
            local_340 = local_340 + DAT_1052a1b0;
            pbVar7 = pbVar7 + local_32c;
          }
          return 1;
        }
        return 0;
      }
      iVar8 = FUN_100203f0();
      if (iVar8 == 0) {
        if (DAT_1052a1a8 == 0) {
          uVar11 = 0x2a1;
        }
        else {
          if (((DAT_1052a168 != 0) && (DAT_1052a1a0 != (code *)0x0)) &&
             (DAT_1052a164 != (code *)0x0)) {
            if (*(int *)(DAT_1052a18c + 0xc) == 0) {
              uVar4 = *(uint *)(DAT_1052a1a4 + 0x1c);
              local_328 = *(uint *)(DAT_1052a17c + 0x1c);
              iVar6 = DAT_1052a184;
              for (iVar8 = DAT_1052a188; iVar9 = iVar6, iVar8 != 0; iVar8 = iVar8 + -1) {
                for (; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (*DAT_1052a1ac)(&local_340,&local_330,&local_338,&local_334,&local_33c);
                  bVar1 = *pbVar7;
                  local_33c = (uint)bVar1;
                  pbVar7 = pbVar7 + 1;
                  uVar10 = local_328;
                  if ((0x7f < bVar1) &&
                     (uVar10 = (*DAT_1052a164)(local_330,local_338,local_334,0xff), uVar10 == uVar4)
                     ) {
                    uVar10 = uVar10 ^ 1;
                  }
                  (*DAT_1052a194)(&local_344,uVar10);
                  iVar6 = DAT_1052a184;
                }
                local_340 = local_340 + DAT_1052a1c0;
                pbVar7 = pbVar7 + local_32c;
                local_344 = local_344 + DAT_1052a1c4;
              }
              return 1;
            }
            if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
              if (*(int *)(DAT_1052a17c + 0x18) != 0) {
                uVar4 = *(uint *)(DAT_1052a17c + 0x1c);
                iVar6 = DAT_1052a184;
                for (iVar8 = DAT_1052a188; iVar9 = iVar6, iVar8 != 0; iVar8 = iVar8 + -1) {
                  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
                    (*DAT_1052a1ac)(&local_340,&local_330,&local_338,&local_334,&local_33c);
                    local_33c = (uint)*pbVar7;
                    pbVar7 = pbVar7 + 1;
                    uVar10 = (*DAT_1052a164)(local_330,local_338,local_334,local_33c);
                    if (uVar10 == uVar4) {
                      uVar10 = uVar10 ^ 1;
                    }
                    (*DAT_1052a194)(&local_344,uVar10);
                    iVar6 = DAT_1052a184;
                  }
                  local_340 = local_340 + DAT_1052a1c0;
                  local_344 = local_344 + DAT_1052a1c4;
                  pbVar7 = pbVar7 + local_32c;
                }
                return 1;
              }
            }
            else if (*(int *)(DAT_1052a17c + 0x18) != 0) {
              uVar4 = *(uint *)(DAT_1052a17c + 0x1c);
              local_328 = *(int *)(DAT_1052a1a4 + 0x1c);
              iVar8 = DAT_1052a184;
              for (iVar9 = DAT_1052a188; iVar5 = iVar8, iVar9 != 0; iVar9 = iVar9 + -1) {
                for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                  iVar6 = (*DAT_1052a19c)(&local_340);
                  uVar10 = uVar4;
                  if (iVar6 != local_328) {
                    (*DAT_1052a198)(iVar6,&local_330,&local_338,&local_334,&local_33c);
                    local_33c = (uint)*pbVar7;
                    uVar10 = (*DAT_1052a164)(local_330,local_338,local_334,local_33c);
                    if (uVar10 == uVar4) {
                      uVar10 = uVar10 ^ 1;
                    }
                  }
                  pbVar7 = pbVar7 + 1;
                  (*DAT_1052a194)(&local_344,uVar10);
                  iVar8 = DAT_1052a184;
                  iVar6 = local_32c;
                }
                local_340 = local_340 + DAT_1052a1c0;
                local_344 = local_344 + DAT_1052a1c4;
                pbVar7 = pbVar7 + iVar6;
              }
              return 1;
            }
            iVar6 = DAT_1052a184;
            iVar8 = DAT_1052a188;
            if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
              for (; iVar9 = iVar6, iVar8 != 0; iVar8 = iVar8 + -1) {
                for (; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (*DAT_1052a1ac)(&local_340,&local_330,&local_338,&local_334,&local_33c);
                  local_33c = (uint)*pbVar7;
                  pbVar7 = pbVar7 + 1;
                  (*DAT_1052a1a0)(&local_344,local_330,local_338,local_334,local_33c);
                  iVar6 = DAT_1052a184;
                }
                local_344 = local_344 + DAT_1052a1c4;
                local_340 = local_340 + DAT_1052a1c0;
                pbVar7 = pbVar7 + local_32c;
              }
              return 1;
            }
            iVar6 = *(int *)(DAT_1052a1a4 + 0x1c);
            iVar8 = DAT_1052a184;
            for (iVar9 = DAT_1052a188; iVar5 = iVar8, iVar9 != 0; iVar9 = iVar9 + -1) {
              for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                iVar8 = (*DAT_1052a19c)(&local_340);
                if (iVar8 == iVar6) {
                  (*DAT_1052a1a0)(&local_344,0,0,0,0);
                }
                else {
                  (*DAT_1052a198)(iVar8,&local_330,&local_338,&local_334,&local_33c);
                  local_33c = (uint)*pbVar7;
                  (*DAT_1052a1a0)(&local_344,local_330,local_338,local_334,local_33c);
                }
                pbVar7 = pbVar7 + 1;
                iVar8 = DAT_1052a184;
              }
              local_340 = local_340 + DAT_1052a1c0;
              local_344 = local_344 + DAT_1052a1c4;
              pbVar7 = pbVar7 + local_32c;
            }
            return 1;
          }
          uVar11 = 0x2a6;
        }
      }
      else {
        uVar11 = 0x29b;
      }
    }
    else {
      uVar11 = 0x206;
    }
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,uVar11,&DAT_10265ce0
                 ,0);
  }
  return 0;
}

