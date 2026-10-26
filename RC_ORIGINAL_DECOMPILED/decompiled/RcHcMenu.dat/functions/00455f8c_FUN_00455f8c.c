/*
 * FUN_00455f8c at 00455f8c
 * undefined __register FUN_00455f8c(int param_1)
 * Address ranges: 00455f8c-00455fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455f8c(int param_1)

{
  FUN_00431c24(param_1);
  if ((*(short *)(param_1 + 0x68) == -0xf) || (*(short *)(param_1 + 0x68) == -0xe)) {
    if ((byte)(*(char *)(param_1 + 0x4b) - 1U) < 2) {
      FUN_00432904(param_1,-0xf);
    }
    else {
      FUN_00432904(param_1,-0xe);
    }
  }
  return;
}

