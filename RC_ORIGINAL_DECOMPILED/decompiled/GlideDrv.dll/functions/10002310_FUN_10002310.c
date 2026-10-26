/*
 * FUN_10002310 at 10002310
 * undefined4 __cdecl FUN_10002310(int * param_1, int param_2, int param_3, undefined4 param_4, int param_5, int * param_6)
 * Address ranges: 10002310-10002385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_10002310(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  iVar1 = FUN_10002b00(iVar1);
  iVar2 = FUN_10002a00(iVar1,&param_2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_10002a00(iVar1 >> ((char)param_4 - 1U & 0x1f),&param_3);
  if (iVar2 == 0) {
    return 0;
  }
  *param_6 = iVar1;
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = 3;
  param_1[3] = param_5;
  return 1;
}

