/*
 * FUN_005c0ef0 at 005c0ef0
 * undefined FUN_005c0ef0(void)
 * Address ranges: 005c0ef0-005c0f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c0ef0(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_3;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_1;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
  }
  bVar1 = (byte)param_2;
  iVar2 = 1 << (bVar1 & 0x1f);
  param_3[5] = param_2;
  param_3[4] = param_2;
  *param_3 = iVar2 + -1 + *param_3 >> (bVar1 & 0x1f);
  param_3[1] = param_3[1] + -1 + iVar2 >> (bVar1 & 0x1f);
  param_3[2] = param_3[2] + -1 + iVar2 >> (bVar1 & 0x1f);
  return;
}

