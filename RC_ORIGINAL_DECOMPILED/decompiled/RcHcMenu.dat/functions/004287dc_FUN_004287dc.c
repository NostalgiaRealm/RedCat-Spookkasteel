/*
 * FUN_004287dc at 004287dc
 * undefined4 __register FUN_004287dc(int param_1)
 * Address ranges: 004287dc-004287f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004287dc(int param_1)

{
  undefined4 in_EDX;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  return CONCAT31((int3)((uint)in_EDX >> 8),1);
}

