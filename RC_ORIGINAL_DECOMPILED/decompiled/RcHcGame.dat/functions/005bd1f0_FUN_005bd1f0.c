/*
 * FUN_005bd1f0 at 005bd1f0
 * undefined FUN_005bd1f0(void)
 * Address ranges: 005bd1f0-005bd2bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005bd1f0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2 + -1;
  iVar4 = iVar1;
  iVar7 = param_1;
  iVar6 = param_2;
  while( true ) {
    iVar3 = iVar4;
    iVar5 = iVar1;
    iVar4 = param_1;
    iVar2 = param_2;
    if (iVar6 == 0) {
      while( true ) {
        iVar7 = iVar5;
        iVar5 = iVar1;
        iVar6 = param_1;
        iVar3 = param_2;
        if (iVar2 == 0) {
          while (iVar7 = iVar5, iVar3 != 0) {
            if (*(uint *)(iVar6 + 4) == param_3) {
              return iVar6;
            }
            iVar5 = iVar7 + -1;
            iVar6 = iVar6 + 8;
            iVar3 = iVar7;
          }
          while( true ) {
            iVar7 = iVar1;
            if (param_2 == 0) {
              return 0;
            }
            if ((*(uint *)(param_1 + 4) & param_3) != 0) break;
            param_1 = param_1 + 8;
            iVar1 = iVar7 + -1;
            param_2 = iVar7;
          }
          return param_1;
        }
        if ((((param_4 == 0) || (iVar6 = FUN_005c6ab0(), iVar6 != 0)) ||
            ((*(uint *)(iVar4 + 4) & 0x10000) != 0)) && ((param_3 & *(uint *)(iVar4 + 4)) != 0))
        break;
        iVar5 = iVar7 + -1;
        iVar4 = iVar4 + 8;
        iVar2 = iVar7;
      }
      return iVar4;
    }
    if ((((param_4 == 0) || (iVar6 = FUN_005c6ab0(), iVar6 != 0)) ||
        ((*(uint *)(iVar7 + 4) & 0x10000) != 0)) && (*(uint *)(iVar7 + 4) == param_3)) break;
    iVar7 = iVar7 + 8;
    iVar4 = iVar3 + -1;
    iVar6 = iVar3;
  }
  return iVar7;
}

