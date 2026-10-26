/*
 * FUN_100071b0 at 100071b0
 * char * __cdecl FUN_100071b0(char * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100071b0-1000729d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100071b0(char *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_4 != 1) {
    FUN_10005e40(7,s_D3D_CreateLightmapTHandle__Inval_10018ac4);
    return (char *)0x0;
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  param_1[0x10] = '\x01';
  bVar1 = FUN_10005bc0(param_2,param_3);
  iVar5 = 1 << (bVar1 & 0x1f);
  param_1[0x11] = bVar1;
  *(int *)(param_1 + 0xc) = iVar5;
  puVar2 = _malloc(0x10);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xc) = 2;
  iVar3 = FUN_10007720(*(undefined4 *)(param_1 + 0x14),iVar5,iVar5,&DAT_10028b00);
  if (iVar3 == 0) {
    FUN_100074d0(param_1);
    return (char *)0x0;
  }
  FUN_100018a0(0,**(int **)(param_1 + 0x14));
  uVar4 = FUN_10005490(DAT_100ec0f4,iVar5,iVar5,1,(uint)(DAT_10028944 != 0),&DAT_10028b00);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = uVar4;
  if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
    FUN_100074d0(param_1);
    return (char *)0x0;
  }
  return param_1;
}

