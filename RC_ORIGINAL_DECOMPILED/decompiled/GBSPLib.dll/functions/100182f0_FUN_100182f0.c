/*
 * FUN_100182f0 at 100182f0
 * undefined FUN_100182f0(void)
 * Address ranges: 100182f0-10018b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100182f0(int *param_1,byte *param_2,int *param_3,byte *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_37c;
  int local_378;
  int local_374;
  int local_370;
  byte *local_36c;
  int local_368;
  code *local_364;
  int local_360;
  byte *local_35c;
  int local_358;
  int local_354;
  int local_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int iStack_340;
  int iStack_33c;
  int local_338;
  int iStack_334;
  int iStack_330;
  code *local_32c;
  int iStack_328;
  int iStack_324;
  int local_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int local_310;
  code *local_30c;
  int iStack_308;
  int local_304;
  byte local_300 [768];
  
  iVar3 = *param_3;
  iVar8 = param_3[1];
  local_374 = param_3[2] - iVar3;
  iVar10 = 1;
  for (iVar11 = iVar3; iVar11 < *param_1; iVar11 = iVar11 * 2) {
    iVar10 = iVar10 * 2;
  }
  local_338 = param_1[1];
  local_378 = iVar8 + -1;
  iVar11 = (param_1[2] - iVar3) * iVar10;
  local_370 = iVar10;
  local_354 = iVar11;
  if (local_378 * iVar10 - (local_338 + -1) == 0 || local_378 * iVar10 < local_338 + -1) {
    local_358 = FUN_100203d0();
    if (iVar10 == 2) {
      if (1 < local_358) {
        local_37c = param_4;
        local_36c = param_2;
        iVar10 = FUN_100203a0();
        local_364 = *(code **)(iVar10 + 0x48);
        pcVar4 = *(code **)(iVar10 + 0x44);
        local_354 = local_358 * iVar11;
        local_374 = local_358 * local_374;
        if (param_1[6] == 0) {
          if (iVar8 == 0) {
            return 1;
          }
          local_360 = local_378 * 2 + 1;
          local_368 = local_378 + 1;
          do {
            pcVar6 = local_364;
            iVar8 = iVar3;
            local_35c = local_36c;
            if (local_360 != local_338) {
              local_35c = local_36c + param_1[2] * local_358;
            }
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              (*pcVar4)(&local_36c,&local_370,&local_320,&local_350,&local_310);
              (*pcVar4)(&local_36c,&iStack_348,&iStack_328,&iStack_314,&iStack_318);
              (*pcVar4)(&local_35c,&iStack_31c,&iStack_330,&iStack_324,&iStack_33c);
              (*pcVar4)(&local_35c,&iStack_34c,&iStack_334,&iStack_344,&iStack_340);
              (*pcVar6)(&local_37c,iStack_34c + iStack_31c + iStack_348 + 2 + local_370 >> 2,
                        iStack_334 + iStack_330 + iStack_328 + 2 + local_320 >> 2,
                        iStack_344 + iStack_324 + iStack_314 + 2 + local_350 >> 2,
                        iStack_340 + iStack_33c + iStack_318 + 2 + local_310 >> 2);
            }
            local_36c = local_36c + local_354;
            local_360 = local_360 + -2;
            local_37c = local_37c + local_374;
            local_368 = local_368 + -1;
          } while (local_368 != 0);
          return 1;
        }
        local_360 = param_1[7];
        pcVar4 = *(code **)(iVar10 + 0x40);
        local_32c = *(code **)(iVar10 + 0x50);
        if (iVar8 == 0) {
          return 1;
        }
        local_368 = local_378 + 1;
        local_378 = local_378 * 2 + 1;
        local_30c = *(code **)(iVar10 + 0x4c);
        do {
          local_304 = iVar3;
          local_35c = local_36c;
          pcVar6 = local_30c;
          if (local_378 != local_338) {
            local_35c = local_36c + param_1[2] * local_358;
          }
          for (; local_30c = pcVar6, local_304 != 0; local_304 = local_304 + -1) {
            iVar10 = (*pcVar6)(&local_36c);
            iVar11 = (*pcVar6)(&local_36c);
            iVar8 = (*pcVar6)(&local_35c);
            iStack_308 = (*local_30c)(&local_35c);
            if ((iVar10 == local_360) || (iStack_308 == local_360)) {
              (*local_32c)(&local_37c,local_360);
            }
            else {
              if (iVar11 == local_360) {
                iVar11 = iVar10;
              }
              if (iVar8 == local_360) {
                iVar8 = iStack_308;
              }
              (*pcVar4)(iVar10,&local_370,&local_320,&local_350,&local_310);
              (*pcVar4)(iVar11,&iStack_348,&iStack_328,&iStack_314,&iStack_318);
              (*pcVar4)(iVar8,&iStack_31c,&iStack_330,&iStack_324,&iStack_33c);
              (*pcVar4)(iStack_308,&iStack_34c,&iStack_334,&iStack_344,&iStack_340);
              (*local_364)(&local_37c,iStack_34c + iStack_31c + iStack_348 + 2 + local_370 >> 2,
                           iStack_334 + iStack_330 + iStack_328 + 2 + local_320 >> 2,
                           iStack_344 + iStack_324 + iStack_314 + 2 + local_350 >> 2,
                           iStack_340 + iStack_33c + iStack_318 + 2 + local_310 >> 2);
            }
            pcVar6 = local_30c;
          }
          local_36c = local_36c + local_354;
          local_378 = local_378 + -2;
          local_37c = local_37c + local_374;
          local_368 = local_368 + -1;
        } while (local_368 != 0);
        return 1;
      }
      iVar9 = FUN_100203f0();
      if (iVar9 != 0) {
        iVar11 = FUN_10019f30(9,0x100);
        if (iVar11 == 0) {
          return 0;
        }
        iVar11 = FUN_1001fc90(local_300);
        if (iVar11 == 0) {
          return 0;
        }
        local_37c = param_4;
        local_32c = (code *)iVar11;
        if (iVar8 != 0) {
          local_370 = local_378 * 2 + 1;
          local_368 = local_378 + 1;
          do {
            iVar8 = iVar3;
            pbVar1 = param_2;
            pcVar4 = local_364;
            pcVar6 = local_32c;
            if (local_370 != local_338) {
              pbVar1 = param_2 + param_1[2] * local_358;
            }
            while (local_364 = (code *)iVar8, local_32c = pcVar6, local_364 != (code *)0x0) {
              bVar7 = *param_2;
              pbVar12 = param_2 + 1;
              iVar9 = (uint)bVar7 * 3;
              param_2 = param_2 + 2;
              iVar8 = (uint)*pbVar12 * 3;
              iVar11 = (uint)*pbVar1 * 3;
              iVar10 = (uint)pbVar1[1] * 3;
              bVar7 = FUN_1001ff90((int)(local_300[iVar10] + 2 +
                                        (uint)local_300[iVar9] + (uint)local_300[iVar8] +
                                        (uint)local_300[iVar11]) >> 2,
                                   (int)(local_300[iVar10 + 1] + 2 +
                                        (uint)local_300[(uint)bVar7 * 3 + 1] +
                                        (uint)local_300[iVar8 + 1] + (uint)local_300[iVar11 + 1]) >>
                                   2,(int)(local_300[iVar10 + 2] + 2 +
                                          (uint)local_300[iVar9 + 2] + (uint)local_300[iVar8 + 2] +
                                          (uint)local_300[iVar11 + 2]) >> 2,pcVar6);
              *local_37c = bVar7;
              local_37c = local_37c + 1;
              iVar11 = (int)pcVar6;
              pbVar1 = pbVar1 + 2;
              pcVar4 = (code *)((int)local_364 + -1);
              pcVar6 = local_32c;
              iVar8 = (int)local_364 + -1;
            }
            param_2 = param_2 + local_354;
            local_370 = local_370 + -2;
            local_37c = local_37c + local_374;
            local_368 = local_368 + -1;
            local_364 = pcVar4;
          } while (local_368 != 0);
        }
        FUN_10020100(iVar11);
        return 1;
      }
    }
    switch(local_358) {
    case 1:
      if (iVar8 != 0) {
        local_378 = local_378 + 1;
        iVar8 = iVar3;
        do {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            bVar7 = *param_2;
            param_2 = param_2 + iVar10;
            *param_4 = bVar7;
            param_4 = param_4 + 1;
          }
          param_2 = param_2 + iVar11;
          param_4 = param_4 + local_374;
          local_378 = local_378 + -1;
          iVar8 = iVar3;
        } while (local_378 != 0);
        return 1;
      }
      break;
    case 2:
      if (iVar8 != 0) {
        local_378 = local_378 + 1;
        do {
          if (iVar3 != 0) {
            iVar8 = iVar3;
            do {
              uVar2 = *(undefined2 *)param_2;
              param_2 = param_2 + local_370 * 2;
              *(undefined2 *)param_4 = uVar2;
              param_4 = param_4 + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_378 = local_378 + -1;
          param_2 = param_2 + iVar11 * 2;
          param_4 = param_4 + local_374 * 2;
        } while (local_378 != 0);
        return 1;
      }
      break;
    case 3:
      if (iVar8 != 0) {
        local_364 = (code *)(local_378 + 1);
        do {
          if (iVar3 != 0) {
            iVar8 = iVar3;
            do {
              *param_4 = *param_2;
              param_4[1] = param_2[1];
              pbVar1 = param_2 + 2;
              param_2 = param_2 + iVar10 * 3;
              param_4[2] = *pbVar1;
              param_4 = param_4 + 3;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          param_2 = param_2 + iVar11 * 3;
          param_4 = param_4 + local_374 * 3;
          local_364 = (code *)((int)local_364 + -1);
        } while (local_364 != (code *)0x0);
      }
      break;
    case 4:
      if (iVar8 != 0) {
        local_378 = local_378 + 1;
        do {
          if (iVar3 != 0) {
            iVar8 = iVar3;
            do {
              uVar5 = *(undefined4 *)param_2;
              param_2 = param_2 + local_370 * 4;
              *(undefined4 *)param_4 = uVar5;
              param_4 = param_4 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_378 = local_378 + -1;
          param_2 = param_2 + iVar11 * 4;
          param_4 = param_4 + local_374 * 4;
        } while (local_378 != 0);
        return 1;
      }
      break;
    default:
      goto switchD_100189c1_default;
    }
    return 1;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x8d4,&DAT_10265ce0,0);
switchD_100189c1_default:
  return 0;
}

