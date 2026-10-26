/*
 * FUN_0046a004 at 0046a004
 * undefined __register FUN_0046a004(int param_1, char param_2)
 * Address ranges: 0046a004-0046a013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a004(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x35) = param_2;
    FUN_004695c4(param_1,1);
  }
  return;
}

