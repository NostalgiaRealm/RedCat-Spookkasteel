/*
 * FUN_00500514 at 00500514
 * int * __register FUN_00500514(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00500514-00500568
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00500514(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00571dc8 == (int *)0x0) {
    DAT_00571dc8 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
    FUN_004218f8(DAT_00571dc8,DAT_005734dc,"COMBO_ARROW");
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x5004fc);
  }
  return DAT_00571dc8;
}

