/*
 * FUN_1000b480 at 1000b480
 * undefined FUN_1000b480(void)
 * Address ranges: 1000b480-1000b81e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b480(void)

{
  double dVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  double local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  iVar4 = FUN_10014a00(4);
  if (iVar4 == 0) {
    return 0;
  }
  local_24 = 0;
  if (0 < DAT_10311d00) {
    puVar12 = &DAT_10265cf8;
    do {
      puVar5 = puVar12;
      for (iVar4 = 0x2b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar4 = FUN_10014a00(4);
      if (iVar4 == 0) {
        return 0;
      }
      local_30 = (undefined4 *)0x0;
      local_2c = 0;
      if (0 < local_28) {
        do {
          puVar5 = (undefined4 *)FUN_10014310(0xc);
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          iVar4 = FUN_10014a00(4);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_10014310(local_34);
          puVar5[1] = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_10014a00(local_34);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_10014a00(4);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_10014310(local_34);
          puVar5[2] = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_10014a00(local_34);
          if (iVar4 == 0) {
            return 0;
          }
          *puVar5 = 0;
          if (local_30 == (undefined4 *)0x0) {
            puVar12[2] = puVar5;
          }
          else {
            *local_30 = puVar5;
          }
          iVar4 = FUN_100332c0(puVar5[1],s_ClassName_100385c4);
          if (iVar4 == 0) {
            uVar9 = 0xffffffff;
            pcVar14 = (char *)puVar5[2];
            do {
              pcVar13 = pcVar14;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar14 + 1;
              cVar2 = *pcVar14;
              pcVar14 = pcVar13;
            } while (cVar2 != '\0');
            uVar9 = ~uVar9;
            pcVar14 = pcVar13 + -uVar9;
            pcVar13 = (char *)(puVar12 + 4);
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          else {
            iVar4 = FUN_100332c0(puVar5[1],s_Target_100385bc);
            if (iVar4 == 0) {
              uVar9 = 0xffffffff;
              pcVar14 = (char *)puVar5[2];
              do {
                pcVar13 = pcVar14;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar13 = pcVar14 + 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar13;
              } while (cVar2 != '\0');
              uVar9 = ~uVar9;
              pcVar14 = pcVar13 + -uVar9;
              pcVar13 = (char *)(puVar12 + 0x1a);
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar13 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            else {
              iVar4 = FUN_100332c0(puVar5[1],s_TargetName_100385b0);
              if (iVar4 == 0) {
                uVar9 = 0xffffffff;
                pcVar14 = (char *)puVar5[2];
                do {
                  pcVar13 = pcVar14;
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  pcVar13 = pcVar14 + 1;
                  cVar2 = *pcVar14;
                  pcVar14 = pcVar13;
                } while (cVar2 != '\0');
                uVar9 = ~uVar9;
                pcVar14 = pcVar13 + -uVar9;
                pcVar13 = (char *)(puVar12 + 0x22);
                for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pcVar13 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar13 = pcVar13 + 1;
                }
              }
              else {
                iVar4 = FUN_100332c0(puVar5[1],s_Origin_100385a8);
                if (iVar4 == 0) {
                  puVar12[0x2a] = puVar12[0x2a] | 1;
                  iVar4 = FUN_1002836b(puVar5[2],s__lf__lf__lf_10038518,&local_20,local_18,local_10)
                  ;
                  if (iVar4 == 3) {
                    pdVar11 = &local_20;
                    pfVar6 = (float *)(puVar12 + 0x14);
                    iVar4 = 3;
                    do {
                      dVar1 = *pdVar11;
                      pdVar11 = pdVar11 + 1;
                      *pfVar6 = (float)dVar1;
                      pfVar6 = pfVar6 + 1;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                }
                else {
                  iVar4 = FUN_10033390(puVar5[1],s_Light_100384fc,5);
                  if ((iVar4 == 0) ||
                     (iVar4 = FUN_10033390(puVar5[1],s__Light_100385a0,5), iVar4 == 0)) {
                    FUN_10028314(puVar5[2]);
                    uVar8 = __ftol();
                    puVar12[0x18] = uVar8;
                  }
                  else {
                    iVar4 = FUN_100332c0(puVar5[1],s_LType_10038598);
                    if ((iVar4 == 0) ||
                       (iVar4 = FUN_100332c0(puVar5[1],s_Style_10038590), iVar4 == 0)) {
                      FUN_10028314(puVar5[2]);
                      iVar4 = __ftol();
                      puVar12[0x19] = iVar4;
                      if (0xfe < iVar4) {
                        (*DAT_1014e358)(s_Bad_light_LType__i__must_be_0_25_10038544,iVar4);
                        return 0;
                      }
                    }
                    else {
                      pbVar7 = (byte *)puVar5[1];
                      pcVar14 = s_Angle_10038588;
                      do {
                        bVar3 = *pbVar7;
                        bVar15 = bVar3 < (byte)*pcVar14;
                        if (bVar3 != *pcVar14) {
LAB_1000b75f:
                          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                          goto LAB_1000b764;
                        }
                        if (bVar3 == 0) break;
                        bVar3 = pbVar7[1];
                        bVar15 = bVar3 < (byte)pcVar14[1];
                        if (bVar3 != pcVar14[1]) goto LAB_1000b75f;
                        pbVar7 = pbVar7 + 2;
                        pcVar14 = pcVar14 + 2;
                      } while (bVar3 != 0);
                      iVar4 = 0;
LAB_1000b764:
                      if (iVar4 == 0) {
                        fVar16 = (float10)FUN_10028314(puVar5[2]);
                        puVar12[0x17] = (float)fVar16;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar4 = puVar12[0x18];
          if ((iVar4 < 0) || (0x9c4 < iVar4)) {
            (*DAT_1014e35c)(s__WARNING__Bad_light_value___i_10038568,iVar4);
          }
          local_2c = local_2c + 1;
          local_30 = puVar5;
        } while (local_2c < local_28);
      }
      local_24 = local_24 + 1;
      puVar12 = puVar12 + 0x2b;
    } while (local_24 < DAT_10311d00);
  }
  return 1;
}

