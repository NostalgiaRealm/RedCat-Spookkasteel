/*
 * FUN_004f6a4c at 004f6a4c
 * undefined __register FUN_004f6a4c(int param_1, char param_2)
 * Address ranges: 004f6a4c-004f6a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6a4c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x24)) {
    *(char *)(param_1 + 0x24) = param_2;
    *(undefined1 *)(param_1 + 0x25) = 0;
    FUN_00412c80(param_1,'\0');
  }
  return;
}

