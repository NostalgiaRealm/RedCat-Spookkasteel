/*
 * FUN_0041cf8c at 0041cf8c
 * undefined __register FUN_0041cf8c(int param_1)
 * Address ranges: 0041cf8c-0041cfe1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cf8c(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (*(byte *)(param_1 + 8) & 0xf1))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_0057365c);
    SelectObject(*(HDC *)(param_1 + 4),DAT_00573660);
    SelectObject(*(HDC *)(param_1 + 4),DAT_00573664);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf1;
  }
  return;
}

