/*
 * FUN_1000d8c9 at 1000d8c9
 * undefined __cdecl FUN_1000d8c9(int param_1, undefined4 * param_2)
 * Address ranges: 1000d8c9-1000d8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000d8c9(int param_1,undefined4 *param_2)

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

