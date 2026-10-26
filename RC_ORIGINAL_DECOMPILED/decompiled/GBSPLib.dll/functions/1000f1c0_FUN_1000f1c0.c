/*
 * FUN_1000f1c0 at 1000f1c0
 * undefined FUN_1000f1c0(void)
 * Address ranges: 1000f1c0-1000f454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000f1c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  undefined1 local_14 [20];
  
  if ((*param_1 != -1) && (param_1[0x14] == 0)) {
    if (param_1[0xd] != 0) {
      (*DAT_1014e35c)(s__WARNING__SavePortalFile_r__Node_100392b4);
    }
    iVar3 = FUN_1000f1c0(param_1[4],param_2);
    if (iVar3 == 0) {
      return false;
    }
    iVar3 = FUN_1000f1c0(param_1[5],param_2);
    return iVar3 != 0;
  }
  iVar3 = FUN_1000ef80(param_1[2]);
  if (iVar3 == 0) {
    for (piVar1 = (int *)param_1[0xd]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[uVar5 + 3]) {
      piVar2 = (int *)piVar1[2];
      local_1c = piVar1[1];
      uVar5 = (uint)(piVar2 == param_1);
      if ((*piVar1 != 0) &&
         (local_20 = uVar5, local_18 = piVar2, iVar3 = FUN_1000f000(piVar1), iVar3 != 0)) {
        if (*(int *)(local_1c + 0x54) == piVar2[0x15]) {
          (*DAT_1014e358)(s_PrepPortalFile_r__Portal_seperat_10039118);
          return false;
        }
        piVar2 = (int *)*piVar1;
        if (*piVar2 < 3) {
          (*DAT_1014e358)(s_SavePortalFile_r__Portal_poly_ve_10039288);
          return false;
        }
        iVar3 = FUN_10027a7a(piVar2,4,1,param_2);
        if (iVar3 != 1) {
          (*DAT_1014e358)(s_SavePortalFile_r__Error_writing_p_10039254);
          return false;
        }
        if (uVar5 == 0) {
          iVar3 = *piVar2 + -1;
          if (-1 < iVar3) {
            iVar6 = iVar3 * 0xc;
            do {
              iVar4 = FUN_10027a7a(piVar2[1] + iVar6,0xc,1,param_2);
              if (iVar4 != 1) goto LAB_1000f425;
              iVar3 = iVar3 + -1;
              iVar6 = iVar6 + -0xc;
              uVar5 = local_20;
            } while (-1 < iVar3);
          }
        }
        else {
          iVar3 = FUN_10027a7a(piVar2[1],0xc,*piVar2,param_2);
          if (iVar3 != *piVar2) {
LAB_1000f425:
            (*DAT_1014e358)(s_SavePortalFile_r__Error_writing_p_10039220);
            return false;
          }
        }
        FUN_10002920(piVar2[1],local_14);
        fVar7 = (float10)FUN_100143d0();
        if (fVar7 < (float10)0.99) {
          uVar5 = (uint)(local_20 == 0);
        }
        iVar3 = *(int *)((&local_1c)[uVar5] + 0x54);
        if ((iVar3 < 0) || (DAT_1014e62c < iVar3)) {
LAB_1000f43d:
          (*DAT_1014e358)(s_SavePortalFile_r__Bad_Leaf_Clust_100391f0);
          return false;
        }
        local_24 = iVar3;
        FUN_10027a7a(&local_24,4,1,param_2);
        iVar3 = *(int *)((&local_1c)[uVar5 == 0] + 0x54);
        if ((iVar3 < 0) || (DAT_1014e62c < iVar3)) goto LAB_1000f43d;
        local_24 = iVar3;
        FUN_10027a7a(&local_24,4,1,param_2);
        uVar5 = local_20;
      }
    }
  }
  return true;
}

