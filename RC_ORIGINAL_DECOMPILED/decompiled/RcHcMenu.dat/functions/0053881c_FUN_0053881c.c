/*
 * FUN_0053881c at 0053881c
 * undefined4 __register FUN_0053881c(int * param_1)
 * Address ranges: 0053881c-0053885f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0053881c(int *param_1)

{
  int *piVar1;
  undefined4 local_c;
  
  if ((char)param_1[0xb6] == '\x03') {
    piVar1 = (int *)FUN_00538fbc(param_1);
    local_c = FUN_00537720(piVar1);
  }
  else {
    piVar1 = (int *)FUN_00520bf8((int)param_1);
    local_c = FUN_00403224(piVar1,(int)&PTR_FUN_005369bc);
  }
  return local_c;
}

