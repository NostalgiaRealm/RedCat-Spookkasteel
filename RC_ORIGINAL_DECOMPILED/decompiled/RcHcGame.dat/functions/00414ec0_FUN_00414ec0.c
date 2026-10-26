/*
 * FUN_00414ec0 at 00414ec0
 * undefined FUN_00414ec0(void)
 * Address ranges: 00414ec0-00414f64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 38 for .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 38 for
   .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00414ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float afStack_18 [4];
  float fStack_8;
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
  afStack_18[3] = *(float *)(iVar2 + 0x150) * 10.0;
  afStack_18[0] = -afStack_18[3];
  fStack_4 = *(float *)(iVar2 + 0x158) * 10.0;
  afStack_18[2] = -fStack_4;
  fStack_8 = *(float *)(iVar2 + 0x154) * 50.0;
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

