/*
 * FUN_005ddc60 at 005ddc60
 * undefined FUN_005ddc60(void)
 * Address ranges: 005ddc60-005de0c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ddddc) */
/* WARNING: Removing unreachable block (ram,0x005ddd81) */
/* WARNING: Removing unreachable block (ram,0x005ddd14) */
/* WARNING: Removing unreachable block (ram,0x005dde35) */
/* WARNING: Removing unreachable block (ram,0x005ddcb9) */

int __fastcall FUN_005ddc60(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int local_114;
  float local_110;
  float local_10c;
  int local_108;
  byte local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [252];
  
  local_10c = 0.0;
  local_110 = 0.0;
  iVar1 = FUN_005cd370(0x100);
  if (iVar1 == 0) {
    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x231,&DAT_006b3f70,
                 0);
  }
  else {
    iVar1 = FUN_0060d260(local_100,&DAT_006b07f8,4);
    if (iVar1 == 0) {
      iVar1 = FUN_0060b449(local_fc,s__d__d__d__d_006b0830,&local_114,param_2,local_104,param_3);
      if (iVar1 == 4) {
        iVar1 = *param_2;
        if ((iVar1 == 0) || ((0 < iVar1 && (iVar1 < 3)))) {
          iVar1 = FUN_005de3d0();
          if (iVar1 == 0) {
            FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x247,
                         &DAT_006b3f70,0);
          }
          else {
            if ((local_104[0] & 2) == 0) {
LAB_005ddf13:
              local_108 = 0;
              if (0 < local_114) {
                do {
                  iVar2 = local_108;
                  pfVar3 = (float *)FUN_005de6a0();
                  iVar4 = FUN_005cd370(0x100);
                  if (iVar4 == 0) {
                    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,
                                 0x255,&DAT_006b3f70,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_005c8f80();
                    return 0;
                  }
                  if ((local_104[0] & 2) == 0) {
                    iVar4 = FUN_0060b449(local_100,s__f__f__f__f_006b0810,pfVar3,pfVar3 + 1,
                                         pfVar3 + 2,pfVar3 + 3);
                    if (iVar4 != 4) {
                      FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,
                                   0x264,&DAT_006b3f70,0);
                      if (iVar1 == 0) {
                        return 0;
                      }
                      FUN_005c8f80();
                      return 0;
                    }
                  }
                  else {
                    *pfVar3 = (float)local_108 * local_110 + local_10c;
                    iVar4 = FUN_0060b449(local_100,s__f__f__f_006b081c,pfVar3 + 1,pfVar3 + 2,
                                         pfVar3 + 3);
                    if (iVar4 != 3) {
                      FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,
                                   0x25d,&DAT_006b3f70,0);
                      if (iVar1 == 0) {
                        return 0;
                      }
                      FUN_005c8f80();
                      return 0;
                    }
                  }
                  local_108 = iVar2 + 1;
                } while (local_108 < local_114);
              }
              if ((*param_2 == 1) || (*param_2 == 2)) {
                FUN_005dd830(iVar1);
              }
              return iVar1;
            }
            iVar2 = FUN_005cd370(0x100);
            if (iVar2 == 0) {
              FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x24c,
                           &DAT_006b3f70,0);
              if (iVar1 != 0) {
                FUN_005c8f80();
                return 0;
              }
            }
            else {
              iVar2 = FUN_0060b449(local_100,s__f__f_006b0828,&local_10c,&local_110);
              if (iVar2 == 2) goto LAB_005ddf13;
              FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x24e,
                           &DAT_006b3f70,0);
              if (iVar1 != 0) {
                FUN_005c8f80();
                return 0;
              }
            }
          }
        }
        else {
          FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x244,
                       &DAT_006b3f70,0);
        }
      }
      else {
        FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x238,
                     &DAT_006b3f70,0);
      }
    }
    else {
      FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x234,
                   &DAT_006b3f70,0);
    }
  }
  return 0;
}

