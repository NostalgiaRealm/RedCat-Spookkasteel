/*
 * FUN_005158a0 at 005158a0
 * undefined FUN_005158a0(void)
 * Address ranges: 005158a0-005158f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005158a0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
  }
  return;
}

