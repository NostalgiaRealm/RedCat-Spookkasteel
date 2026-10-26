/*
 * FUN_00429b04 at 00429b04
 * undefined __register FUN_00429b04(int * param_1)
 * Address ranges: 00429b04-00429b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429b04(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x1f7) != '\0') && ((char)param_1[0x7d] == '\x01')) {
    param_1[0x10] = param_1[0x10] | 0x200;
    FUN_00429b40(param_1);
    return;
  }
  param_1[0x10] = param_1[0x10] & 0xfffffdff;
  return;
}

