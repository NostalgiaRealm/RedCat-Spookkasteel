/*
 * FUN_0043725c at 0043725c
 * undefined __register FUN_0043725c(int param_1, char * param_2, undefined4 * param_3)
 * Address ranges: 0043725c-0043727f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043725c(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00419414(*(int *)(param_1 + 4),param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0042e674);
  *param_3 = uVar2;
  return;
}

