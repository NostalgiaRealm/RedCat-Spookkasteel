/*
 * FUN_005d5960 at 005d5960
 * undefined FUN_005d5960(void)
 * Address ranges: 005d5960-005d5a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d5960(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_604 [1540];
  
  param_2[0x306] = 0;
  if (param_2[0x2f9] != 0) {
    FUN_005d0ab0(param_4,param_3,local_604);
    iVar1 = param_2[6];
    iVar2 = param_2[0x2f9];
    iVar3 = *(int *)(iVar1 + 0x11c);
    while ((iVar2 != 0 && (param_2[0x306] < 0xc))) {
      piVar4 = (int *)FUN_005b7c80(iVar2);
      if ((*(int *)(*(int *)(iVar1 + 0xd5cc) + *piVar4 * 0xc) == *param_2) &&
         ((param_5 == *(int *)(iVar3 + 0x30 + *piVar4 * 0x3c) &&
          (iVar5 = FUN_005d1670(local_604,iVar2,*(float *)(iVar2 + 0x24) - 1.0), iVar5 != 0)))) {
        piVar4[7] = param_2[1];
        param_2[param_2[0x306] + 0x2fa] = iVar2;
        param_2[0x306] = param_2[0x306] + 1;
        *(int *)(param_1 + 0x336a4) = *(int *)(param_1 + 0x336a4) + 1;
      }
      iVar2 = *(int *)(iVar2 + 0x38);
    }
  }
  return;
}

