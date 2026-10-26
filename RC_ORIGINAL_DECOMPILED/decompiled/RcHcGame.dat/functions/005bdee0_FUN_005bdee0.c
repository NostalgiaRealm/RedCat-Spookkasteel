/*
 * FUN_005bdee0 at 005bdee0
 * undefined FUN_005bdee0(void)
 * Address ranges: 005bdee0-005be53d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005bdee0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  uint local_10c;
  int local_108;
  undefined4 local_104;
  char local_100 [6];
  undefined1 local_fa [3];
  undefined1 local_f7 [3];
  undefined1 local_f4;
  undefined1 local_f3 [243];
  
  iVar2 = FUN_005cd390(4);
  if (iVar2 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x5e6,&DAT_006b3f70,
                 0);
    return 0;
  }
  if (local_110 != 0x4e544f4d) {
    if (local_110 != 0x424e544d) {
      FUN_005cf220(0x49,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x6a6,
                   &DAT_006b3f70,0);
      return 0;
    }
    iVar2 = FUN_005be540();
    return iVar2;
  }
  iVar5 = 0;
  local_118 = 0;
  local_11c = 0;
  iVar2 = FUN_005bd440();
  if (iVar2 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x5f4,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar3 = FUN_005cd370(0x100);
  if (iVar3 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x5fb,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar3 = FUN_0060b449(local_100,s__X__X_006a979c,&local_110,&local_10c);
  if (iVar3 != 2) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x600,&DAT_006b3f70,
                 0);
    return 0;
  }
  local_10c = local_10c | local_110 << 8;
  if (0xef < local_10c) {
    local_118 = 6;
  }
  iVar3 = FUN_005bd630();
  if (iVar3 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x60c,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_118 != 0) {
    do {
      iVar3 = FUN_005cd370(0x100);
      if (iVar3 == 0) {
        uVar8 = 0x615;
        uVar7 = 0x47;
LAB_005be4aa:
        FUN_005cf220(uVar7,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,uVar8,
                     &DAT_006b3f70,0);
        break;
      }
      iVar3 = FUN_0060d260(local_100,s_NameID_006a9794,6);
      if (iVar3 == 0) {
        if (local_100[0] != '\0') {
          uVar4 = 0xffffffff;
          pcVar6 = local_100;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_100[~uVar4 - 2] = '\0';
          if (local_100[0] != '\0') {
            uVar4 = 0xffffffff;
            pcVar6 = local_100;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (local_100[~uVar4 - 2] == '\r') {
              local_100[~uVar4 - 2] = '\0';
            }
          }
        }
        uVar4 = 0xffffffff;
        pcVar6 = local_100;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if ((7 < ~uVar4 - 1) && (iVar3 = FUN_005bd3b0(), iVar3 == 0)) {
          uVar8 = 0x629;
          uVar7 = 0x47;
          goto LAB_005be4aa;
        }
      }
      else {
        iVar3 = FUN_0060d260(local_100,s_MaintainNames_006a9784,0xd);
        if (iVar3 == 0) {
          iVar3 = FUN_0060b449(local_f3,&DAT_00690818,iVar2 + 8);
          if (iVar3 != 1) {
            uVar8 = 0x634;
            uVar7 = 0x47;
            goto LAB_005be4aa;
          }
          iVar5 = iVar5 + 1;
          local_11c = iVar5;
        }
        else {
          iVar3 = FUN_0060d260(local_100,s_PathCount_006a9778,9);
          if (iVar3 == 0) {
            iVar3 = FUN_0060b449(local_f7,&DAT_00690818,iVar2 + 0x10);
            if (iVar3 != 1) {
              uVar8 = 0x63d;
              uVar7 = 0x47;
              goto LAB_005be4aa;
            }
            iVar5 = iVar5 + 1;
            local_11c = iVar5;
          }
          else {
            iVar3 = FUN_0060d260(local_100,s_NameChecksum_006a9768,0xc);
            if (iVar3 == 0) {
              iVar3 = FUN_0060b449(&local_f4,&DAT_00690818,iVar2 + 0x14);
              if (iVar3 != 1) {
                uVar8 = 0x646;
                uVar7 = 0x47;
                goto LAB_005be4aa;
              }
              iVar5 = iVar5 + 1;
              local_11c = iVar5;
            }
            else {
              iVar3 = FUN_0060d260(local_100,s_Events_006a9760,6);
              if (iVar3 == 0) {
                iVar3 = FUN_0060b449(local_fa,&DAT_00690818,&local_108);
                if (iVar3 != 1) {
                  uVar8 = 0x650;
                  uVar7 = 0x47;
                  goto LAB_005be4aa;
                }
                if (local_108 != 0) {
                  uVar7 = FUN_005d6f50();
                  *(undefined4 *)(iVar2 + 0x18) = uVar7;
                  if (*(int *)(iVar2 + 0x18) == 0) {
                    uVar8 = 0x658;
                    uVar7 = 0x47;
                    goto LAB_005be4aa;
                  }
                }
                iVar5 = iVar5 + 1;
                local_11c = iVar5;
              }
              else {
                iVar3 = FUN_0060d260(local_100,s_NameArray_006a9754,9);
                if (iVar3 == 0) {
                  iVar3 = FUN_0060b449(local_f7,&DAT_00690818,&local_104);
                  if (iVar3 != 1) {
                    uVar8 = 0x663;
                    uVar7 = 0x47;
                    goto LAB_005be4aa;
                  }
                  if (local_104 != 0) {
                    uVar7 = FUN_005d1b20();
                    *(undefined4 *)(iVar2 + 0x1c) = uVar7;
                    if (*(int *)(iVar2 + 0x1c) == 0) {
                      uVar8 = 0x66b;
                      uVar7 = 0x47;
                      goto LAB_005be4aa;
                    }
                  }
                  iVar5 = iVar5 + 1;
                  local_11c = iVar5;
                }
                else {
                  iVar3 = FUN_0060d260(local_100,s_PathArray_006a9748,9);
                  if (iVar3 == 0) {
                    iVar3 = FUN_0060b449(local_f7,&DAT_00690818,&local_114);
                    if (iVar3 == 1) {
                      uVar7 = FUN_005cf3b0(local_114 * 4);
                      *(undefined4 *)(iVar2 + 0x20) = uVar7;
                      if (*(int *)(iVar2 + 0x20) != 0) {
                        iVar5 = 0;
                        if (0 < local_114) {
                          do {
                            uVar7 = FUN_005c6290();
                            *(undefined4 *)(*(int *)(iVar2 + 0x20) + iVar5 * 4) = uVar7;
                            if (*(int *)(*(int *)(iVar2 + 0x20) + iVar5 * 4) == 0) {
                              FUN_005cf220(0x47,&DAT_006b3f70,
                                           s_C__Genesis3D_OpenSource_Source_A_006a9718,0x688,
                                           &DAT_006b3f70,0);
                              break;
                            }
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < local_114);
                        }
                        iVar5 = local_11c + 1;
                        local_11c = iVar5;
                        goto LAB_005be36d;
                      }
                      uVar8 = 0x67e;
                      uVar7 = 0x42;
                    }
                    else {
                      uVar8 = 0x676;
                      uVar7 = 0x47;
                    }
                    goto LAB_005be4aa;
                  }
                }
              }
            }
          }
        }
      }
LAB_005be36d:
    } while (iVar5 < local_118);
  }
  if (local_118 != iVar5) {
    FUN_005cf220(0x49,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x699,&DAT_006b3f70,
                 0);
    FUN_005bd500();
    return 0;
  }
  return iVar2;
}

