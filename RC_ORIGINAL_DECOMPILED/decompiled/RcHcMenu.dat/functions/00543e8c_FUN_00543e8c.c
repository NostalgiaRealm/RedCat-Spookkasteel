/*
 * FUN_00543e8c at 00543e8c
 * undefined4 __register FUN_00543e8c(int param_1, int * param_2)
 * Address ranges: 00543e8c-00543ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00543e8c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f24a0(*(undefined4 *)(param_1 + 0x2a0),param_1,*(undefined1 *)(param_1 + 0x205),
                       param_2);
  return uVar1;
}

