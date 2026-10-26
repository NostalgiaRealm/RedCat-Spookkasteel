/*
 * FUN_1001ec80 at 1001ec80
 * undefined FUN_1001ec80(void)
 * Address ranges: 1001ec80-1001ed29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ec80(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  piVar2 = param_1;
  iVar5 = 0;
  if (0 < param_1[10]) {
    local_8 = 0;
    param_1 = (int *)0x0;
    iVar4 = 8;
    piVar3 = piVar2;
    do {
      if (*piVar3 != 0) {
        FUN_1001ec80(*piVar3);
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_4 = 8;
    piVar3 = piVar2;
    do {
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 0x24);
        iVar5 = iVar5 + *(int *)(iVar4 + 0x2c) * iVar1;
        param_1 = (int *)((int)param_1 + *(int *)(iVar4 + 0x30) * iVar1);
        local_8 = local_8 + *(int *)(iVar4 + 0x34) * iVar1;
      }
      piVar3 = piVar3 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    iVar4 = piVar2[9];
    piVar2[0xb] = iVar5 / iVar4;
    piVar2[0xc] = (int)param_1 / iVar4;
    piVar2[0xd] = local_8 / iVar4;
  }
  return;
}

