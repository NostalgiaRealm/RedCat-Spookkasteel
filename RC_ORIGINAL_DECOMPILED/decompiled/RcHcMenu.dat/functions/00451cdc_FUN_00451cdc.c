/*
 * FUN_00451cdc at 00451cdc
 * undefined __register FUN_00451cdc(int param_1)
 * Address ranges: 00451cdc-00451cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451cdc(int param_1)

{
  if (*(ushort *)(param_1 + 0x7a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x7a));
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}

