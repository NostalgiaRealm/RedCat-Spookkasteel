/*
 * FUN_10001920 at 10001920
 * undefined FUN_10001920(void)
 * Address ranges: 10001920-100019ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001920(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  int local_4;
  
  FUN_1000c010(param_1 + 4,param_1 + 0x10);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_8 = (int *)(param_1 + 0x2c);
    do {
      piVar1 = (int *)*local_8;
      if ((piVar1 != (int *)0x0) && (iVar3 = 0, 0 < *piVar1)) {
        iVar2 = 0;
        do {
          FUN_1000c040(iVar2 + piVar1[1],param_1 + 4,param_1 + 0x10);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xc;
        } while (iVar3 < *piVar1);
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 5;
    } while (local_4 < *(int *)(param_1 + 0x28));
  }
  return;
}

