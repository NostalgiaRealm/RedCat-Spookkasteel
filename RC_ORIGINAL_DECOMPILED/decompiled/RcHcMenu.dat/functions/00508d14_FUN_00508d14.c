/*
 * FUN_00508d14 at 00508d14
 * undefined __register FUN_00508d14(int param_1)
 * Address ranges: 00508d14-00508da8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00508d14(int param_1)

{
  FUN_00433a0c(param_1);
  if ((*(char *)(param_1 + 0x8a0) != '\0') && (*(short *)(param_1 + 0x88a) != 0)) {
    (**(code **)(param_1 + 0x888))(*(undefined4 *)(param_1 + 0x88c),param_1);
  }
  if ((*(char *)(param_1 + 0x8a1) != '\0') && (*(short *)(param_1 + 0x892) != 0)) {
    (**(code **)(param_1 + 0x890))(*(undefined4 *)(param_1 + 0x894),param_1);
  }
  if ((*(char *)(param_1 + 0x8a2) != '\0') && (*(short *)(param_1 + 0x89a) != 0)) {
    (**(code **)(param_1 + 0x898))(*(undefined4 *)(param_1 + 0x89c),param_1);
  }
  return;
}

