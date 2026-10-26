/*
 * FUN_0044e5e0 at 0044e5e0
 * undefined FUN_0044e5e0(void)
 * Address ranges: 0044e5e0-0044e5f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044e5e0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
  }
  return;
}

