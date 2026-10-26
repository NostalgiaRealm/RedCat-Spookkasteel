/*
 * FUN_10012e90 at 10012e90
 * undefined FUN_10012e90(void)
 * Address ranges: 10012e90-100132a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10012e90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_20;
  int local_1c;
  int local_14;
  char local_10 [16];
  
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = FUN_10014700(param_1,0,1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_LoadPortalFile__Could_not_open___1003a558,param_1);
  }
  else {
    iVar2 = FUN_10014a00(0xc);
    if (iVar2 == 1) {
      iVar2 = _strncmp(local_10,s_GBSP_PRTFILE_1003931c,0xc);
      if (iVar2 == 0) {
        iVar2 = FUN_10014a00(4);
        if (iVar2 == 1) {
          if (DAT_104e98c8 < 25000) {
            DAT_104e98b4 = (undefined4 *)FUN_10014310(DAT_104e98c8 * 0x44);
            if (DAT_104e98b4 == (undefined4 *)0x0) {
              (*DAT_1014e358)(s_LoadPortalFile__Out_of_memory_fo_1003a464);
            }
            else {
              puVar6 = DAT_104e98b4;
              for (uVar3 = DAT_104e98c8 * 0x11 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(undefined1 *)puVar6 = 0;
                puVar6 = (undefined4 *)((int)puVar6 + 1);
              }
              DAT_104e98b8 = FUN_10014310(DAT_104e98c8 * 4);
              if (DAT_104e98b8 == 0) {
                (*DAT_1014e358)(s_LoadPortalFile__Out_of_memory_fo_1003a42c);
              }
              else {
                iVar2 = FUN_10014a00(4);
                if (iVar2 == 1) {
                  if (DAT_104e98dc <= DAT_1014e290) {
                    DAT_104e98d0 = (undefined4 *)FUN_10014310(DAT_104e98dc * 0xc);
                    if (DAT_104e98d0 != (undefined4 *)0x0) {
                      puVar6 = DAT_104e98d0;
                      for (uVar3 = DAT_104e98dc * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
                        *puVar6 = 0;
                        puVar6 = puVar6 + 1;
                      }
                      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *(undefined1 *)puVar6 = 0;
                        puVar6 = (undefined4 *)((int)puVar6 + 1);
                      }
                      if (0 < DAT_104e98c8) {
                        param_1 = 0;
                        do {
                          iVar2 = FUN_10014a00(4);
                          if (iVar2 != 1) {
                            (*DAT_1014e358)(s_LoadPortalFile__Error_reading_Nu_1003a3a0);
                            goto LAB_1001321e;
                          }
                          iVar4 = FUN_1000c250(local_20);
                          if (iVar4 == 0) goto LAB_1001321e;
                          iVar2 = FUN_10014a00(local_20 * 0xc);
                          if (iVar2 != 1) {
                            (*DAT_1014e358)(s_LoadPortalFile__Error_reading_po_1003a36c);
                            goto LAB_1001321e;
                          }
                          iVar2 = FUN_10014a00(4);
                          if (iVar2 != 1) {
                            (*DAT_1014e358)(s_LoadPortalFile__Error_reading_po_1003a338);
                            goto LAB_1001321e;
                          }
                          iVar2 = FUN_10014a00(4);
                          if (iVar2 != 1) {
                            (*DAT_1014e358)(s_LoadPortalFile__Error_reading_po_1003a308);
                            goto LAB_1001321e;
                          }
                          if ((DAT_104e98dc <= local_14) || (local_14 < 0)) {
                            pcVar7 = s_LoadPortalFile__Invalid_LeafFrom_1003a2b8;
                            local_1c = local_14;
LAB_10013213:
                            (*DAT_1014e358)(pcVar7,local_1c);
                            goto LAB_1001321e;
                          }
                          if ((DAT_104e98dc <= local_1c) || (local_1c < 0)) {
                            pcVar7 = s_LoadPortalFile__Invalid_LeafTo____1003a2e0;
                            goto LAB_10013213;
                          }
                          puVar6 = DAT_104e98d0 + local_14 * 3;
                          puVar1 = (undefined4 *)(param_1 + (int)DAT_104e98b4);
                          puVar1[1] = iVar4;
                          puVar1[0xd] = local_1c;
                          FUN_10002920(*(undefined4 *)(iVar4 + 4),puVar1 + 2);
                          *puVar1 = *puVar6;
                          *puVar6 = puVar1;
                          FUN_10013920(puVar1);
                          param_1 = param_1 + 0x44;
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < DAT_104e98c8);
                      }
                      DAT_104e98d8 = DAT_104e98c8 + 0x3f >> 3 & 0xfffffff8;
                      DAT_104e98bc = DAT_104e98dc + 0x3f >> 3 & 0xfffffff8;
                      DAT_104e98c4 = DAT_104e98d8 >> 2;
                      _DAT_104e98c0 = DAT_104e98bc >> 2;
                      FUN_10014990();
                      return 1;
                    }
                    (*DAT_1014e358)(s_LoadPortalFile__Out_of_memory_fo_1003a3cc);
                  }
                }
                else {
                  (*DAT_1014e358)(s_LoadPortalFile__Error_reading_Nu_1003a3fc);
                }
              }
            }
          }
          else {
            (*DAT_1014e358)(s_LoadPortalFile__Max_portals_for_t_1003a494);
          }
        }
        else {
          (*DAT_1014e358)(s_LoadPortalFile__Error_reading_Nu_1003a4c4);
        }
      }
      else {
        (*DAT_1014e358)(s_LoadPortalFile___s_is_not_a_GBSP_1003a4f4,param_1);
      }
    }
    else {
      (*DAT_1014e358)(s_LoadPortalFile__Error_reading_po_1003a524);
    }
LAB_1001321e:
    FUN_10014990();
  }
  if (DAT_104e98b4 != (undefined4 *)0x0) {
    FUN_10014360(DAT_104e98b4);
    DAT_104e98b4 = (undefined4 *)0x0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_104e98b8 != 0) {
    FUN_10014360(DAT_104e98b8);
    DAT_104e98b8 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_104e98d0 != (undefined4 *)0x0) {
    FUN_10014360(DAT_104e98d0);
    DAT_104e98d0 = (undefined4 *)0x0;
    _DAT_1003fde8 = 0;
  }
  if (iVar4 != 0) {
    FUN_1000c2e0(iVar4);
  }
  DAT_104e98b4 = (undefined4 *)0x0;
  DAT_104e98b8 = 0;
  DAT_104e98d0 = (undefined4 *)0x0;
  return 0;
}

