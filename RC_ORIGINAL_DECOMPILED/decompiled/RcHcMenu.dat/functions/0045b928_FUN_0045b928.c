/*
 * FUN_0045b928 at 0045b928
 * undefined __register FUN_0045b928(int * param_1, int param_2)
 * Address ranges: 0045b928-0045b96c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045b928(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((char)param_1[2] == '\0') {
    piVar1 = (int *)(**(code **)*param_1)(param_1,param_2);
    FUN_00403094(piVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  FUN_00412224((int *)param_1[1],param_2);
  return;
}

