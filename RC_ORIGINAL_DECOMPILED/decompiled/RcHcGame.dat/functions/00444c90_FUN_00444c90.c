/*
 * FUN_00444c90 at 00444c90
 * undefined FUN_00444c90(void)
 * Address ranges: 00444c90-00444d49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64cc24 slot 31 for .?AVCRcWeaponPoison@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64cc24 slot 31 for
   .?AVCRcWeaponPoison@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00444c90(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  FUN_00443300(param_2,param_3);
  fVar1 = _DAT_006b5dd8 * param_4[1];
  fVar2 = _DAT_006b5dd8 * param_4[2];
  *(float *)(param_1 + 0x234) = _DAT_006b5dd8 * *param_4;
  *(float *)(param_1 + 0x238) = fVar1;
  *(float *)(param_1 + 0x23c) = fVar2;
  *(undefined4 *)(param_1 + 0x1f0) = _DAT_006b5dcc;
  fVar4 = (float10)FUN_00442e30(DAT_006b5dd4,DAT_006b5dd0);
  uVar3 = FUN_004432e0((float)fVar4);
  FUN_004041b0(uVar3);
  FUN_00442bc0();
  *(undefined4 *)(param_1 + 0x1d8) = _DAT_006b5dc8;
  *(undefined4 *)(param_1 + 0x130) = _DAT_006b5ddc;
  return;
}

