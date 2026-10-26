/*
 * FUN_005d5500 at 005d5500
 * undefined FUN_005d5500(void)
 * Address ranges: 005d5500-005d5578
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d5500(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(*(int *)(param_1[6] + 0xd5d8) + param_2 * 4) != *param_1) {
    *(int *)(*(int *)(param_1[6] + 0xd5d8) + param_2 * 4) = *param_1;
    iVar3 = 0;
    iVar2 = *(int *)(param_1[6] + 0x124);
    piVar1 = (int *)(iVar2 + param_2 * 8);
    piVar4 = (int *)(*(int *)(param_1[6] + 0x128) + *(int *)(iVar2 + 4 + param_2 * 8) * 8);
    if (0 < *piVar1) {
      do {
        if (*(int *)(param_1[6] + 0x294 + *piVar4 * 0xd4) != 0) {
          FUN_005d5500(param_1,piVar4[1]);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar3 < *piVar1);
    }
  }
  return;
}

