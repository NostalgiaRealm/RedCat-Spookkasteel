/*
 * FUN_005e7e10 at 005e7e10
 * undefined FUN_005e7e10(void)
 * Address ranges: 005e7e10-005e7e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005e7e10(int *param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)param_1[8];
  if (uVar3 != 0) {
    iVar1 = *(int *)param_1[0xc];
    if (uVar3 < iVar1 + uVar3) {
      *(int *)param_1[0xc] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[8];
      *(byte **)param_1[8] = pbVar2 + 1;
      *pbVar2 = param_2;
      return (uint)param_2;
    }
  }
  uVar3 = (**(code **)(*param_1 + 4))(param_2);
  return uVar3;
}

