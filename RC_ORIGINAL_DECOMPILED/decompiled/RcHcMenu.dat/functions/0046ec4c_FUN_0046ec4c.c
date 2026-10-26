/*
 * FUN_0046ec4c at 0046ec4c
 * undefined __register FUN_0046ec4c(int param_1, char param_2)
 * Address ranges: 0046ec4c-0046ec93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ec4c(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2e);
  if (param_2 != cVar1) {
    *(char *)(param_1 + 0x2e) = param_2;
    FUN_0046ee30(param_1,6,0);
    if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
      if (*(short *)(param_1 + 0x32) != 0) {
        (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
      }
      if ((cVar1 == '\0') && (*(short *)(param_1 + 0x3a) != 0)) {
        (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1,0);
      }
    }
  }
  return;
}

