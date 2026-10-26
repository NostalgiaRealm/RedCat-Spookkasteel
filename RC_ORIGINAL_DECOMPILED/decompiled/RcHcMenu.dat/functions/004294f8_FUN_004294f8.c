/*
 * FUN_004294f8 at 004294f8
 * undefined __register FUN_004294f8(int * param_1, char param_2)
 * Address ranges: 004294f8-0042950b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004294f8(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x1f7)) {
    *(char *)((int)param_1 + 0x1f7) = param_2;
    FUN_00429b04(param_1);
  }
  return;
}

