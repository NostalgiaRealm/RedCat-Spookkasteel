/*
 * FUN_00541708 at 00541708
 * undefined4 __register FUN_00541708(int param_1)
 * Address ranges: 00541708-0054173e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00541708(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_00494e38(*(int **)(param_1 + 0x22c),(byte *)(*(int *)(param_1 + 0x27c) + 0x208),'\x01',
               &local_c,&local_10);
  return local_c;
}

