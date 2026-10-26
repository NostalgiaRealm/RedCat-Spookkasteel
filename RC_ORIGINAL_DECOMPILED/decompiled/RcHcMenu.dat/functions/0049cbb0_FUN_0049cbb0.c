/*
 * FUN_0049cbb0 at 0049cbb0
 * int * __register FUN_0049cbb0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049cbb0-0049cbf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049cbb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_005715f0 == (int *)0x0) {
    DAT_005715f0 = FUN_0049cbf8((int *)&LAB_0049c984,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x49cba0);
  }
  return DAT_005715f0;
}

