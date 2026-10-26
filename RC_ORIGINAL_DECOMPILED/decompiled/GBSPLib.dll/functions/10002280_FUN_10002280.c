/*
 * FUN_10002280 at 10002280
 * undefined FUN_10002280(void)
 * Address ranges: 10002280-1000232a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10002280(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
  piVar1 = param_2;
  iVar2 = 0;
  local_8 = 0;
  iVar3 = param_1;
  if (0 < param_2[10]) {
    piVar4 = param_2 + 0xc;
    do {
      if (iVar3 == 0) goto LAB_100022fd;
      FUN_10001de0(iVar3,*piVar4,(char)piVar4[1],0x10,0,&param_2,&local_4);
      if (iVar3 != param_1) {
        FUN_10001790(iVar3);
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_8;
        local_8 = (int)param_2;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 5;
      iVar3 = local_4;
    } while (iVar2 < piVar1[10]);
  }
  if (iVar3 != 0) {
    FUN_10001790(iVar3);
    return local_8;
  }
LAB_100022fd:
  FUN_100017e0(local_8);
  return param_1;
}

