/*
 * FUN_100088b6 at 100088b6
 * undefined __cdecl FUN_100088b6(char * param_1, int param_2)
 * Address ranges: 100088b6-100088da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100088b6(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1000be80((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

