/*
 * FUN_10010680 at 10010680
 * undefined FUN_10010680(void)
 * Address ranges: 10010680-10010ac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10010680(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [6];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_100104c0();
  local_54 = 0;
  if (0 < DAT_1014e2c0) {
    local_5c = 0;
    local_48 = 0;
    local_60 = 0x40;
    do {
      piVar2 = (int *)(DAT_1014e288 + local_48);
      if (DAT_1014e350 != 0) {
        (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
        return 0;
      }
      local_58 = *(int *)(local_60 + -4 + DAT_10260e78);
      puVar9 = *(undefined1 **)(local_5c + DAT_10260e74);
      uVar7 = *(uint *)(piVar2[4] * 0x40 + 0x28 + DAT_1014e2fc);
      if (((uVar7 & 0x8000) == 0) || ((uVar7 & 0x20) != 0)) {
        local_14 = *(float *)(DAT_1014e2e8 + piVar2[2] * 0x14);
        local_10 = *(undefined4 *)(DAT_1014e2e8 + 4 + piVar2[2] * 0x14);
        local_c = *(undefined4 *)(DAT_1014e2e8 + 8 + piVar2[2] * 0x14);
        local_8 = *(undefined4 *)(DAT_1014e2e8 + 0xc + piVar2[2] * 0x14);
        local_4 = 6;
        iVar3 = FUN_10010ad0(local_2c + 6);
        if (iVar3 == 0) {
          (*DAT_1014e358)(s_AbsorbPatches__Tri_PatchCreate_f_100398ac);
          return 0;
        }
        iVar6 = *(int *)(local_48 + 8 + DAT_1014e288);
        iVar10 = *(int *)(local_48 + 0xc + DAT_1014e288);
        FUN_100105c0(local_54,local_2c,local_2c + 3);
        for (puVar1 = *(undefined4 **)(DAT_10313030 + iVar6 * 4); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (*(int *)(DAT_1014e288 + 0xc + puVar1[1] * 0x24) == iVar10) {
            for (puVar11 = *(undefined4 **)(DAT_1031303c + puVar1[1] * 4);
                puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
              iVar6 = 0;
              pfVar8 = (float *)(puVar11 + 2);
              do {
                if ((*pfVar8 < local_2c[iVar6] - (_DAT_10037ac8 + _DAT_10037ac8)) ||
                   (local_2c[iVar6 + 3] + _DAT_10037ac8 + _DAT_10037ac8 < *pfVar8)) break;
                iVar6 = iVar6 + 1;
                pfVar8 = pfVar8 + 1;
              } while (iVar6 < 3);
              if ((iVar6 == 3) && (iVar6 = FUN_10010ff0(puVar11,iVar3), iVar6 == 0)) {
                (*DAT_1014e358)(s_AbsorbPatches__Could_not_add_pat_10039874);
                return 0;
              }
            }
          }
        }
        iVar6 = FUN_10010ea0(iVar3);
        if (iVar6 == 0) {
          (*DAT_1014e358)(s_AbsorbPatches__Could_not_triangu_10039844);
          return 0;
        }
        if ((uVar7 & 0x20) == 0) {
          bVar12 = puVar9 != (undefined1 *)0x0;
          iVar6 = 0;
          if (0 < *(int *)(local_60 + DAT_10260e78)) {
            iVar10 = 0;
            do {
              iVar4 = FUN_100111c0(local_58,iVar3,&local_38);
              if (iVar4 == 0) {
                (*DAT_1014e358)(s_AbsorbPatches__Could_not_sample_f_100398d8);
              }
              else {
                if (!bVar12) {
                  if (((local_38 <= 0.0) && (local_34 <= 0.0)) && (local_30 <= 0.0))
                  goto LAB_100109bb;
                  if (4 < *(int *)(DAT_10260e74 + 0x30 + local_5c)) {
                    (*DAT_1014e358)(s_AbsorbPatches__Too_many_Light_Ty_10039814);
                    return 0;
                  }
                  uVar5 = FUN_10014310(*(int *)(local_60 + DAT_10260e78) * 0xc);
                  *(undefined4 *)(DAT_10260e74 + local_5c) = uVar5;
                  if (*(int *)(DAT_10260e74 + local_5c) == 0) {
                    (*DAT_1014e358)(s_AbsorbPAtches__Out_of_memory_for_100397e4);
                    return 0;
                  }
                  *(int *)(DAT_10260e74 + 0x30 + local_5c) =
                       *(int *)(DAT_10260e74 + 0x30 + local_5c) + 1;
                  puVar1 = *(undefined4 **)(DAT_10260e74 + local_5c);
                  puVar11 = puVar1;
                  for (uVar7 = *(int *)(local_60 + DAT_10260e78) * 3 & 0x3fffffff; uVar7 != 0;
                      uVar7 = uVar7 - 1) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                  puVar9 = (undefined1 *)((int)puVar1 + iVar10);
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(undefined1 *)puVar11 = 0;
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  bVar12 = true;
                }
                FUN_10014580(puVar9);
              }
LAB_100109bb:
              local_58 = local_58 + 0xc;
              iVar6 = iVar6 + 1;
              iVar10 = iVar10 + 0xc;
              puVar9 = puVar9 + 0xc;
            } while (iVar6 < *(int *)(local_60 + DAT_10260e78));
          }
        }
        else {
          iVar6 = 0;
          if (0 < piVar2[1]) {
            do {
              iVar10 = *piVar2;
              FUN_100111c0(DAT_1014e248 + *(int *)(DAT_1014e314 + (iVar10 + iVar6) * 4) * 0xc,iVar3,
                           &local_38);
              FUN_10014580(DAT_1014e2f8 + (iVar10 + iVar6) * 0xc);
              iVar6 = iVar6 + 1;
            } while (iVar6 < piVar2[1]);
          }
        }
        FUN_10010b10(iVar3);
      }
      local_54 = local_54 + 1;
      local_48 = local_48 + 0x24;
      local_5c = local_5c + 0x60;
      local_60 = local_60 + 0x54;
    } while (local_54 < DAT_1014e2c0);
  }
  FUN_10010560();
  return 1;
}

