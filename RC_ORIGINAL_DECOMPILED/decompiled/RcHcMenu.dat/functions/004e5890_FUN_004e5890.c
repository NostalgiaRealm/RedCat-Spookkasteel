/*
 * FUN_004e5890 at 004e5890
 * undefined __register FUN_004e5890(int param_1, undefined4 param_2)
 * Address ranges: 004e5890-004e58c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5890(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xc2) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,param_2);
  }
  return;
}

