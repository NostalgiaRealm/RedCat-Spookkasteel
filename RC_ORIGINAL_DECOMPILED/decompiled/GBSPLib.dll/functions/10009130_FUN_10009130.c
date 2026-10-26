/*
 * FUN_10009130 at 10009130
 * undefined FUN_10009130(void)
 * Address ranges: 10009130-10009453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009130(int param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  int local_34;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = (int)param_2;
  local_c = *(undefined4 *)(param_1 + 4);
  local_8 = *(undefined4 *)(param_1 + 8);
  local_20 = 0;
  local_4 = *(undefined4 *)(param_1 + 0xc);
  local_34 = *(int *)(param_1 + 0x3c);
  if (0 < *(int *)(param_1 + 0x40)) {
    local_28 = 0;
    do {
      iVar5 = FUN_1000a690(0,local_34);
      if ((iVar5 < 0) || (DAT_1014e290 <= iVar5)) {
        (*DAT_1014e358)(s_ApplyLightsToFace__Invalid_leaf_n_10037fc0);
        return 0;
      }
      iVar5 = *(int *)(DAT_1014e258 + 0x2c + iVar5 * 0x3c);
      if (-1 < iVar5) {
        if (iVar5 < DAT_1014e2e4) {
          local_24 = 0;
          iVar5 = *(int *)(DAT_1014e2d0 + iVar5 * 4) + DAT_1014e308;
          if (0 < DAT_1014e2e4) {
            local_2c = &DAT_102487d0;
            iVar6 = DAT_1014e2e4;
            do {
              if ((*(byte *)((local_24 >> 3) + iVar5) & (byte)(1 << ((byte)local_24 & 7))) != 0) {
                for (puVar2 = (undefined4 *)*local_2c; puVar2 != (undefined4 *)0x0;
                    puVar2 = (undefined4 *)*puVar2) {
                  fVar3 = (float)puVar2[0xc];
                  FUN_10014560(local_18);
                  fVar10 = (float10)FUN_100144b0();
                  fVar1 = (float)fVar10;
                  fVar10 = (float10)FUN_100143d0();
                  param_2 = (float)fVar10;
                  if ((float10)0.001 < fVar10) {
                    switch(puVar2[0xd]) {
                    case 2:
                      fVar10 = (float10)FUN_100143d0();
                      if (-fVar10 < (float10)(float)puVar2[8]) goto LAB_100093a6;
                    case 1:
                      param_2 = (fVar3 - fVar1) * param_2;
                      break;
                    case 3:
                      fVar10 = (float10)FUN_100143d0();
                      if (-fVar10 <= (float10)0.001) goto LAB_100093a6;
                      param_2 = (float)(((float10)fVar3 / ((float10)fVar1 * (float10)fVar1)) *
                                        -fVar10 * (float10)param_2);
                      break;
                    case 4:
                      fVar10 = (float10)FUN_100087e0(puVar2,fVar1,param_2,fVar3,1);
                      param_2 = (float)fVar10;
                      break;
                    default:
                      (*DAT_1014e358)(s_ApplyLightsToFace__Invalid_light_10037f80);
                      return 0;
                    }
                    if ((0.0 < param_2) && (iVar6 = FUN_1000a1c0(local_34,puVar2 + 2,0), iVar6 == 0)
                       ) {
                      iVar6 = puVar2[1];
                      if (*(int *)(iVar4 + iVar6 * 4) == 0) {
                        if (3 < *(int *)(iVar4 + 0x30)) {
                          (*DAT_1014e358)(s_Max_Light_Types_on_face__10037fe8);
                          return 0;
                        }
                        puVar7 = (undefined4 *)FUN_10014310(*(int *)(param_1 + 0x40) * 0xc);
                        *(undefined4 **)(iVar4 + iVar6 * 4) = puVar7;
                        for (uVar8 = *(int *)(param_1 + 0x40) * 3 & 0x3fffffff; uVar8 != 0;
                            uVar8 = uVar8 - 1) {
                          *puVar7 = 0;
                          puVar7 = puVar7 + 1;
                        }
                        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                          *(undefined1 *)puVar7 = 0;
                          puVar7 = (undefined4 *)((int)puVar7 + 1);
                        }
                        *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
                      }
                      FUN_100145a0(param_2 * param_3,local_28 + *(int *)(iVar4 + iVar6 * 4));
                    }
                  }
LAB_100093a6:
                  iVar6 = DAT_1014e2e4;
                }
              }
              local_24 = local_24 + 1;
              local_2c = local_2c + 1;
            } while (local_24 < iVar6);
          }
        }
        else {
          (*DAT_1014e358)(s__WARNING__ApplyLightsToFace__Inv_10038004);
        }
      }
      local_28 = local_28 + 0xc;
      local_34 = local_34 + 0xc;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x40));
  }
  return 1;
}

