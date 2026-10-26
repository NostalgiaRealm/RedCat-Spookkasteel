/*
 * FUN_004377ac at 004377ac
 * undefined __register FUN_004377ac(int param_1, undefined4 param_2)
 * Address ranges: 004377ac-004377ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004377ac(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x1ba) != 0) {
    (**(code **)(param_1 + 0x1b8))(*(undefined4 *)(param_1 + 0x1bc),param_1,param_2);
  }
  return;
}

