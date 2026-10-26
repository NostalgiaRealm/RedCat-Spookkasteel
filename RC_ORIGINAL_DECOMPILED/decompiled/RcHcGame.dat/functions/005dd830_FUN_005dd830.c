/*
 * FUN_005dd830 at 005dd830
 * undefined FUN_005dd830(void)
 * Address ranges: 005dd830-005dda1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005dd830(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int local_44;
  undefined1 local_c [12];
  
  pfVar9 = (float *)0x0;
  iVar6 = FUN_0059b1e0();
  if (0 < iVar6) {
    pfVar9 = (float *)FUN_005de6a0();
  }
  if (param_2 == 0) {
    local_44 = param_1;
    if (iVar6 < 3) {
      local_44 = 0;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        fVar2 = pfVar9[iVar7 * 10];
        iVar1 = iVar7 + 1;
        if (iVar7 == 0) {
          if (local_44 == 1) {
            fVar3 = fVar2 - (pfVar9[iVar6 * 10 + -10] - pfVar9[(iVar6 + -2) * 10]);
          }
          else {
            fVar3 = *pfVar9;
          }
        }
        else {
          fVar3 = pfVar9[(iVar7 + -1) * 10];
        }
        iVar8 = iVar1;
        if (iVar1 == iVar6) {
          if (local_44 != 1) {
            iVar8 = iVar6 + -1;
            goto LAB_005dd8fa;
          }
          fVar4 = (pfVar9[10] - *pfVar9) + fVar2;
        }
        else {
LAB_005dd8fa:
          fVar4 = pfVar9[iVar8 * 10];
        }
        fVar5 = (fVar4 - fVar2) + (fVar2 - fVar3);
        if (local_44 == 1) {
LAB_005dd9c5:
          FUN_005b2fe0(local_c);
          FUN_005b2fa0((fVar4 - fVar2) / fVar5);
          FUN_005b2fa0((fVar2 - fVar3) / fVar5);
        }
        else if (iVar7 == 0) {
          FUN_005b2fe0(pfVar9 + 4);
          FUN_005b3050();
        }
        else {
          if (iVar7 != iVar6 + -1) goto LAB_005dd9c5;
          FUN_005b2fe0(pfVar9 + iVar7 * 10 + 4);
          FUN_005b3050();
        }
        iVar7 = iVar1;
      } while (iVar1 < iVar6);
    }
  }
  else if (0 < iVar6) {
    do {
      FUN_005b3070();
      FUN_005b3070();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}

