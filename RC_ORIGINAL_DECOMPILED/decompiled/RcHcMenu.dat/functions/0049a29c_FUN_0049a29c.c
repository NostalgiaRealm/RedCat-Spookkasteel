/*
 * FUN_0049a29c at 0049a29c
 * int * __register FUN_0049a29c(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049a29c-0049a2d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049a29c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_005739f0 == (int *)0x0) {
    DAT_005739f0 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
    FUN_00420484((int)DAT_005739f0);
  }
  return DAT_005739f0;
}

