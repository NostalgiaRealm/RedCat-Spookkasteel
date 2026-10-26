/*
 * FUN_10024680 at 10024680
 * undefined FUN_10024680(void)
 * Address ranges: 10024680-1002474a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10024680(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = param_2;
  iVar1 = FUN_10024750(param_2);
  if (iVar1 != 0) {
    param_1 = FUN_10024600(param_1,uVar3,&param_2);
    if (param_1 == 0) {
      return (int *)0x0;
    }
    iVar1 = FUN_10024750(param_2);
    uVar3 = param_2;
    if (iVar1 != 0) {
      return (int *)0x0;
    }
  }
  piVar2 = (int *)FUN_10014310(0x2c);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar4 = piVar2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar1 = FUN_10024050(uVar3);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    piVar2[10] = *(int *)(param_1 + 0x24);
    *(int **)(param_1 + 0x24) = piVar2;
    if (param_3 == 1) {
      piVar2[3] = piVar2[3] | 2;
    }
    return piVar2;
  }
  FUN_10014360(0);
  *piVar2 = 0;
  _DAT_1003fde8 = 0;
  FUN_10014360(piVar2);
  _DAT_1003fde8 = 0;
  return (int *)0x0;
}

