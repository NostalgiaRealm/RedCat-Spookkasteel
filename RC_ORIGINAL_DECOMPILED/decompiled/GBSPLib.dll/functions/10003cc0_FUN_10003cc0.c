/*
 * FUN_10003cc0 at 10003cc0
 * undefined FUN_10003cc0(void)
 * Address ranges: 10003cc0-10003d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003cc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  while (iVar1 != -1) {
    FUN_10003cc0(param_1[4]);
    param_1 = (int *)param_1[5];
    iVar1 = *param_1;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = param_1[0xd];
    param_1[0xe] = 0;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + uVar3 * 4)) {
      uVar3 = (uint)(*(int **)(iVar1 + 8) == param_1);
      iVar2 = *(int *)(iVar1 + 0x1c + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_10003c40(param_1,iVar2);
      }
    }
    iVar2 = FUN_10014310(param_1[0xe] * 4 + 4);
    iVar1 = param_1[0xd];
    param_1[0xf] = iVar2;
    param_1[0xe] = 0;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + uVar3 * 4)) {
      uVar3 = (uint)(*(int **)(iVar1 + 8) == param_1);
      iVar2 = *(int *)(iVar1 + 0x1c + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_10003c80(param_1,iVar2);
      }
    }
  }
  return;
}

