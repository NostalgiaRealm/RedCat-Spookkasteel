/*
 * FUN_004020a8 at 004020a8
 * undefined4 __register FUN_004020a8(int param_1)
 * Address ranges: 004020a8-004020d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004020a8(int param_1)

{
  undefined4 uVar1;
  uint local_c [2];
  
  FUN_00401914(param_1 + 4,(int *)local_c);
  if ((local_c[0] != 0) && (uVar1 = FUN_0040201c(local_c), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

