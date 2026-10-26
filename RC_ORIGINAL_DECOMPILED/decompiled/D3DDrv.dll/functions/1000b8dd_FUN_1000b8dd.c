/*
 * FUN_1000b8dd at 1000b8dd
 * undefined __cdecl FUN_1000b8dd(int param_1, undefined4 * param_2)
 * Address ranges: 1000b8dd-1000b8f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000b8dd(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

