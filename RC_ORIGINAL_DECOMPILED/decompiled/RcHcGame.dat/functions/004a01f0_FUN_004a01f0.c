/*
 * FUN_004a01f0 at 004a01f0
 * undefined FUN_004a01f0(void)
 * Address ranges: 004a01f0-004a0213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a01f0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + param_3 * 4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

