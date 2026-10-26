/*
 * FUN_004328e4 at 004328e4
 * undefined __register FUN_004328e4(int param_1, char param_2)
 * Address ranges: 004328e4-00432900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004328e4(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x50)) &&
     (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00433700(param_1,0xb03d,0,0);
  }
  return;
}

