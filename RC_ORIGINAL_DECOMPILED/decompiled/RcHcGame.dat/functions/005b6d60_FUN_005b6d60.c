/*
 * FUN_005b6d60 at 005b6d60
 * undefined FUN_005b6d60(void)
 * Address ranges: 005b6d60-005b6e05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005b6d60(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_005cf3b0(0xbc);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1[0x28] = param_4;
  piVar1[0x2e] = 0;
  piVar1[0x2d] = 0;
  piVar1[0x2c] = 0;
  piVar1[0x25] = 0;
  piVar1[0x29] = param_5;
  piVar1[0x27] = param_3;
  piVar1[0x2a] = param_6;
  piVar1[0x2b] = param_7;
  *piVar1 = param_1;
  piVar4 = piVar1;
  for (uVar2 = param_3 * 9 & 0x3fffffff; piVar4 = piVar4 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *piVar4 = *param_2;
    param_2 = param_2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)piVar4 = (char)*param_2;
    param_2 = (int *)((int)param_2 + 1);
    piVar4 = (int *)((int)piVar4 + 1);
  }
  FUN_005b6e10(param_1,piVar1);
  *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc8) + 1;
  return piVar1;
}

