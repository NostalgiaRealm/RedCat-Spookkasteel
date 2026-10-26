/*
 * FUN_0043a148 at 0043a148
 * undefined __register FUN_0043a148(int param_1, short param_2)
 * Address ranges: 0043a148-0043a15d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a148(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 0x60)) &&
     (*(short *)(param_1 + 0x60) = param_2, *(char *)(param_1 + 0x62) != '\0')) {
    FUN_0043a034(param_1);
  }
  return;
}

