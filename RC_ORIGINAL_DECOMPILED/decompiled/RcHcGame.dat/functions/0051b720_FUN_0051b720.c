/*
 * FUN_0051b720 at 0051b720
 * undefined FUN_0051b720(void)
 * Address ranges: 0051b720-0051b774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 10 for .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 10 for
   .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0051b720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar1 = param_1 + 0x70;
    uVar4 = 0x437f0000;
    uVar5 = 0x437f0000;
    uVar6 = 0x437f0000;
    uVar7 = 0x437f0000;
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    FUN_00491700(iVar1,uVar2,uVar3,0x437f0000,0x437f0000,0x437f0000,0x437f0000);
    FUN_004b1150(iVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}

