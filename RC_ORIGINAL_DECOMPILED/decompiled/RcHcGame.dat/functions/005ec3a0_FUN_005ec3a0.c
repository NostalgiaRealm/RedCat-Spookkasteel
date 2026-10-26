/*
 * FUN_005ec3a0 at 005ec3a0
 * undefined FUN_005ec3a0(void)
 * Address ranges: 005ec3a0-005ec3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ec3a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8) + 4) {
    do {
      FUN_005ec0f0();
    } while (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8) + 4);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8)) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  return;
}

