/*
 * FUN_10026bf0 at 10026bf0
 * undefined FUN_10026bf0(void)
 * Address ranges: 10026bf0-10027058
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10026d6c) */
/* WARNING: Removing unreachable block (ram,0x10026d11) */
/* WARNING: Removing unreachable block (ram,0x10026ca4) */
/* WARNING: Removing unreachable block (ram,0x10026dc5) */
/* WARNING: Removing unreachable block (ram,0x10026c49) */

int __fastcall FUN_10026bf0(undefined4 param_1,int *param_2,undefined4 param_3)

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
  iVar1 = FUN_100149e0(0x100);
  if (iVar1 == 0) {
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x230,&DAT_10265ce0,0);
  }
  else {
    iVar1 = FUN_10033390(local_100,&DAT_1003c9b0,4);
    if (iVar1 == 0) {
      iVar1 = FUN_1002836b(local_fc,s__d__d__d__d_1003c9e8,&local_114,param_2,local_104,param_3);
      if (iVar1 == 4) {
        iVar1 = *param_2;
        if ((iVar1 == 0) || ((0 < iVar1 && (iVar1 < 3)))) {
          iVar1 = FUN_10024b80();
          if (iVar1 == 0) {
            FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x246,&DAT_10265ce0,0);
          }
          else {
            if ((local_104[0] & 2) == 0) {
LAB_10026ea3:
              local_108 = 0;
              if (0 < local_114) {
                do {
                  iVar2 = local_108;
                  pfVar3 = (float *)FUN_10024ee0();
                  iVar4 = FUN_100149e0(0x100);
                  if (iVar4 == 0) {
                    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x254,&DAT_10265ce0
                                 ,0);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    FUN_1001bb60();
                    return 0;
                  }
                  if ((local_104[0] & 2) == 0) {
                    iVar4 = FUN_1002836b(local_100,s__f__f__f__f_1003c9c8,pfVar3,pfVar3 + 1,
                                         pfVar3 + 2,pfVar3 + 3);
                    if (iVar4 != 4) {
                      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x263,
                                   &DAT_10265ce0,0);
                      if (iVar1 == 0) {
                        return 0;
                      }
                      FUN_1001bb60();
                      return 0;
                    }
                  }
                  else {
                    *pfVar3 = (float)local_108 * local_110 + local_10c;
                    iVar4 = FUN_1002836b(local_100,s__f__f__f_1003c9d4,pfVar3 + 1,pfVar3 + 2,
                                         pfVar3 + 3);
                    if (iVar4 != 3) {
                      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x25c,
                                   &DAT_10265ce0,0);
                      if (iVar1 == 0) {
                        return 0;
                      }
                      FUN_1001bb60();
                      return 0;
                    }
                  }
                  local_108 = iVar2 + 1;
                } while (local_108 < local_114);
              }
              if ((*param_2 == 1) || (*param_2 == 2)) {
                FUN_100265e0(iVar1);
              }
              return iVar1;
            }
            iVar2 = FUN_100149e0(0x100);
            if (iVar2 == 0) {
              FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x24b,&DAT_10265ce0,0);
              if (iVar1 != 0) {
                FUN_1001bb60();
                return 0;
              }
            }
            else {
              iVar2 = FUN_1002836b(local_100,s__f__f_1003c9e0,&local_10c,&local_110);
              if (iVar2 == 2) goto LAB_10026ea3;
              FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x24d,&DAT_10265ce0,0);
              if (iVar1 != 0) {
                FUN_1001bb60();
                return 0;
              }
            }
          }
        }
        else {
          FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x243,&DAT_10265ce0,0);
        }
      }
      else {
        FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x237,&DAT_10265ce0,0);
      }
    }
    else {
      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x233,&DAT_10265ce0,0);
    }
  }
  return 0;
}

