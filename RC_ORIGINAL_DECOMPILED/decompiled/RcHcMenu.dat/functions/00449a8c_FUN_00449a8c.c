/*
 * FUN_00449a8c at 00449a8c
 * undefined __register FUN_00449a8c(int * param_1, int * param_2)
 * Address ranges: 00449a8c-00449aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449a8c(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7c] + 0x1c) != '\0')) {
    FUN_00448cbc(param_1[0x7c],(int)param_2);
    return;
  }
  FUN_00436bac(param_1,param_2);
  return;
}

