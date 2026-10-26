/*
 * FUN_0048c870 at 0048c870
 * undefined FUN_0048c870(void)
 * Address ranges: 0048c870-0048c925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0048c870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar4 = 0x437f0000;
    uVar5 = 0x437f0000;
    uVar6 = 0x437f0000;
    uVar7 = 0x437f0000;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    iVar1 = param_1 + 0xc4;
    FUN_00491700(iVar1,uVar2,uVar3,0x437f0000,0x437f0000,0x437f0000,0x437f0000);
    FUN_004b1150(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  if ((*(int *)(param_1 + 0xac) == 3) && (*(int *)(param_1 + 0xe4) != 0)) {
    iVar1 = param_1 + 0xf8;
    uVar4 = 0x437f0000;
    uVar5 = 0x437f0000;
    uVar6 = 0x437f0000;
    uVar7 = 0x437f0000;
    uVar3 = *(undefined4 *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0xe8);
    FUN_00491700(iVar1,uVar2,uVar3,0x437f0000,0x437f0000,0x437f0000,0x437f0000);
    FUN_004b1150(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}

