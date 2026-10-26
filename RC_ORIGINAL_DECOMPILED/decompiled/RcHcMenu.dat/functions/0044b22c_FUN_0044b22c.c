/*
 * FUN_0044b22c at 0044b22c
 * undefined __register FUN_0044b22c(int param_1, char param_2)
 * Address ranges: 0044b22c-0044b256
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b22c(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x210)) &&
     (*(char *)(param_1 + 0x210) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00435de4(param_1);
  }
  return;
}

