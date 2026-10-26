/*
 * FUN_10003840 at 10003840
 * undefined4 __cdecl FUN_10003840(int param_1, short * param_2, int param_3, int param_4)
 * Address ranges: 10003840-100038de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10003840(int param_1,short *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_10002980();
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_10001690(*(int *)(param_1 + 0x30));
    if (iVar2 == param_1) goto LAB_10003896;
  }
  iVar2 = FUN_10001640(*(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x30) = iVar2;
  FUN_10001680(iVar2,param_1);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  DAT_100e3e10 = DAT_100e3e10 + 1;
LAB_10003896:
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    FUN_10003540(param_2,*(int *)(param_1 + 0x10),*(undefined4 **)(param_1 + 0x30),param_4);
  }
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x34) | 1;
  }
  *(byte *)(param_1 + 0x34) = bVar1;
  FUN_100016b0(*(int **)(param_1 + 0x30),DAT_100e3e14);
  return *(undefined4 *)(param_1 + 0x30);
}

