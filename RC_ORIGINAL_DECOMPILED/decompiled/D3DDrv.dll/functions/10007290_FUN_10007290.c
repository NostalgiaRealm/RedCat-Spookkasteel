/*
 * FUN_10007290 at 10007290
 * undefined4 * __cdecl FUN_10007290(undefined4 * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10007290-10007370
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10007290(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(char *)(param_1 + 4) = (char)param_4;
  bVar1 = FUN_10005100(param_2,param_3);
  *(byte *)((int)param_1 + 0x11) = bVar1;
  param_1[3] = 1 << (bVar1 & 0x1f);
  puVar2 = _malloc(param_4 * 0x14);
  param_1[5] = puVar2;
  iVar6 = 0;
  for (uVar4 = param_4 * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar5 = param_1[5];
  if (iVar5 == 0) {
LAB_100072f2:
    FUN_10007670(param_1);
    return (undefined4 *)0x0;
  }
  iVar7 = 1 << (*(byte *)((int)param_1 + 0x11) & 0x1f);
  param_2 = 0;
  if (0 < param_4) {
    do {
      iVar5 = FUN_100078d0(iVar5 + iVar6,iVar7,iVar7,&DAT_101271e8,0,0);
      if (iVar5 == 0) goto LAB_100072f2;
      uVar3 = FUN_10004980(DAT_101c3670,iVar7,iVar7,1,0,&DAT_101271e8);
      *(undefined4 *)(param_1[5] + 4 + iVar6) = uVar3;
      iVar5 = param_1[5];
      if (*(int *)(iVar5 + 4 + iVar6) == 0) goto LAB_100072f2;
      iVar6 = iVar6 + 0x14;
      iVar7 = iVar7 >> 1;
      param_2 = param_2 + 1;
    } while (param_2 < param_4);
  }
  return param_1;
}

