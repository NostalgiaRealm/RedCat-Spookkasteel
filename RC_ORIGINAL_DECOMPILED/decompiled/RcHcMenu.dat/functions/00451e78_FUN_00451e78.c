/*
 * FUN_00451e78 at 00451e78
 * undefined __register FUN_00451e78(int param_1)
 * Address ranges: 00451e78-00451e9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451e78(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00451e3c(param_1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_0044fe24();
    FUN_00451cdc(param_1);
  }
  return;
}

