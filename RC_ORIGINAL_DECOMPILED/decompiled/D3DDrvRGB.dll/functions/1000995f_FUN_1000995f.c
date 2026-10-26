/*
 * FUN_1000995f at 1000995f
 * undefined __cdecl FUN_1000995f(char * param_1, int param_2)
 * Address ranges: 1000995f-10009983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000995f(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1000de70((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

