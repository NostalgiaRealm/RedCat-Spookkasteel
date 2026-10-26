/*
 * FUN_00569c28 at 00569c28
 * undefined4 __register FUN_00569c28(int param_1)
 * Address ranges: 00569c28-00569c69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00569c28(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + 0x10);
  }
  else {
    local_c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x118) + 0x10) + 0x10);
  }
  return local_c;
}

