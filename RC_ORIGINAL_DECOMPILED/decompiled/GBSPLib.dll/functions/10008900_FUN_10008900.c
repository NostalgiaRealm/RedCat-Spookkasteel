/*
 * FUN_10008900 at 10008900
 * undefined FUN_10008900(void)
 * Address ranges: 10008900-10008f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10008900(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  int *piVar12;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  undefined1 local_498 [12];
  int local_48c;
  float local_488;
  int local_484;
  float *local_480;
  int local_47c;
  int local_478;
  int *local_474;
  float local_470;
  int local_46c;
  int local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  int *local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined1 local_43c [12];
  int local_430;
  undefined1 local_42c [12];
  int local_420;
  int *local_41c;
  float local_418;
  undefined1 local_414 [12];
  float local_408 [8];
  int local_3e8 [250];
  
  if ((DAT_1014e2f8 == 0) || (DAT_1014e30c == 0)) {
    (*DAT_1014e35c)(s_DON_T_GouraudShadeFace___10037f64);
    return 0;
  }
  local_468 = 0;
  iVar8 = param_1 * 0x24;
  piVar5 = (int *)(iVar8 + DAT_1014e288);
  if (0 < piVar5[1]) {
    local_430 = param_1 * 0x15;
    local_420 = iVar8;
    local_41c = piVar5;
    do {
      iVar6 = *piVar5 + local_468;
      local_484 = 0;
      local_478 = DAT_1014e248 + *(int *)(DAT_1014e314 + iVar6 * 4) * 0xc;
      puVar1 = (undefined4 *)(DAT_10260e78 + 4 + local_430 * 4);
      local_464 = *puVar1;
      local_460 = puVar1[1];
      local_45c = puVar1[2];
      local_48c = iVar6;
      if ((*(byte *)(*(int *)(iVar8 + 0x10 + DAT_1014e288) * 0x40 + 0x28 + DAT_1014e2fc) & 2) == 0)
      {
        local_46c = 0;
        if (0 < DAT_10265cdc) {
          local_458 = local_3e8;
          local_474 = &DAT_10260e94;
          do {
            iVar8 = *local_474;
            local_488 = *(float *)(iVar8 + 0x30);
            FUN_10014560(local_414);
            fVar10 = (float10)FUN_100144b0();
            fVar2 = (float)fVar10;
            fVar10 = (float10)FUN_100143d0();
            local_4a8 = (float)fVar10;
            if ((float10)0.001 < fVar10) {
              switch(*(undefined4 *)(iVar8 + 0x34)) {
              case 2:
                fVar10 = (float10)FUN_100143d0();
                if (-fVar10 < (float10)*(float *)(iVar8 + 0x20)) goto LAB_10008ec3;
              case 1:
                local_4a8 = (local_488 - fVar2) * local_4a8;
                break;
              case 3:
                fVar10 = (float10)FUN_100143d0();
                if (-fVar10 <= (float10)0.001) goto LAB_10008ec3;
                local_4a8 = (float)(((float10)local_488 / ((float10)fVar2 * (float10)fVar2)) *
                                    -fVar10 * (float10)local_4a8);
                break;
              case 4:
                fVar10 = (float10)FUN_100087e0(iVar8,fVar2,local_4a8,local_488,0);
                local_4a8 = (float)(fVar10 * (float10)1.25);
                break;
              default:
                (*DAT_1014e358)(s_ApplyLightsToFace__Invalid_light_10037f80);
                return 0;
              }
              if (0.0 < local_4a8) {
                local_448 = local_464;
                local_408[4] = 2.0;
                local_408[5] = 5.0;
                local_408[6] = 20.0;
                local_408[7] = 40.0;
                local_408[0] = 1.0;
                local_408[1] = 0.9;
                local_408[2] = 0.7;
                local_408[3] = 0.5;
                local_444 = local_460;
                local_440 = local_45c;
                FUN_100144b0();
                local_454 = 0;
                local_450 = 0x3f800000;
                local_44c = 0;
                iVar6 = FUN_10014450(0x3dcccccd);
                if (iVar6 != 0) {
                  local_454 = 0;
                  local_450 = 0;
                  local_44c = 0x3f800000;
                }
                FUN_100143f0(local_43c);
                FUN_100144b0();
                FUN_100143f0(local_42c);
                FUN_100144b0();
                local_480 = local_408 + 4;
                local_47c = 0;
                do {
                  iVar6 = 0;
                  local_470 = *local_480;
                  fVar2 = local_470 * 0.5;
                  do {
                    FUN_100145a0(local_470,local_498);
                    fVar11 = fVar2;
                    switch(iVar6) {
                    case 0:
                      FUN_100145a0(fVar2,local_498);
                      break;
                    case 1:
                      FUN_100145a0(fVar2 * -1.0,local_498);
                      break;
                    case 2:
                      fVar11 = fVar2 * -1.0;
                      local_418 = fVar11;
                      FUN_100145a0(fVar11,local_498);
                      break;
                    case 3:
                      FUN_100145a0(fVar2,local_498);
                      fVar11 = fVar2 * -1.0;
                      break;
                    default:
                      goto switchD_10008ca4_default;
                    }
                    FUN_100145a0(fVar11,local_498);
switchD_10008ca4_default:
                    uVar7 = 0;
                    do {
                      local_4a4 = *(float *)(iVar8 + 8);
                      local_4a0 = *(float *)(iVar8 + 0xc);
                      local_49c = *(float *)(iVar8 + 0x10);
                      switch(uVar7) {
                      case 1:
                      case 2:
                        local_4a4 = local_4a4 - 32.0;
                        local_49c = local_49c - 32.0;
                        break;
                      case 3:
                      case 4:
                        local_4a4 = local_4a4 + 32.0;
                        local_49c = local_49c - 32.0;
                        break;
                      case 5:
                      case 6:
                        local_4a4 = local_4a4 + 32.0;
                        goto LAB_10008de6;
                      case 7:
                      case 8:
                        local_4a4 = local_4a4 - 32.0;
LAB_10008de6:
                        local_49c = local_49c + 32.0;
                      }
                      if (0 < (int)uVar7) {
                        uVar3 = uVar7 & 0x80000001;
                        bVar9 = uVar3 == 0;
                        if ((int)uVar3 < 0) {
                          bVar9 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if (bVar9) {
                          local_4a0 = local_4a0 + 32.0;
                        }
                        else {
                          local_4a0 = local_4a0 - 32.0;
                        }
                      }
                      if ((*(char *)(iVar8 + 0x49) != '\0') ||
                         (iVar4 = FUN_1000a1c0(local_498,&local_4a4,0), iVar4 == 0)) {
                        FUN_100145a0(local_4a8 * local_408[local_47c],DAT_1014e2f8 + local_48c * 0xc
                                    );
                        iVar6 = local_48c;
                        if (local_484 < 0xfa) {
                          local_484 = local_484 + 1;
                          *local_458 = iVar8;
                          local_458 = local_458 + 1;
                        }
                        goto LAB_10008ec3;
                      }
                      uVar7 = uVar7 + 1;
                    } while ((int)uVar7 < 1);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < 5);
                  local_47c = local_47c + 1;
                  local_480 = local_480 + 1;
                  iVar6 = local_48c;
                } while (local_47c < 3);
              }
            }
LAB_10008ec3:
            local_46c = local_46c + 1;
            local_474 = local_474 + 1;
            piVar5 = local_41c;
            iVar8 = local_420;
          } while (local_46c < DAT_10265cdc);
        }
        piVar12 = local_3e8;
        iVar6 = DAT_1014e2f8 + iVar6 * 0xc;
      }
      else {
        iVar6 = iVar6 * 0xc;
        piVar12 = (int *)0x0;
        *(undefined4 *)(iVar6 + DAT_1014e2f8) = 0x437f0000;
        *(undefined4 *)(iVar6 + 4 + DAT_1014e2f8) = 0x437f0000;
        *(undefined4 *)(iVar6 + 8 + DAT_1014e2f8) = 0x437f0000;
        iVar6 = iVar6 + DAT_1014e2f8;
      }
      iVar4 = local_468;
      FUN_10008fc0(local_478,&local_464,iVar6,local_484,piVar12);
      local_468 = iVar4 + 1;
    } while (local_468 < piVar5[1]);
  }
  return 1;
}

