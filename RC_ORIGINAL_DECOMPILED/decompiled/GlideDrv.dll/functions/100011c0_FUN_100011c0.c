/*
 * FUN_100011c0 at 100011c0
 * int * __cdecl FUN_100011c0(int param_1, int * param_2)
 * Address ranges: 100011c0-1000120e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100011c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x104);
  iVar2 = 0;
  while ((((piVar1[0xd] == 0 || (*param_2 != *piVar1)) || (param_2[1] != piVar1[1])) ||
         ((param_2[2] != piVar1[2] || (param_2[3] != piVar1[3]))))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xf;
    if (0x7f < iVar2) {
      return (int *)0x0;
    }
  }
  return piVar1;
}

