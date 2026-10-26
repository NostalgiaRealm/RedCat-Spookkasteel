/*
 * FUN_1000f0a0 at 1000f0a0
 * undefined FUN_1000f0a0(void)
 * Address ranges: 1000f0a0-1000f1b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000f0a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*param_1 == -1) || (param_1[0x14] != 0)) {
    iVar2 = FUN_1000ef80(param_1[2]);
    if (iVar2 == 0) {
      param_1[0x13] = DAT_10313020;
      DAT_10313020 = DAT_10313020 + 1;
      piVar4 = (int *)param_1[0xd];
      if (piVar4 != (int *)0x0) {
        do {
          piVar1 = (int *)piVar4[2];
          iVar2 = piVar4[1];
          if (*piVar4 == 0) {
            (*DAT_1014e35c)(s__WARNING__SavePortalFile_r__Port_10039150);
          }
          else {
            iVar3 = FUN_1000f000(piVar4);
            if (iVar3 != 0) {
              if (*(int *)(iVar2 + 0x54) == piVar1[0x15]) {
                (*DAT_1014e358)(s_PrepPortalFile_r__Portal_seperat_10039118);
                return false;
              }
              DAT_1031301c = DAT_1031301c + 1;
            }
          }
          piVar4 = (int *)piVar4[(piVar1 == param_1) + 3];
        } while (piVar4 != (int *)0x0);
        return true;
      }
      (*DAT_1014e35c)(s__WARNING__PrepPortalFile_r__Leaf_10039188);
    }
    return true;
  }
  param_1[0x13] = -1;
  if (param_1[0xd] != 0) {
    (*DAT_1014e35c)(s__WARNING__PrepPortalFile_r__Node_100391c0);
  }
  iVar2 = FUN_1000f0a0(param_1[4]);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_1000f0a0(param_1[5]);
  return iVar2 != 0;
}

