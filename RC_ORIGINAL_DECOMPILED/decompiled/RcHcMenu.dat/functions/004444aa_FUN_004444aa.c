/*
 * FUN_004444aa at 004444aa
 * undefined __register FUN_004444aa(int param_1, int param_2)
 * Address ranges: 004444a6-004444b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004444aa(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}

