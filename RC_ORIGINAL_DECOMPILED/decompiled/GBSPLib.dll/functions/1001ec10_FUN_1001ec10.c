/*
 * FUN_1001ec10 at 1001ec10
 * undefined FUN_1001ec10(void)
 * Address ranges: 1001ec10-1001ec7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ec10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[8];
  iVar1 = param_1[0xd] - *(int *)(iVar3 + 0x34);
  iVar2 = param_1[0xc] - *(int *)(iVar3 + 0x30);
  iVar3 = param_1[0xb] - *(int *)(iVar3 + 0x2c);
  param_1[0xe] = (iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1) * param_1[9];
  if (0 < param_1[10]) {
    iVar3 = 8;
    piVar4 = param_1;
    do {
      if (*piVar4 != 0) {
        FUN_1001ec10(*piVar4);
        param_1[0xe] = param_1[0xe] + *(int *)(*piVar4 + 0x38);
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

