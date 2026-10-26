/*
 * FUN_00536804 at 00536804
 * int * __register FUN_00536804(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00536804-00536849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00536804(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00571f6c == (int *)0x0) {
    DAT_00571f6c = FUN_005367ac((int *)&DAT_0053624c,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x536794);
  }
  return DAT_00571f6c;
}

