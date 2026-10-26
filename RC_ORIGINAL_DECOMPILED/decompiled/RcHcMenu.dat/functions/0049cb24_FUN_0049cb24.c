/*
 * FUN_0049cb24 at 0049cb24
 * undefined __register FUN_0049cb24(int param_1, char param_2, undefined4 param_3)
 * Address ranges: 0049cb24-0049cb4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049cb24(int param_1,char param_2,undefined4 param_3)

{
  if (param_2 != *(char *)(param_1 + 0x24)) {
    *(char *)(param_1 + 0x24) = param_2;
    FUN_0049cac0(param_1,param_1,param_3);
  }
  return;
}

