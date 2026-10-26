/*
 * FUN_00517c90 at 00517c90
 * int * __register FUN_00517c90(void)
 * Address ranges: 00517c90-00517cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00517c90(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00571eb4 == (int *)0x0) {
    DAT_00571eb4 = FUN_00517eac((int *)&PTR_FUN_00517be4,'\x01',(int *)0x0);
    FUN_00518028(DAT_00571eb4);
    piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar1,0x517c80);
  }
  return DAT_00571eb4;
}

