/*
 * FUN_1000710e at 1000710e
 * undefined __cdecl FUN_1000710e(char * param_1, int param_2)
 * Address ranges: 1000710e-10007132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000710e(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10008960((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

