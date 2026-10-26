/*
 * FUN_10010275 at 10010275
 * int __stdcall FUN_10010275(int * param_1)
 * Address ranges: 10010275-100102ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10010275(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000cbf8();
    return iVar3;
  }
  if ((DAT_100ec31c != (FARPROC)0x0) &&
     (bVar2 = FUN_10010311(DAT_100ec31c), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_100ec31c)(param_1);
    return iVar3;
  }
  return 0;
}

