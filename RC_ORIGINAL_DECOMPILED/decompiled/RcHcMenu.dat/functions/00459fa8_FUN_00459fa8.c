/*
 * FUN_00459fa8 at 00459fa8
 * int * __register FUN_00459fa8(byte param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00459fa8-00459fe9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00459fa8(byte param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00459fec((int *)&PTR_FUN_0045984c,'\x01',param_3);
  FUN_00414728(piVar1,(param_1 & 1) != 0);
  *(bool *)(piVar1 + 0xc) = (param_1 & 2) != 0;
  *(undefined1 *)((int)piVar1 + 0x19) = 2;
  return piVar1;
}

