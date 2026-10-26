/*
 * FUN_00504650 at 00504650
 * undefined FUN_00504650(void)
 * Address ranges: 00504650-0050466f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00504650(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

