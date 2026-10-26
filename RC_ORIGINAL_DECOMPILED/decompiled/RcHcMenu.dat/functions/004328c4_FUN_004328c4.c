/*
 * FUN_004328c4 at 004328c4
 * undefined __register FUN_004328c4(int param_1, char param_2)
 * Address ranges: 004328c4-004328e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004328c4(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x4a)) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00433700(param_1,0xb009,0,0);
  }
  return;
}

