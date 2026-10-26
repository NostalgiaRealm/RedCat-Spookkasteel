/*
 * FUN_005cc590 at 005cc590
 * undefined FUN_005cc590(void)
 * Address ranges: 005cc590-005cc5b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc590(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(*(int *)(param_2 + 4) + 8);
  return 1;
}

