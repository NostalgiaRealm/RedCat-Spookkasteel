/*
 * FUN_0041edc8 at 0041edc8
 * int * __register FUN_0041edc8(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0041edc8-0041ede7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0041edc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0056f644 == (int *)0x0) {
    DAT_0056f644 = FUN_0041ec10((int *)&DAT_0041ebfc,'\x01',param_3);
  }
  return DAT_0056f644;
}

