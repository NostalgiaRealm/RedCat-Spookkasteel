/*
 * FUN_0046d174 at 0046d174
 * undefined __register FUN_0046d174(int param_1, char param_2)
 * Address ranges: 0046d174-0046d18c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d174(int param_1,char param_2)

{
  *(char *)(param_1 + 0xd0) = param_2;
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48);
  }
  return;
}

