/*
 * FUN_0050b2e0 at 0050b2e0
 * undefined FUN_0050b2e0(void)
 * Address ranges: 0050b2e0-0050b304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0050b2e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 != 0);
}

