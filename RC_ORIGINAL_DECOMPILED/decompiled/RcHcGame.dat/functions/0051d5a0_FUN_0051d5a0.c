/*
 * FUN_0051d5a0 at 0051d5a0
 * undefined FUN_0051d5a0(void)
 * Address ranges: 0051d5a0-0051d60b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 10 for .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f658 slot 10 for
   .?AVCAdamGameState_GS_RESTART@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0051d5a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  iVar1 = FUN_0040cf10();
  if (*(int *)(iVar1 + 0x814) != 0) {
    uVar8 = 1;
    iVar1 = param_1 + 100;
    uVar4 = 0x437f0000;
    uVar5 = 0x437f0000;
    uVar6 = 0x437f0000;
    uVar7 = 0x437f0000;
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    FUN_00491700(iVar1,uVar2,uVar3,0x437f0000,0x437f0000,0x437f0000,0x437f0000,1);
    FUN_004b15c0(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  }
  return;
}

