/*
 * FUN_10016c70 at 10016c70
 * undefined FUN_10016c70(void)
 * Address ranges: 10016c70-10016e95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10016c70(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 0) {
    return 0;
  }
  if (7 < param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8c) != param_3) goto LAB_10016ce7;
  if (*(int *)(param_1 + 0x98) == 0) {
LAB_10016caf:
    if (param_4 == 0) {
LAB_10016cc3:
      if ((*(int *)(param_1 + 0x90) <= param_2) && (param_2 <= *(int *)(param_1 + 0x94))) {
        iVar1 = FUN_10016fa0(param_1,param_2,param_6);
        return iVar1;
      }
    }
  }
  else if (param_4 == 0) {
    if (*(int *)(param_1 + 0x98) == 0) goto LAB_10016caf;
  }
  else if (*(int *)(param_1 + 0x9c) == param_5) goto LAB_10016cc3;
LAB_10016ce7:
  if ((*(int *)(param_1 + 0xac) != 0) && (iVar1 = FUN_10017e70(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28 + param_2 * 4) == 0) &&
     (iVar1 = FUN_10018b50(param_1,param_2,param_2), iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == param_3) {
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_10016d31:
      if (param_4 == 0) {
        iVar1 = FUN_10016ea0(param_1,param_2,param_6);
        return iVar1;
      }
    }
    else if (param_4 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) goto LAB_10016d31;
    }
    else if (*(int *)(param_1 + 0x20) == param_5) {
      iVar1 = FUN_10016ea0(param_1,param_2,param_6);
      return iVar1;
    }
  }
  iVar1 = FUN_10016b80(param_1,param_6,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 4);
  *(int *)(iVar1 + 0x10) = param_3;
  *(int *)(iVar1 + 0x20) = param_5;
  *(int *)(iVar1 + 0x1c) = param_4;
  iVar2 = FUN_100203f0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0x24);
    FUN_10019bc0();
  }
  iVar2 = FUN_10020410();
  if (((iVar2 == 0) && (*(int *)(param_1 + 0x68) != 0)) &&
     (iVar2 = FUN_10016730(param_2,param_2,2,0,0), iVar2 == 0)) {
    uVar3 = 0x3bb;
  }
  else {
    if ((*(int *)(param_1 + 0x10) == 0x14) && (*(int *)(iVar1 + 0x10) == 0x14)) {
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x3c7,&DAT_10265ce0,0);
      return 0;
    }
    iVar2 = FUN_100162f0(iVar1,0);
    if (iVar2 == 0) goto LAB_10016e0e;
    iVar2 = FUN_10018dd0(iVar1,0);
    if (iVar2 != 0) {
      return iVar1;
    }
    uVar3 = 0x3d6;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar3,&DAT_10265ce0,0);
LAB_10016e0e:
  FUN_100161f0();
  return 0;
}

