/*
 * FUN_005375ec at 005375ec
 * int * __register FUN_005375ec(int * param_1, int * param_2)
 * Address ranges: 005375ec-00537621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005375ec(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_28 [8];
  int *local_8;
  
  piVar1 = local_28;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *param_2;
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  }
  local_8 = param_1;
  piVar1 = FUN_005371d8((int *)&PTR_FUN_005369bc,'\x01',param_1,local_28);
  return piVar1;
}

