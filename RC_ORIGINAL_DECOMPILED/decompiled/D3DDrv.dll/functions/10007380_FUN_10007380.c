/*
 * FUN_10007380 at 10007380
 * undefined4 * __cdecl FUN_10007380(undefined4 * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10007380-1000742f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10007380(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_4 != 1) {
    FUN_10005350(7,s_D3D_CreateLightmapTHandle__Inval_100155c0);
    return (undefined4 *)0x0;
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  bVar1 = FUN_10005100(param_2,param_3);
  iVar4 = 1 << (bVar1 & 0x1f);
  *(byte *)((int)param_1 + 0x11) = bVar1;
  param_1[3] = iVar4;
  puVar2 = _malloc(0x14);
  param_1[5] = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(param_1[5] + 0x10) = 2;
  uVar3 = FUN_10004980(DAT_101c36f4,iVar4,iVar4,1,(uint)(DAT_10038e74 != 0),&DAT_101271e8);
  *(undefined4 *)(param_1[5] + 4) = uVar3;
  if (*(int *)(param_1[5] + 4) == 0) {
    FUN_10007670(param_1);
    return (undefined4 *)0x0;
  }
  return param_1;
}

