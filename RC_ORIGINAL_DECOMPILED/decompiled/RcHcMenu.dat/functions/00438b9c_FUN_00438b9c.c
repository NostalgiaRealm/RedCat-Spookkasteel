/*
 * FUN_00438b9c at 00438b9c
 * undefined __register FUN_00438b9c(int param_1, short param_2)
 * Address ranges: 00438b9c-00438bb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438b9c(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *(int *)(param_1 + 0x170) = (int)param_2;
    return;
  }
  FUN_00438b40(param_1,param_2);
  return;
}

