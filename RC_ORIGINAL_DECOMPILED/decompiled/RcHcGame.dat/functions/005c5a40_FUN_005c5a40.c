/*
 * FUN_005c5a40 at 005c5a40
 * undefined FUN_005c5a40(void)
 * Address ranges: 005c5a40-005c5ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c5a40(undefined4 param_1,undefined4 *param_2)

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
  undefined4 auStack_148 [2];
  undefined1 local_140 [32];
  undefined1 auStack_120 [32];
  undefined1 local_100 [7];
  undefined1 local_f9 [2];
  undefined1 local_f7 [8];
  undefined1 local_ef [239];
  
  local_158 = 0;
  local_160 = 0;
  local_150 = 0;
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    uVar4 = 0x40a;
    uVar3 = 0x3d;
  }
  else if (local_154 == 0x4c4e4843) {
    iVar1 = FUN_005cd370(0x20);
    if (iVar1 == 0) {
      uVar4 = 0x417;
      uVar3 = 0x3d;
    }
    else {
      iVar1 = FUN_0060b449(local_140,s__X__X_006a979c,&local_154,&local_15c);
      if (iVar1 == 2) {
        local_15c = local_15c | local_154 << 8;
        if (0xef < local_15c) {
          local_158 = 4;
        }
        param_2[1] = 0xffffffff;
        param_2[6] = 0;
        param_2[7] = 0xbf800000;
        if (0 < local_158) {
LAB_005c5b5f:
          iVar1 = FUN_005cd370(0x100);
          if (iVar1 == 0) {
            uVar4 = 0x432;
            uVar3 = 0x3d;
          }
          else {
            iVar1 = FUN_0060d260(local_100,s_InterpolationType_006a98cc,0x11);
            if (iVar1 == 0) {
              iVar1 = FUN_0060b449(local_ef,&DAT_00690818,&local_150);
              if (iVar1 != 1) {
                uVar4 = 0x43a;
                uVar3 = 0x3d;
                goto LAB_005c5e91;
              }
LAB_005c5db6:
              local_160 = local_160 + 1;
              if (local_158 <= local_160) goto LAB_005c5e99;
              goto LAB_005c5b5f;
            }
            iVar1 = FUN_0060d260(local_100,s_StartTime_006a98c0,9);
            if (iVar1 == 0) {
              iVar1 = FUN_0060b449(local_f7,&DAT_0069081c,param_2 + 2);
              if (iVar1 == 1) goto LAB_005c5db6;
              uVar4 = 0x443;
              uVar3 = 0x3d;
            }
            else {
              iVar1 = FUN_0060d260(local_100,s_EndTime_006a98b8,7);
              if (iVar1 != 0) {
                iVar1 = FUN_0060d260(local_100,s_KeyList_006a98b0,7);
                if (iVar1 == 0) {
                  iVar1 = FUN_0060b449(local_f9,&DAT_00690818,&local_15c);
                  if (iVar1 != 1) {
                    uVar4 = 0x458;
                    uVar3 = 0x3d;
                    goto LAB_005c5e91;
                  }
                  if (local_14c == 1) {
                    if (local_150 == 0) {
                      uVar3 = FUN_005dc5a0();
                      *param_2 = uVar3;
                      param_2[1] = 3;
                      pcVar2 = (code *)&LAB_005dc9b0;
                    }
                    else if (local_150 == 2) {
                      uVar3 = FUN_005dc5a0();
                      *param_2 = uVar3;
                      param_2[1] = 4;
                      pcVar2 = (code *)&LAB_005dcac0;
                    }
                    else {
                      if (local_150 != 3) {
                        uVar4 = 0x473;
                        goto LAB_005c5ec2;
                      }
                      uVar3 = FUN_005dc5b0();
                      *param_2 = uVar3;
                      param_2[1] = 5;
                      pcVar2 = FUN_005dcbd0;
                    }
                  }
                  else if (local_150 == 0) {
                    uVar3 = FUN_005dd6f0();
                    *param_2 = uVar3;
                    param_2[1] = 0;
                    pcVar2 = (code *)&LAB_005dda20;
                  }
                  else if (local_150 == 1) {
                    uVar3 = FUN_005dd700();
                    param_2[1] = 1;
                    *param_2 = uVar3;
                    pcVar2 = (code *)&LAB_005ddb30;
                  }
                  else {
                    if (local_150 != 7) {
                      uVar4 = 0x490;
                      goto LAB_005c5ec2;
                    }
                    uVar3 = FUN_005dd700();
                    *param_2 = uVar3;
                    param_2[1] = 2;
                    pcVar2 = (code *)&LAB_005ddb30;
                  }
                  do {
                    if (local_15c == 0) goto LAB_005c5db6;
                    local_15c = local_15c - 1;
                    iVar1 = FUN_005cd370(0x20);
                    if (iVar1 == 0) {
                      uVar3 = 0x49c;
LAB_005c5d98:
                      FUN_005cf220(0x3d,&DAT_006b3f70,
                                   s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,uVar3,
                                   &DAT_006b3f70,0);
                      break;
                    }
                    iVar1 = FUN_0060b449(auStack_120,&DAT_006a98ac,auStack_148);
                    if (iVar1 != 1) {
                      uVar3 = 0x4a1;
                      goto LAB_005c5d98;
                    }
                    iVar1 = FUN_005de570(auStack_148[0]);
                    if (iVar1 == 0) break;
                    FUN_005de6a0();
                    iVar1 = (*pcVar2)();
                  } while (iVar1 != 0);
                  if (local_15c == 0) goto LAB_005c5db6;
                  uVar4 = 0x4b2;
                }
                else {
                  uVar4 = 0x4bb;
                }
                uVar3 = 0x3f;
                goto LAB_005c5e91;
              }
              iVar1 = FUN_0060b449(local_f9,&DAT_0069081c,param_2 + 3);
              if (iVar1 == 1) goto LAB_005c5db6;
              uVar4 = 0x44c;
              uVar3 = 0x3d;
            }
          }
LAB_005c5e91:
          FUN_005cf220(uVar3,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,uVar4,
                       &DAT_006b3f70,0);
        }
LAB_005c5e99:
        if (local_158 == local_160) {
          return 1;
        }
        uVar4 = 0x4c5;
LAB_005c5ec2:
        uVar3 = 0x3f;
      }
      else {
        uVar4 = 0x41d;
        uVar3 = 0x3d;
      }
    }
  }
  else {
    uVar4 = 0x410;
    uVar3 = 0x3e;
  }
  FUN_005cf220(uVar3,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,uVar4,
               &DAT_006b3f70,0);
  return 0;
}

