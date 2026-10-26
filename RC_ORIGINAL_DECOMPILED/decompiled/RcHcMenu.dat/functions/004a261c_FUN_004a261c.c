/*
 * FUN_004a261c at 004a261c
 * undefined __register FUN_004a261c(int param_1, char param_2)
 * Address ranges: 004a261c-004a264c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a261c(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x54) != param_2) {
    *(char *)(param_1 + 0x54) = param_2;
    FUN_004a2440(param_1,0x4401);
  }
  return;
}

