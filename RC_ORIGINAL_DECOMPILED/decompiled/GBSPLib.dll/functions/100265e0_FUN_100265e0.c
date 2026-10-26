/*
 * FUN_100265e0 at 100265e0
 * undefined FUN_100265e0(void)
 * Address ranges: 100265e0-100267cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100265e0(int param_1,int param_2)

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
  iVar6 = FUN_10024f00();
  if (0 < iVar6) {
    pfVar9 = (float *)FUN_10024ee0();
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
            goto LAB_100266aa;
          }
          fVar4 = (pfVar9[10] - *pfVar9) + fVar2;
        }
        else {
LAB_100266aa:
          fVar4 = pfVar9[iVar8 * 10];
        }
        fVar5 = (fVar4 - fVar2) + (fVar2 - fVar3);
        if (local_44 == 1) {
LAB_10026775:
          FUN_10014560(local_c);
          FUN_10014530((fVar4 - fVar2) / fVar5);
          FUN_10014530((fVar2 - fVar3) / fVar5);
        }
        else if (iVar7 == 0) {
          FUN_10014560(pfVar9 + 4);
          FUN_100145d0();
        }
        else {
          if (iVar7 != iVar6 + -1) goto LAB_10026775;
          FUN_10014560(pfVar9 + iVar7 * 10 + 4);
          FUN_100145d0();
        }
        iVar7 = iVar1;
      } while (iVar1 < iVar6);
    }
  }
  else if (0 < iVar6) {
    do {
      FUN_100145f0();
      FUN_100145f0();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}

