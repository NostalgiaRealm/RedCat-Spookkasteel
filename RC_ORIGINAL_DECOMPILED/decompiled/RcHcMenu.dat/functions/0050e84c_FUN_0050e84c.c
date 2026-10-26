/*
 * FUN_0050e84c at 0050e84c
 * undefined __register FUN_0050e84c(int param_1, char param_2)
 * Address ranges: 0050e84c-0050e87d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e84c(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x209) != param_2) {
    *(char *)(param_1 + 0x209) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

