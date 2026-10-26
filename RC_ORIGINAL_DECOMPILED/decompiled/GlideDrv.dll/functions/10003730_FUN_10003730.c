/*
 * FUN_10003730 at 10003730
 * undefined __cdecl FUN_10003730(int param_1)
 * Address ranges: 10003730-10003833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10003730(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_10002980();
  if ((*(int *)(param_1 + 0x20) == 1) &&
     ((iVar2 = *(int *)(param_1 + 4), DAT_100e3de8 != iVar2 || ((*(byte *)(iVar2 + 0x34) & 1) != 0))
     )) {
    _grTexDownloadTable_12(DAT_101f55a0,2,*(undefined4 *)(iVar2 + 0x28));
    DAT_100e3de8 = *(int *)(param_1 + 4);
    pbVar1 = (byte *)(*(int *)(param_1 + 4) + 0x34);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_10001690(*(int *)(param_1 + 0x30));
    if (iVar2 == param_1) goto LAB_100037b6;
  }
  iVar2 = FUN_10001640(*(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x30) = iVar2;
  FUN_10001680(iVar2,param_1);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  DAT_100e3e0c = DAT_100e3e0c + 1;
LAB_100037b6:
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    iVar2 = FUN_100016a0(*(undefined4 **)(param_1 + 0x30));
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x28);
    FUN_10002390(*(undefined4 *)(param_1 + 0x20),(undefined4 *)(iVar2 + 0xc));
    FUN_10001280(DAT_101f5524,*(int *)(param_1 + 0x30),iVar2);
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  FUN_100016b0(*(int **)(param_1 + 0x30),DAT_100e3e14);
  uVar3 = FUN_100016a0(*(undefined4 **)(param_1 + 0x30));
  uVar4 = 3;
  iVar2 = FUN_10001630(*(int *)(param_1 + 0x30));
  FUN_10002b20(DAT_101f55a0,iVar2,uVar4,uVar3);
  return;
}

