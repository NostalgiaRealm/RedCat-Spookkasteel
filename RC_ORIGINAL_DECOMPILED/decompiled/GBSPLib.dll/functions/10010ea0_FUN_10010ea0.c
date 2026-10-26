/*
 * FUN_10010ea0 at 10010ea0
 * undefined FUN_10010ea0(void)
 * Address ranges: 10010ea0-10010fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10010ea0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float local_20;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  iVar3 = 0;
  iVar2 = *param_1;
  if (0 < iVar2) {
    piVar6 = param_1 + 4;
    piVar4 = piVar6;
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      iVar2 = *param_1;
      iVar3 = iVar3 + 1;
      piVar6 = piVar4 + 0x400;
      piVar4 = piVar6;
    } while (iVar3 < iVar2);
  }
  iVar2 = *param_1;
  if (1 < iVar2) {
    iVar3 = 0;
    local_20 = 30384.0;
    if (0 < iVar2) {
      do {
        iVar1 = iVar3 + 1;
        iVar5 = iVar1;
        if (iVar1 < iVar2) {
          do {
            FUN_10014560(local_c);
            fVar7 = (float10)FUN_10014550();
            if ((fVar7 < (float10)local_20) && ((float10)0.05 < fVar7)) {
              local_20 = (float)fVar7;
              local_14 = iVar5;
              local_10 = iVar3;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *param_1);
        }
        iVar2 = *param_1;
        iVar3 = iVar1;
      } while (iVar1 < iVar2);
    }
    iVar2 = FUN_10010b30(param_1,local_10,local_14);
    if ((iVar2 == 0) || (iVar3 = FUN_10010b30(param_1,local_14,local_10), iVar3 == 0)) {
      (*DAT_1014e358)(s_There_was_an_error_finding_an_ed_100399e0);
    }
    else {
      iVar2 = FUN_10010ca0(param_1,iVar2);
      if (iVar2 != 0) {
        iVar2 = FUN_10010ca0(param_1,iVar3);
        return iVar2 != 0;
      }
    }
    return false;
  }
  return true;
}

