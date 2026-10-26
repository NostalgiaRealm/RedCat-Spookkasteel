/*
 * FUN_1001f586 at 1001f586
 * undefined FUN_1001f586(void)
 * Address ranges: 1001f586-1001f5b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f586(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10018dc8(param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

