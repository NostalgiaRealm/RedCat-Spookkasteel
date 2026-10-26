/*
 * FUN_00449ab0 at 00449ab0
 * undefined __register FUN_00449ab0(int * param_1, int * param_2)
 * Address ranges: 00449ab0-00449ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449ab0(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7d] + 0x1c) != '\0')) {
    FUN_00448cbc(param_1[0x7d],(int)param_2);
    return;
  }
  FUN_00436bcc(param_1,param_2);
  return;
}

