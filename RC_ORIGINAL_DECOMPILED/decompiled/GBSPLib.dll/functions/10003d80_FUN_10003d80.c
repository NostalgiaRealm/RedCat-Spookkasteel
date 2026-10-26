/*
 * FUN_10003d80 at 10003d80
 * undefined FUN_10003d80(void)
 * Address ranges: 10003d80-10003e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003d80(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != -1) {
    FUN_10003d80(param_1[4]);
    FUN_10003d80(param_1[5]);
    FUN_1000d990(param_1[3]);
    FUN_1000e1a0(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    for (iVar1 = param_1[0xd]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + uVar2 * 4)) {
      uVar2 = (uint)(*(int **)(iVar1 + 8) == param_1);
      iVar3 = FUN_10003b80(iVar1,uVar2);
      *(int *)(iVar1 + 0x1c + uVar2 * 4) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0xc) = param_1[2];
        *(undefined4 *)(*(int *)(iVar1 + 0x1c + uVar2 * 4) + 0x10) =
             *(undefined4 *)(*(int *)(iVar1 + 4 + (uint)(uVar2 == 0) * 4) + 8);
        **(undefined4 **)(iVar1 + 0x1c + uVar2 * 4) = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0xc);
        *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0xc) = *(undefined4 *)(iVar1 + 0x1c + uVar2 * 4);
        DAT_1014e22c = DAT_1014e22c + 1;
      }
    }
  }
  return;
}

