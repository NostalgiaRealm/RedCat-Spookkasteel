/*
 * FUN_10001c20 at 10001c20
 * undefined4 __cdecl FUN_10001c20(HWND param_1, char * param_2)
 * Address ranges: 10001c20-100024bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10001c20(HWND param_1,char *param_2)

{
  char cVar1;
  HWND pHVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBP;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  _SYSTEMTIME local_4a0;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 auStack_488 [4];
  undefined4 auStack_484 [18];
  int iStack_43c;
  undefined4 uStack_438;
  uint uStack_41c;
  int *piStack_408;
  undefined4 local_400;
  char local_3fc [248];
  int iStack_304;
  uint auStack_300 [95];
  undefined4 auStack_184 [97];
  
  puVar8 = &DAT_1001b3f0;
  for (iVar4 = 0x3557; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  GetSystemTime(&local_4a0);
  FUN_1001264c(s_D3DDrv_Log_10016dec);
  FUN_10002700(s__________________________________10016df8);
  FUN_10002700(s_D3DDrv_v_i__i_10016e3c);
  FUN_10002700(s_Build_Date__May_3_2000__Time__13_10016e4c);
  FUN_10002700(s__________________________________10016e78);
  FUN_10002700(s_Current_Time___2i__2i__2i_10016ebc);
  FUN_10002700(s_Current_Date___2i__2i__4i_10016ed8);
  FUN_10002700(s____D3D_Driver_Initializing____10016ef4);
  DAT_1001b3f0 = param_1;
  FUN_10002700(s_____D3DMain_CreateDDFromName_____10017068);
  FUN_10002700(s_Name___s_1001708c);
  uVar5 = 0xffffffff;
  pcVar9 = param_2;
  do {
    pcVar7 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_400 = 0;
  pcVar9 = pcVar7 + -uVar5;
  pcVar7 = local_3fc;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar7 = pcVar7 + 1;
  }
  auStack_300[1] = 0;
  iVar4 = DirectDrawEnumerateA(&LAB_10002760,&local_400);
  if (iVar4 == 0) {
    if (iStack_304 == 0) {
      FUN_10002700(s_D3DMain_CreateDDFromName__Direct_100170d8);
    }
    else {
      puVar3 = auStack_300;
      for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar8 = auStack_184;
      for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      auStack_300[0] = 0x17c;
      auStack_184[0] = 0x17c;
      iVar4 = (**(code **)(*piStack_408 + 0x2c))(piStack_408,auStack_300,auStack_184);
      if (iVar4 < 0) {
        FUN_10002700(s_D3DMain_CreateDDFromName__GetCap_10017114);
        if (piStack_408 != (int *)0x0) {
          (**(code **)(*piStack_408 + 8))(piStack_408);
        }
      }
      else {
        if ((auStack_300[2] & 0x80000) == 0) {
          pcVar9 = s_DDCAPS2_CANRENDERWINDOWED___NO_10017168;
        }
        else {
          pcVar9 = s_DDCAPS2_CANRENDERWINDOWED___YES_10017140;
        }
        FUN_10002700(pcVar9);
        if ((auStack_300[2] & 2) == 0) {
          pcVar9 = s_DDCAPS2_NO2DDURING3DSCENE___NO_100171b8;
        }
        else {
          pcVar9 = s_DDCAPS2_NO2DDURING3DSCENE___YES_10017190;
        }
        FUN_10002700(pcVar9);
        uVar5 = 0xffffffff;
        DAT_1001bcb0 = piStack_408;
        pcVar9 = param_2;
        do {
          pcVar7 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar7;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar7 + -uVar5;
        pcVar7 = (char *)&DAT_1001b4b0;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_10005fc0((byte *)s_____D3DMain_GetTextureMemory_____10017b74);
        local_4a0.wSecond = 0;
        local_4a0.wMilliseconds = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        local_4a0.wHour = 0x5000;
        local_4a0.wMinute = 0x1000;
        iVar4 = (**(code **)(*DAT_1001bcb0 + 0x5c))
                          (DAT_1001bcb0,&local_4a0.wHour,auStack_488,&stack0xfffffb54);
        if (iVar4 == 0) {
          DAT_10028938 = unaff_EBP;
          FUN_10005fc0((byte *)s_Ram_free___i_10017be0);
          iVar4 = FUN_10004840();
          if (iVar4 != 0) {
            FUN_10002700(s_____D3DMain_EnumDisplayModes_____100171e0);
            DAT_1001eee4 = (undefined4 *)0x0;
            iVar4 = (**(code **)(*DAT_1001bcb0 + 0x20))(DAT_1001bcb0,0,0,0,&LAB_100028e0);
            if (iVar4 == 0) {
              FUN_100085e0(&DAT_1001eee8,DAT_1001eee4,0x10,&LAB_10002880);
              FUN_10002700(s_____D3DMain_CreateD3D_____10017224);
              iVar4 = (**(code **)*DAT_1001bcb0)(DAT_1001bcb0,&DAT_100138e8,&DAT_1001bcb4);
              if (iVar4 == 0) {
                FUN_10002700(s_____D3DMain_EnumDevices_____100172b0);
                DAT_1001f208 = 0;
                iVar4 = (**(code **)(*DAT_1001bcb4 + 0xc))(DAT_1001bcb4,&DAT_100029e0,0);
                pcVar9 = DAT_1001b48c;
                pHVar2 = DAT_1001b488;
                if (iVar4 == 0) {
                  DAT_1002051c = 0;
                  if ((param_1 == (HWND)0xffffffff) && (param_2 == (char *)0xffffffff)) {
                    iVar4 = FUN_10004960((HWND)0xffffffff,DAT_1001b488,DAT_1001b48c,DAT_1001b478,0);
                  }
                  else {
                    iVar4 = FUN_10004960(param_1,param_1,param_2,0x10,1);
                    pHVar2 = param_1;
                    pcVar9 = param_2;
                  }
                  if (iVar4 != 0) {
                    FUN_10002700(s_____D3DMain_PickDevice_____10017d80);
                    switch(DAT_1001b484) {
                    default:
                      uVar5 = 0x4000;
                      break;
                    case 2:
                      uVar5 = 0x2000;
                      break;
                    case 4:
                      uVar5 = 0x1000;
                      break;
                    case 8:
                      uVar5 = 0x800;
                      break;
                    case 0x10:
                      uVar5 = 0x400;
                      break;
                    case 0x18:
                      uVar5 = 0x200;
                      break;
                    case 0x20:
                      uVar5 = 0x100;
                    }
                    iVar4 = 0;
                    if (0 < DAT_1001f208) {
                      puVar3 = &DAT_1001f340;
                      do {
                        if (((((puVar3[0x22] != 0) && ((uVar5 & *puVar3) != 0)) &&
                             ((*(byte *)((int)puVar3 + 5) & 4) != 0)) && ((*puVar3 & 0x800) == 0))
                           && ((puVar3[0x25] != 0 || (DAT_1001eee0 != 0)))) {
                          DAT_1002051c = iVar4;
                          iVar4 = FUN_10004b30();
                          if (iVar4 != 0) {
                            FUN_10002700(s_____D3DMain_CreateZBuffer_____10018314);
                            if (DAT_1001bcc0 != (int *)0x0) {
                              (**(code **)(*DAT_1001bcc0 + 8))(DAT_1001bcc0);
                              DAT_1001bcc0 = (int *)0x0;
                            }
                            puVar8 = auStack_484;
                            for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
                              *puVar8 = 0;
                              puVar8 = puVar8 + 1;
                            }
                            auStack_484[3] = DAT_1001b47c;
                            auStack_484[2] = DAT_1001b480;
                            auStack_484[0] = 0x7c;
                            auStack_484[1] = 0x1007;
                            uStack_41c = 0x24000;
                            uStack_438 = 0x400;
                            (**(code **)(*DAT_1001bcb4 + 0x18))
                                      (DAT_1001bcb4,DAT_1002051c * 0x1e8 + 0x1001f3b8,&LAB_10003020,
                                       &iStack_43c);
                            if (iStack_43c != 0x20) {
                              FUN_10002700(s_CreateZBuffer__No_zbuffer_found_f_10018334);
                              break;
                            }
                            iVar4 = (**(code **)(*DAT_1001bcb0 + 0x18))
                                              (DAT_1001bcb0,auStack_484,&DAT_1001bcc0,0);
                            if (iVar4 == 0) {
                              iVar4 = (**(code **)(*DAT_1001bcbc + 0xc))(DAT_1001bcbc,DAT_1001bcc0);
                              if (iVar4 == 0) {
                                iVar4 = FUN_10002d30(auStack_484,DAT_1001bcc0);
                                if (iVar4 == 0) {
                                  _DAT_1001bccc = uStack_41c >> 0xe & 1;
                                  FUN_10002700(s_____D3DMain_CreateDevice_____10017d9c);
                                  if (DAT_1001bcd0 != (int *)0x0) {
                                    (**(code **)(*DAT_1001bcd0 + 8))(DAT_1001bcd0);
                                    DAT_1001bcd0 = (int *)0x0;
                                  }
                                  iVar4 = (**(code **)(*DAT_1001bcb4 + 0x10))
                                                    (DAT_1001bcb4,DAT_1002051c * 0x1e8 + 0x1001f3b8,
                                                     DAT_1001bcbc,&DAT_1001bcd0);
                                  if (iVar4 == 0) {
                                    iVar4 = FUN_10002d60(pHVar2,pcVar9);
                                    if ((iVar4 != 0) && (iVar4 = FUN_10003f90(), iVar4 != 0)) {
                                      DAT_10028944 = (uint)(1 < *(ushort *)
                                                                 (DAT_1002051c * 0x1e8 + 0x1001f3ee)
                                                           );
                                      FUN_10002700(s_____D3DMain_SetRenderState_____10016f18);
                                      iVar4 = (**(code **)(*DAT_1001bcd0 + 0x14))(DAT_1001bcd0);
                                      if (iVar4 == 0) {
                                        iVar4 = (**(code **)(*DAT_1001bcd0 + 0x34))
                                                          (DAT_1001bcd0,&DAT_1001bcd4);
                                        if (iVar4 == 0) {
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x17,4);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,4,1);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x1d,0);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x1a,1);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,9,2);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x16,1);
                                          (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x29,1);
                                          iVar4 = (**(code **)(*DAT_1001bcd0 + 0x18))(DAT_1001bcd0);
                                          if (iVar4 == 0) {
                                            DAT_10028934 = 1;
                                            iVar4 = FUN_10003060();
                                            if ((iVar4 != 0) && (iVar4 = FUN_100042f0(), iVar4 != 0)
                                               ) {
                                              iVar4 = FUN_10006fa0();
                                              if (iVar4 == 0) {
                                                return 0;
                                              }
                                              FUN_10001970();
                                              FUN_10001980();
                                              FUN_10002700(
                                                  s____Initialization_was_successful_10016fc0);
                                              return 1;
                                            }
                                          }
                                          else {
                                            FUN_10001000(iVar4);
                                            FUN_10002700(s_D3DMain_InitD3D__EndScene_failed_10016f94
                                                        );
                                          }
                                        }
                                        else {
                                          FUN_10001000(iVar4);
                                          FUN_10002700(s_D3DMain_InitD3D__SetViewport_fai_10016f68);
                                        }
                                      }
                                      else {
                                        FUN_10001000(iVar4);
                                        FUN_10002700(s_D3DMain_InitD3D__BeginScene_fail_10016f3c);
                                      }
                                    }
                                  }
                                  else {
                                    FUN_10001000(iVar4);
                                    FUN_10002700(s_D3DMain_CreateDevice__lpD3D_>Cre_10017dbc);
                                  }
                                  break;
                                }
                                FUN_10001000(iVar4);
                                pcVar9 = s_CreateZBuffer__Failed_to_get_sur_100184ec;
                              }
                              else {
                                FUN_10001000(iVar4);
                                pcVar9 = s_CreateZBuffer__AddAttachedBuffer_100184ac;
                              }
LAB_1000225b:
                              FUN_10002700(pcVar9);
                            }
                            else {
                              if ((iVar4 != -0x7ff8fff2) && (iVar4 != -0x7789fe84)) {
                                FUN_10001000(iVar4);
                                pcVar9 = s_CreateZBuffer__CreateSurface_for_10018470;
                                goto LAB_1000225b;
                              }
                              if (DAT_1001eee0 == 0) {
                                FUN_10002700(s_CreateZBuffer__There_was_not_eno_100183ec);
                              }
                              else {
                                FUN_10002700(s_CreateZBuffer__There_was_not_eno_10018368);
                              }
                            }
                            if (DAT_1001bcc0 != (int *)0x0) {
                              (**(code **)(*DAT_1001bcc0 + 8))(DAT_1001bcc0);
                              DAT_1001bcc0 = (int *)0x0;
                            }
                          }
                          break;
                        }
                        iVar4 = iVar4 + 1;
                        puVar3 = puVar3 + 0x7a;
                      } while (iVar4 < DAT_1001f208);
                    }
                  }
                }
                else {
                  FUN_10001000(iVar4);
                  FUN_10002700(s_Enumeration_of_drivers_failed____100172d0);
                }
              }
              else {
                FUN_10001000(iVar4);
                FUN_10002700(s_Creation_of_IDirect3D_failed___s_10017240);
              }
            }
            else {
              FUN_10001000(iVar4);
              FUN_10002700(s_EnumDisplayModes_failed___s_10017204);
              DAT_1001eee4 = (undefined4 *)0x0;
            }
          }
        }
        else {
          FUN_10001000(iVar4);
          FUN_10005fc0((byte *)s_Getting_DD_capabilities_failed_w_10017b98);
        }
      }
    }
  }
  else {
    FUN_10001000(iVar4);
    FUN_10002700(s_D3DMain_CreateDDFromName__Direct_10017098);
  }
  FUN_10002700(s____Initialization_was_NOT_succes_10016fe8);
  FUN_10002500();
  return 0;
}

