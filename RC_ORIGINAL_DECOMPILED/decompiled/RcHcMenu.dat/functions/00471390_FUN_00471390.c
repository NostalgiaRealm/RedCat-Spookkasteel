/*
 * FUN_00471390 at 00471390
 * undefined1 __register FUN_00471390(int param_1, undefined1 param_2)
 * Address ranges: 00471390-004713a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00471390(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x8d);
  *(undefined1 *)(param_1 + 0x8d) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined1 *)(param_1 + 0x92) = 0;
  return uVar1;
}

