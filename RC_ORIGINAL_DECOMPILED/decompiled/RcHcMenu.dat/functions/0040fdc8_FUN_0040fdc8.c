/*
 * FUN_0040fdc8 at 0040fdc8
 * undefined __register FUN_0040fdc8(int * param_1, undefined4 * param_2, LPCSTR param_3)
 * Address ranges: 0040fdc8-0040fdf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fdc8(int *param_1,undefined4 *param_2,LPCSTR param_3)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040fb88(param_1,param_2,(undefined4 *)param_3);
    return;
  }
  if (cVar1 == '\n') {
    FUN_0040fc10(param_1,(int)param_2,(undefined4 *)param_3);
    return;
  }
  if (cVar1 == '\v') {
    FUN_0040fd30(param_1,(int)param_2,param_3);
  }
  return;
}

