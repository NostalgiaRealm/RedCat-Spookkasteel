/*
 * FUN_005500bc at 005500bc
 * undefined4 __register FUN_005500bc(int param_1)
 * Address ranges: 005500bc-005500f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005500bc(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 2;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x24))();
    if (iVar1 == 0) {
      local_c = local_10;
    }
  }
  return local_c;
}

