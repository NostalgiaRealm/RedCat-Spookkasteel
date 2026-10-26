/*
 * FUN_005e1a60 at 005e1a60
 * undefined FUN_005e1a60(void)
 * Address ranges: 005e1a60-005e1b2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005e1a60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = param_2;
  iVar1 = FUN_005e1b30(param_2);
  if (iVar1 != 0) {
    param_1 = FUN_005e19e0(param_1,uVar3,&param_2);
    if (param_1 == 0) {
      return (int *)0x0;
    }
    iVar1 = FUN_005e1b30(param_2);
    uVar3 = param_2;
    if (iVar1 != 0) {
      return (int *)0x0;
    }
  }
  piVar2 = (int *)FUN_005cf3b0(0x2c);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar4 = piVar2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar1 = FUN_005e1430(uVar3);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    piVar2[10] = *(int *)(param_1 + 0x24);
    *(int **)(param_1 + 0x24) = piVar2;
    if (param_3 == 1) {
      piVar2[3] = piVar2[3] | 2;
    }
    return piVar2;
  }
  FUN_005cf400(0);
  *piVar2 = 0;
  _DAT_007203c0 = 0;
  FUN_005cf400(piVar2);
  _DAT_007203c0 = 0;
  return (int *)0x0;
}

