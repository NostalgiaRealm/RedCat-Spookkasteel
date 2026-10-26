/*
 * FUN_10003b80 at 10003b80
 * undefined FUN_10003b80(void)
 * Address ranges: 10003b80-10003c38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10003b80(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[9];
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1[param_2 + 1] + 8) & 2) != 0) {
    iVar2 = FUN_1000ef90(*(uint *)(param_1[(param_2 == 0) + 1] + 8) ^
                         *(uint *)(param_1[param_2 + 1] + 8));
    if (iVar2 == 2) {
      return 0;
    }
  }
  iVar2 = FUN_1000d8e0(0);
  if ((DAT_10393068 <= *(int *)(iVar1 + 0xc)) || (*(int *)(iVar1 + 0xc) < 0)) {
    (*DAT_1014e35c)(s__WARNING__FaceFromPortal__Bad_te_10036814);
  }
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 4);
  *(int *)(iVar2 + 0x1c) = param_2;
  *(undefined4 **)(iVar2 + 0x38) = param_1;
  *(undefined1 *)(iVar2 + 0x24) = 1;
  if (param_2 != 0) {
    FUN_1000d7b0(*param_1,iVar2 + 8);
    return iVar2;
  }
  FUN_1000d6a0(*param_1,iVar2 + 8);
  return iVar2;
}

