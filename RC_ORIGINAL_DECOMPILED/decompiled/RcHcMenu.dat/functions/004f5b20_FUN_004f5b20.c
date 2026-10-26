/*
 * FUN_004f5b20 at 004f5b20
 * undefined __register FUN_004f5b20(int * param_1, int * param_2)
 * Address ranges: 004f5b20-004f5b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5b20(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x7d];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_004f6360(piVar1,param_1);
    }
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
    if (param_2 != (int *)0x0) {
      FUN_004f62b8((int)param_2,(int)param_1);
    }
  }
  return;
}

