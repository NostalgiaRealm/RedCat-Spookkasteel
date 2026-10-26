/*
 * FUN_004eda88 at 004eda88
 * undefined __register FUN_004eda88(int * param_1, int * param_2)
 * Address ranges: 004eda88-004edaba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eda88(int *param_1,int *param_2)

{
  int *piVar1;
  
  if ((char)param_1[0xd] == '\x02') {
    FUN_00494398(param_2);
  }
  else {
    piVar1 = (int *)FUN_004ed88c(param_1);
    FUN_004d6cb4(piVar1,param_2);
  }
  return;
}

