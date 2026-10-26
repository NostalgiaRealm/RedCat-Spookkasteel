/*
 * FUN_0049f0ec at 0049f0ec
 * int * __register FUN_0049f0ec(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049f0ec-0049f131
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049f0ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_005715fc == (int *)0x0) {
    DAT_005715fc = FUN_0049f150((int *)&LAB_0049eb10,'\x01',param_3);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x49f0dc);
  }
  return DAT_005715fc;
}

