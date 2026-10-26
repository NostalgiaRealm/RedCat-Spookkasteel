/*
 * FUN_004722bc at 004722bc
 * undefined __register FUN_004722bc(char param_1, double * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 004722bc-00472301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004722bc(char param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float10 in_ST0;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0040abf8(&local_c,param_2,param_3,(double)CONCAT44(param_5,param_4));
  if (param_1 == '\t') {
    *(undefined4 *)param_2 = local_8;
  }
  else if (param_1 == '\n') {
    *(undefined4 *)param_2 = local_c;
  }
  else {
    FUN_0040ac84();
    *param_2 = (double)in_ST0;
  }
  return;
}

