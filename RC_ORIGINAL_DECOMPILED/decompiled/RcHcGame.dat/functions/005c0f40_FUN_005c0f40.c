/*
 * FUN_005c0f40 at 005c0f40
 * undefined FUN_005c0f40(void)
 * Address ranges: 005c0f40-005c113a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c0f40(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

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
  iVar1 = FUN_005c6a70();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8c) != param_3) goto LAB_005c0fc7;
  if (*(int *)(param_1 + 0x98) == 0) {
LAB_005c0f8f:
    if (param_4 == 0) {
LAB_005c0fa3:
      if ((*(int *)(param_1 + 0x90) <= param_2) && (param_2 <= *(int *)(param_1 + 0x94))) {
        iVar1 = FUN_005c1230(param_1,param_2,param_6);
        return iVar1;
      }
    }
  }
  else if (param_4 == 0) {
    if (*(int *)(param_1 + 0x98) == 0) goto LAB_005c0f8f;
  }
  else if (*(int *)(param_1 + 0x9c) == param_5) goto LAB_005c0fa3;
LAB_005c0fc7:
  if ((*(int *)(param_1 + 0xac) != 0) && (iVar1 = FUN_005c23a0(param_1), iVar1 == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28 + param_2 * 4) == 0) &&
     (iVar1 = FUN_005c3240(param_1,param_2,param_2), iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == param_3) {
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_005c1011:
      if (param_4 == 0) {
        iVar1 = FUN_005c1140(param_1,param_2,param_6);
        return iVar1;
      }
    }
    else if (param_4 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) goto LAB_005c1011;
    }
    else if (*(int *)(param_1 + 0x20) == param_5) {
      iVar1 = FUN_005c1140(param_1,param_2,param_6);
      return iVar1;
    }
  }
  iVar1 = FUN_005c0e50(param_1,param_6,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 4);
  *(int *)(iVar1 + 0x10) = param_3;
  *(int *)(iVar1 + 0x20) = param_5;
  *(int *)(iVar1 + 0x1c) = param_4;
  iVar2 = FUN_005c6a90();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0x24);
    FUN_005c4b80();
  }
  iVar2 = FUN_005c6ad0();
  if (((iVar2 == 0) && (*(int *)(param_1 + 0x68) != 0)) &&
     (iVar2 = FUN_005c0a50(param_2,param_2,2,0,0), iVar2 == 0)) {
    uVar3 = 0x3c4;
  }
  else {
    iVar2 = FUN_005c03b0(iVar1,0);
    if (iVar2 == 0) goto LAB_005c10ee;
    iVar2 = FUN_005c34d0(iVar1,0);
    if (iVar2 != 0) {
      return iVar1;
    }
    uVar3 = 0x3d5;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar3,
               &DAT_006b3f70,0);
LAB_005c10ee:
  FUN_005c02b0();
  return 0;
}

