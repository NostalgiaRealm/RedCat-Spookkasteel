/*
 * FUN_004ad310 at 004ad310
 * undefined FUN_004ad310(void)
 * Address ranges: 004ad310-004ad397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ad310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_00484d70(param_2,*(undefined4 *)(param_1 + 0x28));
  uVar2 = FUN_00484d70(param_2,*(undefined4 *)(param_1 + 0x2c));
  iVar4 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
    }
    if (iVar3 <= iVar4) break;
    uVar5 = uVar1;
    uVar6 = uVar2;
    uVar7 = param_4;
    FUN_004ad480(iVar4);
    FUN_004ad9c0(uVar5,uVar6,uVar7);
    iVar4 = iVar4 + 1;
  }
  if (*(int *)(param_1 + 0x28) == -1) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

