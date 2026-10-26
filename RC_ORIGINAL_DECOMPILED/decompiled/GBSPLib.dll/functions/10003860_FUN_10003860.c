/*
 * FUN_10003860 at 10003860
 * undefined FUN_10003860(void)
 * Address ranges: 10003860-10003962
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10003860(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  DAT_1014e214 = DAT_1014e214 + 1;
  iVar1 = FUN_10003410(param_2,param_1);
  if (iVar1 == 0) {
    param_1[0x18] = 0;
    *param_1 = 0xffffffff;
    FUN_100037b0(param_1,param_2);
    FUN_10001790(param_1[0x17]);
    return param_1;
  }
  param_1[0x18] = iVar1;
  *param_1 = *(undefined4 *)(iVar1 + 4);
  FUN_100036c0(param_2,param_1,&local_8,local_4);
  FUN_100017e0(param_2);
  piVar5 = param_1 + 4;
  iVar1 = 2;
  piVar3 = piVar5;
  do {
    iVar2 = FUN_100027f0();
    *(undefined4 **)(iVar2 + 0x18) = param_1;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_10001de0(param_1[0x17],*param_1,0,0x10,0,*piVar5 + 0x5c,param_1[5] + 0x5c);
  if ((*(int *)(*piVar5 + 0x5c) == 0) || (*(int *)(param_1[5] + 0x5c) == 0)) {
    (*DAT_1014e35c)(s__WARNING__BuildTree_r__Volume_wa_100366a0);
  }
  FUN_10001790(param_1[0x17]);
  puVar4 = &local_8;
  iVar1 = 2;
  do {
    iVar2 = FUN_10003860(*piVar5,*puVar4);
    *piVar5 = iVar2;
    puVar4 = puVar4 + 1;
    piVar5 = piVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}

