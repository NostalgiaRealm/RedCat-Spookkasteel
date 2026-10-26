/*
 * FUN_10005f20 at 10005f20
 * int * __cdecl FUN_10005f20(int param_1, uint param_2)
 * Address ranges: 10005f20-10005f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_10005f20(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 <= *(uint *)(param_1 + 4)) {
    piVar1 = (int *)(param_1 + 8);
    iVar2 = 0;
    do {
      if (*piVar1 == 0) {
        piVar1[2] = param_2;
        piVar1[1] = param_2;
        *piVar1 = 1;
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < 0x10);
  }
  return (int *)0x0;
}

