/*
 * FUN_005363e0 at 005363e0
 * int * __register FUN_005363e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 005363e0-00536425
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005363e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00571f68 == (int *)0x0) {
    DAT_00571f68 = FUN_00536270((int *)&PTR_FUN_005361dc,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x536258);
  }
  return DAT_00571f68;
}

