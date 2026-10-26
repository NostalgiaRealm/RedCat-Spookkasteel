/*
 * FUN_1001ce90 at 1001ce90
 * undefined FUN_1001ce90(void)
 * Address ranges: 1001ce90-1001d334
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001ce90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined4 local_148 [2];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [7];
  undefined1 local_f9 [2];
  undefined1 local_f7 [8];
  undefined1 local_ef [239];
  
  local_158 = 0;
  local_160 = 0;
  local_150 = 0;
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    uVar4 = 0x406;
    uVar3 = 0x3d;
  }
  else if (local_154 == 0x4c4e4843) {
    iVar1 = FUN_100149e0(0x20);
    if (iVar1 == 0) {
      uVar4 = 0x413;
      uVar3 = 0x3d;
    }
    else {
      iVar1 = FUN_1002836b(local_140,s__X__X_1003a6b0,&local_154,&local_15c);
      if (iVar1 == 2) {
        local_15c = local_15c | local_154 << 8;
        if (0xef < local_15c) {
          local_158 = 4;
        }
        param_2[1] = 0xffffffff;
        param_2[6] = 0;
        param_2[7] = 0xbf800000;
        if (0 < local_158) {
LAB_1001cfaf:
          iVar1 = FUN_100149e0(0x100);
          if (iVar1 == 0) {
            uVar4 = 0x42e;
            uVar3 = 0x3d;
          }
          else {
            iVar1 = FUN_10033390(local_100,s_InterpolationType_1003c7a8,0x11);
            if (iVar1 == 0) {
              iVar1 = FUN_1002836b(local_ef,&DAT_1003a694,&local_150);
              if (iVar1 != 1) {
                uVar4 = 0x436;
                uVar3 = 0x3d;
                goto LAB_1001d2e1;
              }
LAB_1001d206:
              local_160 = local_160 + 1;
              if (local_158 <= local_160) goto LAB_1001d2e9;
              goto LAB_1001cfaf;
            }
            iVar1 = FUN_10033390(local_100,s_StartTime_1003c79c,9);
            if (iVar1 == 0) {
              iVar1 = FUN_1002836b(local_f7,&DAT_1003c798,param_2 + 2);
              if (iVar1 == 1) goto LAB_1001d206;
              uVar4 = 0x43f;
              uVar3 = 0x3d;
            }
            else {
              iVar1 = FUN_10033390(local_100,s_EndTime_1003c790,7);
              if (iVar1 != 0) {
                iVar1 = FUN_10033390(local_100,s_KeyList_1003c788,7);
                if (iVar1 == 0) {
                  iVar1 = FUN_1002836b(local_f9,&DAT_1003a694,&local_15c);
                  if (iVar1 != 1) {
                    uVar4 = 0x454;
                    uVar3 = 0x3d;
                    goto LAB_1001d2e1;
                  }
                  if (local_14c == 1) {
                    if (local_150 == 0) {
                      uVar3 = FUN_10024f10();
                      *param_2 = uVar3;
                      param_2[1] = 3;
                      pcVar2 = (code *)&LAB_10025320;
                    }
                    else if (local_150 == 2) {
                      uVar3 = FUN_10024f10();
                      *param_2 = uVar3;
                      param_2[1] = 4;
                      pcVar2 = (code *)&LAB_10025430;
                    }
                    else {
                      if (local_150 != 3) {
                        uVar4 = 0x46f;
                        goto LAB_1001d312;
                      }
                      uVar3 = FUN_10024f20();
                      *param_2 = uVar3;
                      param_2[1] = 5;
                      pcVar2 = FUN_10025540;
                    }
                  }
                  else if (local_150 == 0) {
                    uVar3 = FUN_100264a0();
                    *param_2 = uVar3;
                    param_2[1] = 0;
                    pcVar2 = (code *)&LAB_100267d0;
                  }
                  else if (local_150 == 1) {
                    uVar3 = FUN_100264b0();
                    param_2[1] = 1;
                    *param_2 = uVar3;
                    pcVar2 = (code *)&LAB_100268e0;
                  }
                  else {
                    if (local_150 != 7) {
                      uVar4 = 0x48c;
                      goto LAB_1001d312;
                    }
                    uVar3 = FUN_100264b0();
                    *param_2 = uVar3;
                    param_2[1] = 2;
                    pcVar2 = (code *)&LAB_100268e0;
                  }
                  do {
                    if (local_15c == 0) goto LAB_1001d206;
                    local_15c = local_15c - 1;
                    iVar1 = FUN_100149e0(0x20);
                    if (iVar1 == 0) {
                      uVar3 = 0x498;
LAB_1001d1e8:
                      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,uVar3,&DAT_10265ce0,
                                   0);
                      break;
                    }
                    iVar1 = FUN_1002836b(local_120,&DAT_10037fb8,local_148);
                    if (iVar1 != 1) {
                      uVar3 = 0x49d;
                      goto LAB_1001d1e8;
                    }
                    iVar1 = FUN_10024db0(local_148[0]);
                    if (iVar1 == 0) break;
                    FUN_10024ee0();
                    iVar1 = (*pcVar2)();
                  } while (iVar1 != 0);
                  if (local_15c == 0) goto LAB_1001d206;
                  uVar4 = 0x4ae;
                }
                else {
                  uVar4 = 0x4b7;
                }
                uVar3 = 0x3f;
                goto LAB_1001d2e1;
              }
              iVar1 = FUN_1002836b(local_f9,&DAT_1003c798,param_2 + 3);
              if (iVar1 == 1) goto LAB_1001d206;
              uVar4 = 0x448;
              uVar3 = 0x3d;
            }
          }
LAB_1001d2e1:
          FUN_10015fb0(uVar3,&DAT_10265ce0,s___Actor_path_c_1003c778,uVar4,&DAT_10265ce0,0);
        }
LAB_1001d2e9:
        if (local_158 == local_160) {
          return 1;
        }
        uVar4 = 0x4c1;
LAB_1001d312:
        uVar3 = 0x3f;
      }
      else {
        uVar4 = 0x419;
        uVar3 = 0x3d;
      }
    }
  }
  else {
    uVar4 = 0x40c;
    uVar3 = 0x3e;
  }
  FUN_10015fb0(uVar3,&DAT_10265ce0,s___Actor_path_c_1003c778,uVar4,&DAT_10265ce0,0);
  return 0;
}

