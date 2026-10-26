/*
 * FUN_100070d0 at 100070d0
 * char * __cdecl FUN_100070d0(char * param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 100070d0-100071af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100070d0(char *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  param_1[0x10] = (char)param_4;
  bVar1 = FUN_10005bc0(param_2,param_3);
  param_1[0x11] = bVar1;
  *(int *)(param_1 + 0xc) = 1 << (bVar1 & 0x1f);
  puVar2 = _malloc(param_4 << 4);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  iVar5 = 0;
  for (iVar4 = (param_4 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
LAB_10007131:
    FUN_100074d0(param_1);
    return (char *)0x0;
  }
  iVar6 = 1 << (param_1[0x11] & 0x1fU);
  param_2 = 0;
  if (0 < (int)param_4) {
    do {
      iVar4 = FUN_10007720(iVar4 + iVar5,iVar6,iVar6,&DAT_10028b00);
      if (iVar4 == 0) goto LAB_10007131;
      uVar3 = FUN_10005490(DAT_100ec088,iVar6,iVar6,1,0,&DAT_10028b00);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar5) = uVar3;
      iVar4 = *(int *)(param_1 + 0x14);
      if (*(int *)(iVar4 + 4 + iVar5) == 0) goto LAB_10007131;
      iVar5 = iVar5 + 0x10;
      iVar6 = iVar6 >> 1;
      param_2 = param_2 + 1;
    } while (param_2 < (int)param_4);
  }
  return param_1;
}

