/*
 * FUN_004028c0 at 004028c0
 * undefined FUN_004028c0(void)
 * Address ranges: 004028c0-0040292f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a394 slot 1 for .?AVCRcDmChoke@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a394 slot 1 for
   .?AVCRcDmChoke@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004028c0(int param_1)

{
  char cVar1;
  float10 fVar2;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_00423700();
  cVar1 = FUN_004a0d00();
  if (cVar1 != '\0') {
    FUN_00402d00();
    return;
  }
  local_c = *(undefined4 *)(param_1 + 0x40);
  local_8 = *(float *)(param_1 + 0x44);
  local_4 = *(undefined4 *)(param_1 + 0x48);
  FUN_00423700();
  fVar2 = (float10)FUN_004a1060();
  local_8 = (float)(fVar2 * (float10)12.0 + (float10)local_8);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x4c))(&local_c);
  return;
}

