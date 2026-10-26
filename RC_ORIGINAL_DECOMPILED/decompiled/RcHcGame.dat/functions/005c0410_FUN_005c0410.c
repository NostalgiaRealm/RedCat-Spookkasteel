/*
 * FUN_005c0410 at 005c0410
 * undefined FUN_005c0410(void)
 * Address ranges: 005c0410-005c0522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c0410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x80;
  if (param_3 == 0) {
    iVar3 = param_1 + 4;
  }
  FUN_005c6b00();
  if (*(int *)(iVar3 + 0x20) == 0) {
    if (param_3 == 0) {
      uVar2 = FUN_005c4aa0();
    }
    else {
      iVar1 = FUN_005c6ad0();
      if ((iVar1 == 0) && (*(int *)(param_1 + 0x24) != 0)) {
        FUN_005c6ad0();
      }
      uVar2 = FUN_005c4bd0(0x100);
    }
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
  }
  iVar1 = *(int *)(iVar3 + 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x14) = 1;
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
  }
  if ((param_3 != 0) && (iVar3 = (**(code **)(param_3 + 0x44))(), iVar3 == 0)) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x181,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar2 = FUN_005c4cb0();
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  return 1;
}

