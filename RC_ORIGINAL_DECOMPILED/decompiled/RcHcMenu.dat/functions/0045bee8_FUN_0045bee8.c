/*
 * FUN_0045bee8 at 0045bee8
 * int * __register FUN_0045bee8(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0045bee8-0045bf19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0045bee8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_005704ec == (int *)0x0) {
    DAT_005704ec = FUN_0045bd28((int *)&DAT_0045bbbc,'\x01',param_3);
  }
  return DAT_005704ec;
}

