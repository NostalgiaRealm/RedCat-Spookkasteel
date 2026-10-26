/*
 * FUN_0048aa60 at 0048aa60
 * undefined FUN_0048aa60(void)
 * Address ranges: 0048aa60-0048acd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 13 for .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 13 for
   .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0048aa60(int param_1)

{
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_00449760(param_1 + 0x110);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_00529a70();
    FUN_00449760(param_1 + 0x134);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    if (*(int *)(param_1 + 0x7c) == 1) {
      __ftol();
      __ftol();
    }
    FUN_00449760(param_1 + 0x158);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    if (*(int *)(param_1 + 0x7c) == 0) {
      __ftol();
      __ftol();
    }
    FUN_00449760(param_1 + 0x17c);
    FUN_005614e0();
  }
  return;
}

