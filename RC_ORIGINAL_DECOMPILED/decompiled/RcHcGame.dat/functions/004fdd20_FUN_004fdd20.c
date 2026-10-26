/*
 * FUN_004fdd20 at 004fdd20
 * undefined FUN_004fdd20(void)
 * Address ranges: 004fdd20-004fdd55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fdd20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_005abfc0(0);
      }
      *param_1 = 0;
    }
  }
  return;
}

