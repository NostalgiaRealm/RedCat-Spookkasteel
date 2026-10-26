/*
 * FUN_0054c270 at 0054c270
 * int __register FUN_0054c270(void)
 * Address ranges: 0054c270-0054c2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0054c270(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_005747b0 == 0) {
    DAT_005747b0 = FUN_00449cd0((int *)&PTR_FUN_0054c038,'\x01',0);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x54c248);
  }
  return DAT_005747b0;
}

