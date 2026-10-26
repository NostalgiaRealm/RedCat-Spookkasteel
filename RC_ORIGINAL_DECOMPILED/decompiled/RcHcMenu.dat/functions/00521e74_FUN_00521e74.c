/*
 * FUN_00521e74 at 00521e74
 * undefined __register FUN_00521e74(int param_1, char param_2, char param_3)
 * Address ranges: 00521e74-00521ed2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521e74(int param_1,char param_2,char param_3)

{
  if ((param_2 != '\0') && (*(short *)(param_1 + 0x262) != 0)) {
    (**(code **)(param_1 + 0x260))(*(undefined4 *)(param_1 + 0x264),param_1);
  }
  if ((param_3 != '\0') && (*(short *)(param_1 + 0x24a) != 0)) {
    (**(code **)(param_1 + 0x248))(*(undefined4 *)(param_1 + 0x24c),param_1);
  }
  return;
}

