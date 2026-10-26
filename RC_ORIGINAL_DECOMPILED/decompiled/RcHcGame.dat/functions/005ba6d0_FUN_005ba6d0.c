/*
 * FUN_005ba6d0 at 005ba6d0
 * undefined FUN_005ba6d0(void)
 * Address ranges: 005ba6d0-005ba708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005ba6d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005d40c0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c8),param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d46e0(iVar1);
  return iVar1 == *(int *)(param_1 + 4);
}

