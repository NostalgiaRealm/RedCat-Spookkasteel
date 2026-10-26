/*
 * FUN_00541864 at 00541864
 * undefined4 __register FUN_00541864(int param_1)
 * Address ranges: 00541864-00541894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00541864(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_00494e38(*(int **)(param_1 + 0x22c),(byte *)(param_1 + 0x240),'\x01',&local_c,&local_10);
  return local_c;
}

