/*
 * FUN_00566380 at 00566380
 * undefined FUN_00566380(void)
 * Address ranges: 00566380-005663c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00566380(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
  }
  iVar4 = 0;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (0 < iVar1) {
    piVar3 = *(int **)(param_1 + 0xbc);
    do {
      if (param_2 == *piVar3) {
        return CONCAT31(uVar2,1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return (uint)uVar2 << 8;
}

