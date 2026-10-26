/*
 * FUN_0040fd88 at 0040fd88
 * undefined __register FUN_0040fd88(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 0040fd88-0040fdc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fd88(int *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040fb60(param_1,(int)param_2,param_3);
    return;
  }
  if (cVar1 != '\n') {
    if (cVar1 != '\v') {
      FUN_00403db0(param_3);
      return;
    }
    FUN_0040fce4(param_1,(int)param_2,param_3);
    return;
  }
  FUN_0040fbd0(param_1,(int)param_2,param_3);
  return;
}

