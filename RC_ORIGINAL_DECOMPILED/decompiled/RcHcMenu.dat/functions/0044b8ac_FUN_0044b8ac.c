/*
 * FUN_0044b8ac at 0044b8ac
 * undefined __register FUN_0044b8ac(int param_1, char param_2)
 * Address ranges: 0044b8ac-0044b8c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b8ac(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x218)) &&
     (*(char *)(param_1 + 0x218) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00435de4(param_1);
  }
  return;
}

