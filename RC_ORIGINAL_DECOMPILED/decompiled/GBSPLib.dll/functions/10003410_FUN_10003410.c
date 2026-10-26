/*
 * FUN_10003410 at 10003410
 * undefined FUN_10003410(void)
 * Address ranges: 10003410-100036b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_10003410(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  uint local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  if (DAT_1014e350 != 0) {
    return (byte *)0x0;
  }
  pbVar7 = (byte *)0x0;
  local_14 = (byte *)0x0;
  local_1c = -999999;
  local_24 = 0;
  do {
    local_28 = param_1;
    if (param_1 != (int *)0x0) {
      uVar4 = local_24 & 1;
      local_4 = uVar4;
      do {
        if (uVar4 == 0) {
LAB_10003471:
          if ((*(byte *)(local_28[9] + 0xc) & 0x20) == 0) {
LAB_1000347e:
            local_18 = 0;
            if (0 < local_28[10]) {
              pbVar7 = (byte *)(local_28 + 0xf);
              do {
                if (((*(int *)(pbVar7 + -0x10) != 0) && ((*pbVar7 & 0x18) == 0)) &&
                   (((*pbVar7 & 4) != 0 || (1 < (int)local_24)))) {
                  iVar6 = *(int *)(pbVar7 + -0xc);
                  local_10 = (uint)pbVar7[-8];
                  iVar1 = FUN_100033a0(iVar6,param_2);
                  if (iVar1 != 0) {
                    local_34 = 0;
                    local_30 = 0;
                    local_2c = 0;
                    local_20 = 0;
                    iVar1 = 0;
                    piVar3 = param_1;
                    do {
                      uVar4 = FUN_100031c0(piVar3,iVar6,local_10,&local_c,&local_8,&local_20);
                      local_2c = local_2c + local_c;
                      if ((local_c != 0) && ((uVar4 & 4) != 0)) {
                        (*DAT_1014e358)(s_PSIDE_FACING_with_splits_10036684);
                      }
                      piVar3[8] = uVar4;
                      if ((uVar4 & 4) != 0) {
                        iVar1 = iVar1 + 1;
                        iVar5 = 0;
                        if (0 < piVar3[10]) {
                          pbVar2 = (byte *)(piVar3 + 0xf);
                          do {
                            if (*(int *)(pbVar2 + -0xc) == iVar6) {
                              *pbVar2 = *pbVar2 | 8;
                            }
                            iVar5 = iVar5 + 1;
                            pbVar2 = pbVar2 + 0x14;
                          } while (iVar5 < piVar3[10]);
                        }
                      }
                      if ((uVar4 & 1) != 0) {
                        local_34 = local_34 + 1;
                      }
                      if ((uVar4 & 2) != 0) {
                        local_30 = local_30 + 1;
                      }
                      piVar3 = (int *)*piVar3;
                    } while (piVar3 != (int *)0x0);
                    uVar4 = local_34 - local_30 >> 0x1f;
                    iVar1 = (iVar1 - local_2c) * 5 - ((local_34 - local_30 ^ uVar4) - uVar4);
                    if ((int)(&DAT_1003fe08)[iVar6 * 5] < 3) {
                      iVar1 = iVar1 + 5;
                    }
                    iVar1 = iVar1 + local_20 * -1000;
                    if ((local_8 != 0) && ((*pbVar7 & 1) == 0)) {
                      iVar1 = -999999;
                    }
                    if (local_1c < iVar1) {
                      local_14 = pbVar7 + -0x10;
                      piVar3 = param_1;
                      do {
                        piVar3[7] = piVar3[8];
                        piVar3 = (int *)*piVar3;
                        local_1c = iVar1;
                      } while (piVar3 != (int *)0x0);
                    }
                  }
                }
                local_18 = local_18 + 1;
                pbVar7 = pbVar7 + 0x14;
                uVar4 = local_4;
              } while (local_18 < local_28[10]);
            }
          }
        }
        else if ((*(byte *)(local_28[9] + 0xc) & 0x20) != 0) {
          if (uVar4 == 0) goto LAB_10003471;
          goto LAB_1000347e;
        }
        pbVar7 = local_14;
        local_28 = (int *)*local_28;
      } while (local_28 != (int *)0x0);
      if (local_14 != (byte *)0x0) {
        if (1 < (int)local_24) {
          DAT_1014e218 = DAT_1014e218 + 1;
        }
        if ((0 < (int)local_24) && (*(undefined4 *)(param_2 + 0x50) = 1, (local_14[0x10] & 1) != 0))
        {
          (*DAT_1014e35c)(s_____Hint_as_Detail________10036668);
        }
        goto joined_r0x10003683;
      }
    }
    local_24 = local_24 + 1;
    if (3 < (int)local_24) {
joined_r0x10003683:
      for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
        iVar6 = 0;
        if (0 < param_1[10]) {
          pbVar2 = (byte *)(param_1 + 0xf);
          do {
            iVar6 = iVar6 + 1;
            *pbVar2 = *pbVar2 & 0xf7;
            pbVar2 = pbVar2 + 0x14;
          } while (iVar6 < param_1[10]);
        }
      }
      return pbVar7;
    }
  } while( true );
}

