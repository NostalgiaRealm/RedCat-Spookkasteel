/*
 * FUN_004489c8 at 004489c8
 * undefined __register FUN_004489c8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004489c8-00448a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004489c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    if (*(byte *)(param_1 + 0x4b) < 2) {
      if ((*(char *)(param_1 + 0x4b) == '\x01') || ((*(byte *)(param_1 + 0x51) & 10) == 2)) {
        iVar1 = FUN_004242a4(*(int *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x34) +
                             *(int *)(param_1 + 0x3c));
        *(int *)(param_4 + -4) = iVar1;
      }
    }
    else if (*(byte *)(param_1 + 0x4b) == 2) {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x3c);
    }
  }
  return;
}

