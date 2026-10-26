/*
 * FUN_004d1940 at 004d1940
 * undefined FUN_004d1940(void)
 * Address ranges: 004d1940-004d198a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004d1940(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  
  _Str1 = *(char **)(param_2 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,s_Reset_00699314);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x5c))();
    return 1;
  }
  uVar2 = FUN_005027d0(param_2,param_3,param_4);
  return uVar2;
}

