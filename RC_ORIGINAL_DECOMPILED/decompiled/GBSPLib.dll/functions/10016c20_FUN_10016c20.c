/*
 * FUN_10016c20 at 10016c20
 * undefined FUN_10016c20(void)
 * Address ranges: 10016c20-10016c68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016c20(int *param_1,int param_2,int *param_3)

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

