/*
 * FUN_0056fd00 at 0056fd00
 * undefined FUN_0056fd00(void)
 * Address ranges: 0056fd00-0056fdf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8f8 slot 21 for .?AVCAdamActorParticle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8f8 slot 21 for
   .?AVCAdamActorParticle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0056fd00(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = FUN_0056fe00();
  if (*(char *)(iVar5 + 0x86) != '\0') {
    fVar6 = (float10)FUN_005b2fd0();
    fVar1 = (float)fVar6;
    fVar2 = *(float *)(param_1 + 0x230);
    fVar3 = *(float *)(param_1 + 0x234);
    fVar4 = *(float *)(param_1 + 0x238);
    iVar5 = FUN_0056fe00();
    FUN_005b2fa0(*(float *)(iVar5 + 0x88) * 0.01);
    if (*(char *)(param_1 + 0x2e6) == '\0') {
      fVar1 = 0.0;
    }
    fVar1 = fVar1 * 0.005;
    fVar6 = (float10)FUN_00409e30(param_2);
    FUN_0049ccf0((float)(fVar6 * (float10)fVar1 * (float10)fVar2));
    fVar6 = (float10)FUN_00409e30(param_2);
    FUN_0049cd90((float)(fVar6 * (float10)fVar1 * (float10)fVar3));
    fVar6 = (float10)FUN_00409e30(param_2);
    FUN_0049ce30((float)(fVar6 * (float10)fVar1 * (float10)fVar4));
  }
  return;
}

