/*
 * FUN_004cea5c at 004cea5c
 * undefined4 __register FUN_004cea5c(int * param_1)
 * Address ranges: 004cea5c-004cea76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004cea5c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 4))();
  return uVar1;
}

