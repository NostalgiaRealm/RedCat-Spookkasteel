/*
 * FUN_004f6b04 at 004f6b04
 * undefined __register FUN_004f6b04(int param_1, char param_2)
 * Address ranges: 004f6b04-004f6b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6b04(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1c)) {
    *(char *)(param_1 + 0x1c) = param_2;
    FUN_00412c80(param_1,'\0');
  }
  return;
}

