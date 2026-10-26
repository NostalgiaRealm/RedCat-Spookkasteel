/*
 * FUN_10025ab0 at 10025ab0
 * undefined FUN_10025ab0(void)
 * Address ranges: 10025ab0-1002618b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10025b6c) */
/* WARNING: Removing unreachable block (ram,0x10025c2c) */
/* WARNING: Removing unreachable block (ram,0x10025c79) */
/* WARNING: Removing unreachable block (ram,0x10025bd9) */
/* WARNING: Removing unreachable block (ram,0x10025b11) */
/* WARNING: Removing unreachable block (ram,0x10025cc6) */
/* WARNING: Removing unreachable block (ram,0x10025d2a) */

int __fastcall FUN_10025ab0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int local_124;
  uint local_120;
  int local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [252];
  
  local_114 = 0.0;
  local_118 = 0.0;
  iVar1 = FUN_100149e0(0x100);
  if (iVar1 == 0) {
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x32a,&DAT_10265ce0,0);
  }
  else {
    iVar1 = FUN_10033390(local_100,&DAT_1003c9b0,4);
    if (iVar1 == 0) {
      iVar1 = FUN_1002836b(local_fc,s__d__d__d__d_1003c9e8,&local_124,param_2,&local_120,param_3);
      if (iVar1 == 4) {
        iVar1 = *param_2;
        if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
          if ((int)local_120 < 0x100) {
            if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
              iVar1 = FUN_10024b80();
              if (iVar1 != 0) {
                if ((local_120 & 2) != 0) {
                  iVar2 = FUN_100149e0(0x100);
                  if (iVar2 == 0) {
                    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x34e,&DAT_10265ce0
                                 ,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_1001bb60();
                    return 0;
                  }
                  iVar2 = FUN_1002836b(local_100,s__f__f_1003c9e0,&local_114,&local_118);
                  if (iVar2 != 2) {
                    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x350,&DAT_10265ce0
                                 ,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_1001bb60();
                    return 0;
                  }
                }
                if ((local_120 & 0xfffffffd) == 0) {
                  local_11c = 0;
                  if (0 < local_124) {
                    do {
                      iVar2 = local_11c;
                      pfVar3 = (float *)FUN_10024ee0();
                      iVar4 = FUN_100149e0(0x100);
                      if (iVar4 == 0) {
                        FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x35a,
                                     &DAT_10265ce0,0);
                        if (iVar1 == 0) {
                          return 0;
                        }
                        FUN_1001bb60();
                        return 0;
                      }
                      if ((local_120 & 2) == 0) {
                        iVar4 = FUN_1002836b(local_100,s__f__f__f__f__f_1003c9b8,pfVar3,pfVar3 + 1,
                                             pfVar3 + 2,pfVar3 + 3,pfVar3 + 4);
LAB_100260cf:
                        if (iVar4 != 5) {
                          FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x368,
                                       &DAT_10265ce0,0);
                          if (iVar1 == 0) {
                            return 0;
                          }
                          FUN_1001bb60();
                          return 0;
                        }
                      }
                      else {
                        *pfVar3 = (float)local_11c * local_118 + local_114;
                        iVar4 = FUN_1002836b(local_100,s__f__f__f__f_1003c9c8,pfVar3 + 1,pfVar3 + 2,
                                             pfVar3 + 3,pfVar3 + 4);
                        if (iVar4 != 4) goto LAB_100260cf;
                      }
                      local_11c = iVar2 + 1;
                    } while (local_11c < local_124);
                  }
                }
                else if ((local_120 & 0xfffffffd) == 1) {
                  iVar2 = FUN_100149e0(0x100);
                  if (iVar2 == 0) {
                    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x371,&DAT_10265ce0
                                 ,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_1001bb60();
                    return 0;
                  }
                  iVar2 = FUN_1002836b(local_100,s__f__f__f_1003c9d4,local_10c,local_108,local_104);
                  if (iVar2 != 3) {
                    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x374,&DAT_10265ce0
                                 ,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_1001bb60();
                    return 0;
                  }
                  local_11c = 0;
                  if (0 < local_124) {
                    do {
                      iVar2 = local_11c;
                      pfVar3 = (float *)FUN_10024ee0();
                      iVar4 = FUN_100149e0(0x100);
                      if (iVar4 == 0) {
                        FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x379,
                                     &DAT_10265ce0,0);
                        if (iVar1 == 0) {
                          return 0;
                        }
                        FUN_1001bb60();
                        return 0;
                      }
                      if ((local_120 & 2) == 0) {
                        iVar4 = FUN_1002836b(local_100,s__f__f_1003c9e0,pfVar3,&local_110);
LAB_10025f5e:
                        if (iVar4 != 2) {
                          FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x385,
                                       &DAT_10265ce0,0);
                          if (iVar1 == 0) {
                            return 0;
                          }
                          FUN_1001bb60();
                          return 0;
                        }
                      }
                      else {
                        *pfVar3 = (float)local_11c * local_118 + local_114;
                        iVar4 = FUN_1002836b(local_100,&DAT_1003c798,&local_110);
                        if (iVar4 != 1) goto LAB_10025f5e;
                      }
                      FUN_1001df20(local_110);
                      local_11c = iVar2 + 1;
                    } while (local_11c < local_124);
                  }
                }
                if (*param_2 == 1) {
                  FUN_100252e0();
                }
                else if (*param_2 == 2) {
                  FUN_10025090();
                  return iVar1;
                }
                return iVar1;
              }
              FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x349,&DAT_10265ce0,0);
            }
            else {
              FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x346,&DAT_10265ce0,0);
            }
          }
          else {
            FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x336,&DAT_10265ce0,0);
          }
        }
        else {
          FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x333,&DAT_10265ce0,0);
        }
      }
      else {
        FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x330,&DAT_10265ce0,0);
      }
    }
    else {
      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x32c,&DAT_10265ce0,0);
    }
  }
  return 0;
}

