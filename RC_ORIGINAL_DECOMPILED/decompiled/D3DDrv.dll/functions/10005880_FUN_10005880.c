/*
 * FUN_10005880 at 10005880
 * undefined4 __cdecl FUN_10005880(int param_1, short * param_2, int param_3, int param_4)
 * Address ranges: 10005880-10005975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005880(int param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x14);
  if (param_4 != 0) {
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 2;
  }
  iVar3 = FUN_10005830(iVar1);
  if (iVar3 == 0) {
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 2;
    DAT_10116d98 = DAT_10116d98 + 1;
  }
  if ((*(byte *)(iVar1 + 0x10) & 2) != 0) {
    piVar4 = (int *)FUN_10005460(*(int *)(iVar1 + 8));
    FUN_10005980(param_2,(uint)*(byte *)(iVar5 + 0x11),param_3);
    iVar5 = (**(code **)(*piVar4 + 0x1c))
                      (piVar4,0,0,
                       *(undefined4 *)(&DAT_101c3678 + (uint)*(byte *)(iVar5 + 0x11) * 0x14),0,0x10)
    ;
    if (iVar5 != 0) {
      if (iVar5 != -0x7789fe3e) {
        FUN_10001000(iVar5);
        FUN_100020f0(s_SetupTexture__System_to_Video_ca_100154b4);
        return 0;
      }
      iVar5 = FUN_10001b50();
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  if (param_4 == 0) {
    bVar2 = *(byte *)(iVar1 + 0x10) & 0xfd;
  }
  else {
    bVar2 = *(byte *)(iVar1 + 0x10) | 2;
  }
  *(byte *)(iVar1 + 0x10) = bVar2;
  FUN_10004fd0(*(int *)(iVar1 + 8),DAT_101271d0);
  iVar5 = FUN_10005030(*(int *)(iVar1 + 8));
  FUN_10001870(param_1,iVar5);
  return 1;
}

