/*
 * FUN_00459680 at 00459680
 * int * __register FUN_00459680(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00459680-004596bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00459680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_0056fce4 == (int *)0x0) {
    DAT_0056fce4 = FUN_004593e0((int *)&PTR_FUN_004593bc,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x459668);
  }
  return DAT_0056fce4;
}

