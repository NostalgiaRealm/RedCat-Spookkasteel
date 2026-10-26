/*
 * FUN_100046b0 at 100046b0
 * bool __cdecl FUN_100046b0(int * param_1)
 * Address ranges: 100046b0-1000470e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_100046b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  
  DAT_1002a6c4 = *param_1;
  if (*param_1 == 0) {
    piVar2 = param_1 + 1;
  }
  else {
    piVar2 = (int *)0x0;
  }
  ppiVar3 = &param_1;
  iVar1 = DirectDrawCreate(piVar2,ppiVar3,0);
  if (-1 < iVar1) {
    iVar1 = (*(code *)**ppiVar3)(ppiVar3,&DAT_10011858);
    (**(code **)(DAT_100274a8 + 8))(&DAT_100274a8);
    return -1 < iVar1;
  }
  return false;
}

