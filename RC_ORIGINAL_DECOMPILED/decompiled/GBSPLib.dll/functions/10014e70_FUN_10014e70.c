/*
 * FUN_10014e70 at 10014e70
 * undefined FUN_10014e70(void)
 * Address ranges: 10014e70-100154cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10014e70(void)

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
  
  iVar2 = FUN_10014a00(4);
  if (iVar2 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x5e5,&DAT_10265ce0,0);
    return 0;
  }
  if (local_110 != 0x4e544f4d) {
    if (local_110 != 0x424e544d) {
      FUN_10015fb0(0x49,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6a5,&DAT_10265ce0,0);
      return 0;
    }
    iVar2 = FUN_10015890();
    return iVar2;
  }
  iVar5 = 0;
  local_118 = 0;
  local_11c = 0;
  iVar2 = FUN_10014c00();
  if (iVar2 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x5f3,&DAT_10265ce0,0);
    return 0;
  }
  iVar3 = FUN_100149e0(0x100);
  if (iVar3 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x5fa,&DAT_10265ce0,0);
    return 0;
  }
  iVar3 = FUN_1002836b(local_100,s__X__X_1003a6b0,&local_110,&local_10c);
  if (iVar3 != 2) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x5ff,&DAT_10265ce0,0);
    return 0;
  }
  local_10c = local_10c | local_110 << 8;
  if (0xef < local_10c) {
    local_118 = 6;
  }
  iVar3 = FUN_10014df0();
  if (iVar3 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x60b,&DAT_10265ce0,0);
    return 0;
  }
  if (local_118 != 0) {
    do {
      iVar3 = FUN_100149e0(0x100);
      if (iVar3 == 0) {
        uVar8 = 0x614;
        uVar7 = 0x47;
LAB_1001543a:
        FUN_10015fb0(uVar7,&DAT_10265ce0,s___Actor_motion_c_1003a644,uVar8,&DAT_10265ce0,0);
        break;
      }
      iVar3 = FUN_10033390(local_100,s_NameID_1003a6a8,6);
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
        if ((7 < ~uVar4 - 1) && (iVar3 = FUN_10014b70(), iVar3 == 0)) {
          uVar8 = 0x628;
          uVar7 = 0x47;
          goto LAB_1001543a;
        }
      }
      else {
        iVar3 = FUN_10033390(local_100,s_MaintainNames_1003a698,0xd);
        if (iVar3 == 0) {
          iVar3 = FUN_1002836b(local_f3,&DAT_1003a694,iVar2 + 8);
          if (iVar3 != 1) {
            uVar8 = 0x633;
            uVar7 = 0x47;
            goto LAB_1001543a;
          }
          iVar5 = iVar5 + 1;
          local_11c = iVar5;
        }
        else {
          iVar3 = FUN_10033390(local_100,s_PathCount_1003a688,9);
          if (iVar3 == 0) {
            iVar3 = FUN_1002836b(local_f7,&DAT_1003a694,iVar2 + 0x10);
            if (iVar3 != 1) {
              uVar8 = 0x63c;
              uVar7 = 0x47;
              goto LAB_1001543a;
            }
            iVar5 = iVar5 + 1;
            local_11c = iVar5;
          }
          else {
            iVar3 = FUN_10033390(local_100,s_NameChecksum_1003a678,0xc);
            if (iVar3 == 0) {
              iVar3 = FUN_1002836b(&local_f4,&DAT_1003a694,iVar2 + 0x14);
              if (iVar3 != 1) {
                uVar8 = 0x645;
                uVar7 = 0x47;
                goto LAB_1001543a;
              }
              iVar5 = iVar5 + 1;
              local_11c = iVar5;
            }
            else {
              iVar3 = FUN_10033390(local_100,s_Events_1003a670,6);
              if (iVar3 == 0) {
                iVar3 = FUN_1002836b(local_fa,&DAT_1003a694,&local_108);
                if (iVar3 != 1) {
                  uVar8 = 0x64f;
                  uVar7 = 0x47;
                  goto LAB_1001543a;
                }
                if (local_108 != 0) {
                  uVar7 = FUN_1001c240();
                  *(undefined4 *)(iVar2 + 0x18) = uVar7;
                  if (*(int *)(iVar2 + 0x18) == 0) {
                    uVar8 = 0x657;
                    uVar7 = 0x47;
                    goto LAB_1001543a;
                  }
                }
                iVar5 = iVar5 + 1;
                local_11c = iVar5;
              }
              else {
                iVar3 = FUN_10033390(local_100,s_NameArray_1003a664,9);
                if (iVar3 == 0) {
                  iVar3 = FUN_1002836b(local_f7,&DAT_1003a694,&local_104);
                  if (iVar3 != 1) {
                    uVar8 = 0x662;
                    uVar7 = 0x47;
                    goto LAB_1001543a;
                  }
                  if (local_104 != 0) {
                    uVar7 = FUN_1001bce0();
                    *(undefined4 *)(iVar2 + 0x1c) = uVar7;
                    if (*(int *)(iVar2 + 0x1c) == 0) {
                      uVar8 = 0x66a;
                      uVar7 = 0x47;
                      goto LAB_1001543a;
                    }
                  }
                  iVar5 = iVar5 + 1;
                  local_11c = iVar5;
                }
                else {
                  iVar3 = FUN_10033390(local_100,s_PathArray_1003a658,9);
                  if (iVar3 == 0) {
                    iVar3 = FUN_1002836b(local_f7,&DAT_1003a694,&local_114);
                    if (iVar3 == 1) {
                      uVar7 = FUN_10014310(local_114 * 4);
                      *(undefined4 *)(iVar2 + 0x20) = uVar7;
                      if (*(int *)(iVar2 + 0x20) != 0) {
                        iVar5 = 0;
                        if (0 < local_114) {
                          do {
                            uVar7 = FUN_1001d6e0();
                            *(undefined4 *)(*(int *)(iVar2 + 0x20) + iVar5 * 4) = uVar7;
                            if (*(int *)(*(int *)(iVar2 + 0x20) + iVar5 * 4) == 0) {
                              FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x687,
                                           &DAT_10265ce0,0);
                              break;
                            }
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < local_114);
                        }
                        iVar5 = local_11c + 1;
                        local_11c = iVar5;
                        goto LAB_100152fd;
                      }
                      uVar8 = 0x67d;
                      uVar7 = 0x42;
                    }
                    else {
                      uVar8 = 0x675;
                      uVar7 = 0x47;
                    }
                    goto LAB_1001543a;
                  }
                }
              }
            }
          }
        }
      }
LAB_100152fd:
    } while (iVar5 < local_118);
  }
  if (local_118 != iVar5) {
    FUN_10015fb0(0x49,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x698,&DAT_10265ce0,0);
    FUN_10014cc0();
    return 0;
  }
  return iVar2;
}

