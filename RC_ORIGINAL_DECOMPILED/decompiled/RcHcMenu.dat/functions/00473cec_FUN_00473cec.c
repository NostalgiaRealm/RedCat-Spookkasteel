/*
 * FUN_00473cec at 00473cec
 * undefined __register FUN_00473cec(int param_1)
 * Address ranges: 00473cec-00473d08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473cec(int param_1)

{
  if (*(short *)(param_1 + 0xea) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
  }
  return;
}

