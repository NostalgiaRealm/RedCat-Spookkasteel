/*
 * FUN_004328a0 at 004328a0
 * undefined __register FUN_004328a0(int param_1, int param_2)
 * Address ranges: 004328a0-004328ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004328a0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    FUN_00433700(param_1,0xb00d,0,0);
  }
  return;
}

