/*
 * FUN_005ec2d0 at 005ec2d0
 * undefined FUN_005ec2d0(void)
 * Address ranges: 005ec2d0-005ec2ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ec2d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < param_2 + *(int *)(param_1 + 8)) {
    do {
      FUN_005ec0f0();
    } while (*(int *)(param_1 + 0xc) < param_2 + *(int *)(param_1 + 8));
  }
  return;
}

