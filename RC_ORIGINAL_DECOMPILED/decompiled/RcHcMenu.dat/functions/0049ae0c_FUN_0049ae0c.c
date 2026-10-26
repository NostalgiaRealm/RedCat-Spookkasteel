/*
 * FUN_0049ae0c at 0049ae0c
 * int __register FUN_0049ae0c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049ae0c-0049ae42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0049ae0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0049aa80(param_1,1,param_3);
  if (*(char *)(param_1[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  return param_1[0x1e];
}

