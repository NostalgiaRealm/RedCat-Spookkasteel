/*
 * FUN_0041cf6c at 0041cf6c
 * int __register FUN_0041cf6c(int * param_1)
 * Address ranges: 0041cf6c-0041cf87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041cf6c(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xf);
  return param_1[1];
}

