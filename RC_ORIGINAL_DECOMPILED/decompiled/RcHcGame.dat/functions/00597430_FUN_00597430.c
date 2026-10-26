/*
 * FUN_00597430 at 00597430
 * undefined FUN_00597430(void)
 * Address ranges: 00597430-0059747c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650048 slot 1 for .?AVCAdamGMS_MoveCloser@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650048 slot 1 for
   .?AVCAdamGMS_MoveCloser@@. Original bytes unchanged; names and types still inferred. */

undefined4 __fastcall FUN_00597430(int param_1)

{
  float10 fVar1;
  undefined1 local_c [12];
  
  FUN_00595cd0(local_c);
  FUN_00595470();
  FUN_0059be50();
  fVar1 = (float10)FUN_005b30a0();
  if (fVar1 < (float10)*(float *)(param_1 + 0x18)) {
    return 1;
  }
  return 0;
}

