/*
 * FUN_00469abc at 00469abc
 * undefined __register FUN_00469abc(int param_1, char param_2)
 * Address ranges: 00469abc-00469acb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469abc(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x37)) {
    *(char *)(param_1 + 0x37) = param_2;
    FUN_004695c4(param_1,0);
  }
  return;
}

