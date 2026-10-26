/*
 * FUN_0051c310 at 0051c310
 * int * __register FUN_0051c310(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0051c310-0051c34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0051c310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00571ed8 == (int *)0x0) {
    DAT_00571ed8 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x51c2f8);
  }
  return DAT_00571ed8;
}

