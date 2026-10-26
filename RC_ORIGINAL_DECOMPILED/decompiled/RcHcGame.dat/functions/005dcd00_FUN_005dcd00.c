/*
 * FUN_005dcd00 at 005dcd00
 * undefined FUN_005dcd00(void)
 * Address ranges: 005dcd00-005dd3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005dcdbc) */
/* WARNING: Removing unreachable block (ram,0x005dce7c) */
/* WARNING: Removing unreachable block (ram,0x005dcec9) */
/* WARNING: Removing unreachable block (ram,0x005dce29) */
/* WARNING: Removing unreachable block (ram,0x005dcd61) */
/* WARNING: Removing unreachable block (ram,0x005dcf16) */
/* WARNING: Removing unreachable block (ram,0x005dcf7a) */

int __fastcall FUN_005dcd00(undefined4 param_1,int *param_2,undefined4 param_3)

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
  iVar1 = FUN_005cd370(0x100);
  if (iVar1 == 0) {
    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x32b,&DAT_006b3f70,
                 0);
  }
  else {
    iVar1 = FUN_0060d260(local_100,&DAT_006b07f8,4);
    if (iVar1 == 0) {
      iVar1 = FUN_0060b449(local_fc,s__d__d__d__d_006b0830,&local_124,param_2,&local_120,param_3);
      if (iVar1 == 4) {
        iVar1 = *param_2;
        if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
          if ((int)local_120 < 0x100) {
            if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
              iVar1 = FUN_005de3d0();
              if (iVar1 != 0) {
                if ((local_120 & 2) != 0) {
                  iVar2 = FUN_005cd370(0x100);
                  if (iVar2 == 0) {
                    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                 0x34f,&DAT_006b3f70,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_005c8f80();
                    return 0;
                  }
                  iVar2 = FUN_0060b449(local_100,s__f__f_006b0828,&local_114,&local_118);
                  if (iVar2 != 2) {
                    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                 0x351,&DAT_006b3f70,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_005c8f80();
                    return 0;
                  }
                }
                if ((local_120 & 0xfffffffd) == 0) {
                  local_11c = 0;
                  if (0 < local_124) {
                    do {
                      iVar2 = local_11c;
                      pfVar3 = (float *)FUN_005de6a0();
                      iVar4 = FUN_005cd370(0x100);
                      if (iVar4 == 0) {
                        FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                     0x35b,&DAT_006b3f70,0);
                        if (iVar1 == 0) {
                          return 0;
                        }
                        FUN_005c8f80();
                        return 0;
                      }
                      if ((local_120 & 2) == 0) {
                        iVar4 = FUN_0060b449(local_100,s__f__f__f__f__f_006b0800,pfVar3,pfVar3 + 1,
                                             pfVar3 + 2,pfVar3 + 3,pfVar3 + 4);
LAB_005dd31f:
                        if (iVar4 != 5) {
                          FUN_005cf220(0x3d,&DAT_006b3f70,
                                       s_C__Genesis3D_OpenSource_Source_A_006b079c,0x369,
                                       &DAT_006b3f70,0);
                          if (iVar1 == 0) {
                            return 0;
                          }
                          FUN_005c8f80();
                          return 0;
                        }
                      }
                      else {
                        *pfVar3 = (float)local_11c * local_118 + local_114;
                        iVar4 = FUN_0060b449(local_100,s__f__f__f__f_006b0810,pfVar3 + 1,pfVar3 + 2,
                                             pfVar3 + 3,pfVar3 + 4);
                        if (iVar4 != 4) goto LAB_005dd31f;
                      }
                      local_11c = iVar2 + 1;
                    } while (local_11c < local_124);
                  }
                }
                else if ((local_120 & 0xfffffffd) == 1) {
                  iVar2 = FUN_005cd370(0x100);
                  if (iVar2 == 0) {
                    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                 0x372,&DAT_006b3f70,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_005c8f80();
                    return 0;
                  }
                  iVar2 = FUN_0060b449(local_100,s__f__f__f_006b081c,local_10c,local_108,local_104);
                  if (iVar2 != 3) {
                    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                 0x375,&DAT_006b3f70,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_005c8f80();
                    return 0;
                  }
                  local_11c = 0;
                  if (0 < local_124) {
                    do {
                      iVar2 = local_11c;
                      pfVar3 = (float *)FUN_005de6a0();
                      iVar4 = FUN_005cd370(0x100);
                      if (iVar4 == 0) {
                        FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,
                                     0x37a,&DAT_006b3f70,0);
                        if (iVar1 == 0) {
                          return 0;
                        }
                        FUN_005c8f80();
                        return 0;
                      }
                      if ((local_120 & 2) == 0) {
                        iVar4 = FUN_0060b449(local_100,s__f__f_006b0828,pfVar3,&local_110);
LAB_005dd1ae:
                        if (iVar4 != 2) {
                          FUN_005cf220(0x3d,&DAT_006b3f70,
                                       s_C__Genesis3D_OpenSource_Source_A_006b079c,0x386,
                                       &DAT_006b3f70,0);
                          if (iVar1 == 0) {
                            return 0;
                          }
                          FUN_005c8f80();
                          return 0;
                        }
                      }
                      else {
                        *pfVar3 = (float)local_11c * local_118 + local_114;
                        iVar4 = FUN_0060b449(local_100,&DAT_0069081c,&local_110);
                        if (iVar4 != 1) goto LAB_005dd1ae;
                      }
                      FUN_005b5540(local_110);
                      local_11c = iVar2 + 1;
                    } while (local_11c < local_124);
                  }
                }
                if (*param_2 == 1) {
                  FUN_005dc970();
                }
                else if (*param_2 == 2) {
                  FUN_005dc720();
                  return iVar1;
                }
                return iVar1;
              }
              FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x34a,
                           &DAT_006b3f70,0);
            }
            else {
              FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x347,
                           &DAT_006b3f70,0);
            }
          }
          else {
            FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x337,
                         &DAT_006b3f70,0);
          }
        }
        else {
          FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x334,
                       &DAT_006b3f70,0);
        }
      }
      else {
        FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x331,
                     &DAT_006b3f70,0);
      }
    }
    else {
      FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x32d,
                   &DAT_006b3f70,0);
    }
  }
  return 0;
}

