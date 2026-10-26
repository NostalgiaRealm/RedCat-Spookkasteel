/*
 * FUN_00499078 at 00499078
 * int * __register FUN_00499078(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00499078-004990a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00499078(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_005739ec == (int *)0x0) {
    DAT_005739ec = FUN_00498dfc((int *)&LAB_00498d78,'\x01',param_3);
  }
  return DAT_005739ec;
}

