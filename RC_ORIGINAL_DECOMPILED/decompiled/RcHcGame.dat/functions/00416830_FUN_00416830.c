/*
 * FUN_00416830 at 00416830
 * undefined FUN_00416830(void)
 * Address ranges: 00416830-004168bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b3ac slot 38 for .?AVCRcTouchGhost@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b3ac slot 38 for
   .?AVCRcTouchGhost@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00416830(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float afStack_18 [5];
  float fStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))();
  iVar2 = *param_1;
  pfVar4 = (float *)(iVar1 + 0x11c);
  pfVar5 = afStack_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  iVar2 = (**(code **)(iVar2 + 0x9c))();
  afStack_18[3] = *(float *)(iVar2 + 0x150) * 20.0;
  afStack_18[0] = -afStack_18[3];
  fStack_4 = *(float *)(iVar2 + 0x158) * 20.0;
  afStack_18[2] = -fStack_4;
  iVar2 = (**(code **)(*param_1 + 0x9c))();
  pfVar4 = afStack_18;
  pfVar5 = (float *)(iVar2 + 0x11c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  return;
}

