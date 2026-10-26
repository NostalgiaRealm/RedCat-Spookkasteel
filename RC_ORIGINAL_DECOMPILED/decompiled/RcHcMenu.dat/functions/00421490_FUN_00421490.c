/*
 * FUN_00421490 at 00421490
 * int __register FUN_00421490(int * param_1)
 * Address ranges: 00421490-004214ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00421490(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    FUN_00421648((int)param_1);
    piVar1 = FUN_00420290((int *)&PTR_FUN_00420118,'\x01',(int)param_1);
    param_1[9] = (int)piVar1;
    piVar1[0xb] = (int)param_1;
    piVar1[10] = *(int *)(*param_1 + 0x10);
    piVar1[0xd] = (int)param_1;
    piVar1[0xc] = (int)FUN_00421178;
  }
  return param_1[9];
}

