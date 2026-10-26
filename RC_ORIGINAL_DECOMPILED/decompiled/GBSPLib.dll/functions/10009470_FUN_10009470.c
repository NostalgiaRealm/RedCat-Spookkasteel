/*
 * FUN_10009470 at 10009470
 * undefined FUN_10009470(void)
 * Address ranges: 10009470-1000991c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009470(undefined4 param_1)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iStack_f78;
  float fStack_f74;
  int iStack_f68;
  int iStack_f64;
  int iStack_f60;
  int iStack_f58;
  undefined4 uStack_f54;
  undefined4 uStack_f50;
  int iStack_f4c;
  int iStack_f48;
  float afStack_f3c [3];
  undefined1 auStack_f30 [3888];
  
  FUN_10014ac0();
  iVar9 = 0;
  uStack_f54 = 0x14;
  uStack_f50 = 1;
  iStack_f4c = 0;
  iVar3 = FUN_10004d50(&uStack_f54,0,param_1);
  if (iVar3 != 0) {
    DAT_10265cd0 = 0;
    iStack_f68 = 0;
    if (0 < DAT_1014e2c0) {
      iStack_f58 = 0;
      iStack_f64 = 0;
      do {
        piVar10 = (int *)(iStack_f64 + DAT_10260e74);
        iVar3 = iStack_f58 + DAT_10260e78;
        *(undefined4 *)(iVar9 + 0x14 + DAT_1014e288) = 0xffffffff;
        *(int *)(iVar9 + 0x18 + DAT_1014e288) = piVar10[0x16] + 1;
        *(int *)(iVar9 + 0x1c + DAT_1014e288) = piVar10[0x17] + 1;
        *(undefined1 *)(iVar9 + 0x20 + DAT_1014e288) = 0xff;
        *(undefined1 *)(iVar9 + 0x21 + DAT_1014e288) = 0xff;
        *(undefined1 *)(iVar9 + 0x22 + DAT_1014e288) = 0xff;
        *(undefined1 *)(iVar9 + 0x23 + DAT_1014e288) = 0xff;
        if ((*(uint *)(*(int *)(iVar9 + 0x10 + DAT_1014e288) * 0x40 + 0x28 + DAT_1014e2fc) & 0x8000)
            == 0) {
          iVar3 = *(int *)(iVar3 + 0x40);
          if ((*piVar10 == 0) &&
             (((1.0 < _DAT_10260e80 || (1.0 < _DAT_10260e84)) || (1.0 < _DAT_10260e88)))) {
            puVar4 = (undefined4 *)FUN_10014310(iVar3 * 0xc);
            *piVar10 = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) {
              (*DAT_1014e358)(s_SaveLightmaps__Out_of_memory_for_10038110);
              return 0;
            }
            piVar10[0xc] = piVar10[0xc] + 1;
            for (uVar6 = iVar3 * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined1 *)puVar4 = 0;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
          }
          if (piVar10[0xc] != 0) {
            *(int *)(iVar9 + 0x14 + DAT_1014e288) = DAT_10265cd0;
            DAT_10265cd4 = DAT_10265cd4 + 1;
            iVar7 = FUN_10014a20(1);
            if (iVar7 != 1) {
              (*DAT_1014e358)(s_SaveLightMaps__There_was_an_erro_100380d0);
              return 0;
            }
            iVar7 = 0;
            DAT_10265cd0 = DAT_10265cd0 + 1;
            iStack_f78 = 0;
            do {
              if (piVar10[iStack_f78] != 0) {
                if (3 < iVar7) {
                  (*DAT_1014e358)(s_SaveLightmaps__Max_LightTypes_on_100380a4);
                  return 0;
                }
                iStack_f48 = iVar7 + 1;
                puVar11 = auStack_f30;
                *(char *)(iVar9 + DAT_1014e288 + 0x1f + iStack_f48) = (char)iStack_f78;
                iStack_f60 = iVar3;
                if (0 < iVar3) {
                  do {
                    FUN_10014530(DAT_10037ab0);
                    if (iStack_f78 == 0) {
                      FUN_10014580(afStack_f3c);
                    }
                    fStack_f74 = 0.0;
                    pfVar8 = afStack_f3c;
                    iVar7 = 3;
                    do {
                      fVar1 = *pfVar8;
                      if (fVar1 < 1.0) {
                        fVar1 = 1.0;
                        *pfVar8 = 1.0;
                      }
                      if (fStack_f74 < fVar1) {
                        fStack_f74 = fVar1;
                      }
                      pfVar8 = pfVar8 + 1;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    iVar7 = 3;
                    DAT_10265cd0 = DAT_10265cd0 + 3;
                    do {
                      uVar2 = __ftol();
                      *puVar11 = uVar2;
                      puVar11 = puVar11 + 1;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    iStack_f60 = iStack_f60 + -1;
                  } while (iStack_f60 != 0);
                }
                iVar7 = iStack_f48;
                iVar5 = FUN_10014a20(iVar3 * 3);
                if (iVar5 != 1) {
                  (*DAT_1014e358)(s_There_was_an_error_saving_the_Li_10038074);
                  return 0;
                }
                FUN_10014360(piVar10[iStack_f78]);
                _DAT_1003fde8 = 0;
                piVar10[iStack_f78] = 0;
              }
              iStack_f78 = iStack_f78 + 1;
            } while (iStack_f78 < 0xc);
            if (piVar10[0xc] != iVar7) {
              (*DAT_1014e358)(s_SaveLightMaps__Num_LightTypes_wa_10038038);
              return 0;
            }
          }
        }
        iStack_f68 = iStack_f68 + 1;
        iStack_f64 = iStack_f64 + 0x60;
        iStack_f58 = iStack_f58 + 0x54;
        iVar9 = iVar9 + 0x24;
      } while (iStack_f68 < DAT_1014e2c0);
    }
    (*DAT_1014e35c)(s_Light_Data_Size____6i_10038170,DAT_10265cd0);
    FUN_10014ac0();
    FUN_10014a40(2);
    uStack_f54 = 0x14;
    uStack_f50 = 1;
    iStack_f4c = DAT_10265cd0;
    iVar3 = FUN_10004d50(&uStack_f54,0,param_1);
    if (iVar3 != 0) {
      FUN_10014a40(2);
      return 1;
    }
  }
  (*DAT_1014e358)(s_SaveLightmaps__Could_not_write_C_10038140);
  return 0;
}

