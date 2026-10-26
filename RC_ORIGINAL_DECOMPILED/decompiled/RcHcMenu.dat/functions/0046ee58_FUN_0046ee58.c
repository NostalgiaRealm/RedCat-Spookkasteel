/*
 * FUN_0046ee58 at 0046ee58
 * undefined __register FUN_0046ee58(int param_1, char param_2, undefined4 param_3)
 * Address ranges: 0046ee58-0046eec6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ee58(int param_1,char param_2,undefined4 param_3)

{
  if (param_2 == '\x06') {
    FUN_0046ec94(param_1);
  }
  else if (*(char *)(param_1 + 0x2e) != '\0') {
    FUN_0046ee30(param_1,param_2,param_3);
    if (param_2 == '\0') {
      if (*(short *)(param_1 + 0x3a) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1,param_3);
      }
    }
    else if ((byte)(param_2 - 1U) < 4) {
      if (*(short *)(param_1 + 0x3a) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1,0);
      }
    }
    else if (((byte)(param_2 - 1U) == 4) && (*(short *)(param_1 + 0x42) != 0)) {
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
    }
  }
  return;
}

