/*
 * FUN_100084d0 at 100084d0
 * undefined FUN_100084d0(void)
 * Address ranges: 100084d0-100087dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100084d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_8;
  
  (*DAT_1014e35c)(s_Using_RWM_Gouraud_coloring__d_RG_10037f34,DAT_1014e30c);
  DAT_10260e74 = (undefined4 *)FUN_10014310(DAT_1014e2c0 * 0x60);
  iVar7 = 0;
  if (DAT_10260e74 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_LightFaces__Out_of_memory_for_Li_10037f08);
    return 0;
  }
  DAT_10260e78 = (undefined4 *)FUN_10014310(DAT_1014e2c0 * 0x54);
  if (DAT_10260e78 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_LightFaces__Out_of_memory_for_Fa_10037edc);
    return 0;
  }
  iVar6 = 0;
  puVar8 = DAT_10260e74;
  for (iVar4 = (DAT_1014e2c0 * 3 & 0x7ffffffU) << 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar8 = DAT_10260e78;
  for (uVar5 = DAT_1014e2c0 * 0x15 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar4 = DAT_1014e2c0 / 0x14;
  _DAT_10265cc8 = 0;
  if (0 < DAT_1014e2c0) {
    iVar9 = 0;
    iStack_8 = 0;
    do {
      if (DAT_1014e350 != 0) {
        (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
        return 0;
      }
      if (((iVar4 != 0) && (iVar6 % iVar4 == 0)) && (iVar6 / iVar4 < 0x15)) {
        (*DAT_1014e35c)(&DAT_10037ed8,iVar6 / iVar4);
      }
      FUN_10009920(iVar6,(undefined1 *)(iVar7 + 4 + (int)DAT_10260e78));
      *(int *)(iVar7 + (int)DAT_10260e78) = iVar6;
      iVar1 = FUN_10008900(iVar6);
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_LightFaces__GouraudShadeFace_fai_10037ea8);
        return 0;
      }
      if (DAT_10037ac4 != 0) {
        FUN_100082a0(iVar6);
      }
      if ((*(uint *)(*(int *)(iStack_8 + 0x10 + DAT_1014e288) * 0x40 + 0x28 + DAT_1014e2fc) & 0x8000
          ) == 0) {
        iVar1 = FUN_100099c0((undefined1 *)(iVar7 + (int)DAT_10260e78),
                             (undefined1 *)(iVar9 + (int)DAT_10260e74));
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = FUN_10014310((*(int *)(iVar9 + 0x5c + (int)DAT_10260e74) + 1) *
                             (*(int *)(iVar9 + 0x58 + (int)DAT_10260e74) + 1) * 0xc);
        *(undefined4 *)(iVar7 + 0x3c + (int)DAT_10260e78) = uVar2;
        if (*(int *)(iVar7 + 0x3c + (int)DAT_10260e78) == 0) {
          (*DAT_1014e358)(s_LightFaces__Out_of_memory_for_fa_10037e78);
          return 0;
        }
        iVar1 = 0;
        if (0 < DAT_10037abc) {
          do {
            FUN_10009cb0((undefined1 *)(iVar7 + (int)DAT_10260e78),
                         (undefined1 *)(iVar9 + (int)DAT_10260e74),(&DAT_10037adc)[iVar1],
                         (&DAT_10037af0)[iVar1]);
            iVar3 = FUN_10009130((undefined1 *)(iVar7 + (int)DAT_10260e78),
                                 (undefined1 *)(iVar9 + (int)DAT_10260e74),1.0 / (float)DAT_10037abc
                                );
            if (iVar3 == 0) {
              return 0;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < DAT_10037abc);
        }
        if (DAT_10037ac4 != 0) {
          FUN_100083a0(iVar6);
        }
      }
      iVar6 = iVar6 + 1;
      iStack_8 = iStack_8 + 0x24;
      iVar9 = iVar9 + 0x60;
      iVar7 = iVar7 + 0x54;
    } while (iVar6 < DAT_1014e2c0);
  }
  (*DAT_1014e35c)(&DAT_10037ed4);
  return 1;
}

