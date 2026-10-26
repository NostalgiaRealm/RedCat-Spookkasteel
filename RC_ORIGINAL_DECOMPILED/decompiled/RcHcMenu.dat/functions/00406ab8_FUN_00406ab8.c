/*
 * FUN_00406ab8 at 00406ab8
 * undefined __register FUN_00406ab8(int * param_1, int * param_2)
 * Address ranges: 00406ab8-00406ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406ab8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

