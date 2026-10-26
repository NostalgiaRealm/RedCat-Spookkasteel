/*
 * FUN_004a0420 at 004a0420
 * undefined FUN_004a0420(void)
 * Address ranges: 004a0420-004a0464
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0420(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    iVar1 = *param_1;
    if (iVar1 != *param_3) {
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0(0);
      }
      iVar1 = *param_3;
      *param_1 = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      }
    }
  }
  return;
}

