/*
 * FUN_10007430 at 10007430
 * undefined4 * __cdecl FUN_10007430(undefined4 * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10007430-100074cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10007430(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_4 != 1) {
    FUN_10005350(7,s_D3D_Create2DTHandle__Invalid_num_100155fc);
    return (undefined4 *)0x0;
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar1 = FUN_10005100(param_2,param_3);
  *(undefined1 *)((int)param_1 + 0x11) = uVar1;
  param_1[3] = param_2;
  puVar2 = _malloc(0x14);
  param_1[5] = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  if (param_1[5] == 0) {
    FUN_10007670(param_1);
    return (undefined4 *)0x0;
  }
  iVar3 = FUN_100078d0(param_1[5],param_2,param_3,&DAT_101271e8,1,0);
  if (iVar3 == 0) {
    FUN_10007670(param_1);
    return (undefined4 *)0x0;
  }
  return param_1;
}

