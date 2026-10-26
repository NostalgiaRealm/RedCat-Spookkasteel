/*
 * FUN_006192ff at 006192ff
 * undefined FUN_006192ff(void)
 * Address ranges: 006192ff-006194aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_006192ff(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_006b2fc8 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_006b3058) || (iVar2 != DAT_006b3068)) {
      if (DAT_00710080 == 0) {
        FUN_006194ab(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_006194ab(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_00710120 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_00710126;
        }
        else {
          uVar4 = DAT_00710124;
          uVar3 = DAT_00710126;
          uVar5 = 0;
        }
        FUN_006194ab(1,DAT_00710120 == 0,iVar2,DAT_00710122,uVar3,uVar4,uVar5,DAT_00710128,
                     DAT_0071012a,DAT_0071012c,DAT_0071012e);
        if (DAT_007100cc != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_007100d2;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_007100d0;
          uVar3 = DAT_007100d2;
          uVar5 = 0;
        }
        FUN_006194ab(0,DAT_007100cc == 0,iVar2,DAT_007100ce,uVar3,uVar4,uVar5,DAT_007100d4,
                     DAT_007100d6,DAT_007100d8,DAT_007100da);
      }
    }
    iVar2 = param_1[7];
    if (DAT_006b305c < DAT_006b306c) {
      if ((DAT_006b305c <= iVar2) && (iVar2 <= DAT_006b306c)) {
        if ((DAT_006b305c < iVar2) && (iVar2 < DAT_006b306c)) {
          return true;
        }
LAB_00619477:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_006b305c) {
          return DAT_006b3060 <= iVar1;
        }
        return iVar1 < DAT_006b3070;
      }
    }
    else {
      if (iVar2 < DAT_006b306c) {
        return true;
      }
      if (DAT_006b305c < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_006b306c) || (DAT_006b305c <= iVar2)) goto LAB_00619477;
    }
  }
  return false;
}

