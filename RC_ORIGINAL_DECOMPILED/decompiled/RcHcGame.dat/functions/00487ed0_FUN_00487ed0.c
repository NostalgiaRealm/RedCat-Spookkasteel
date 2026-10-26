/*
 * FUN_00487ed0 at 00487ed0
 * undefined FUN_00487ed0(void)
 * Address ranges: 00487ed0-004880c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e448 slot 13 for .?AVCRcGStateLOADING@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e448 slot 13 for
   .?AVCRcGStateLOADING@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00487ed0(int param_1)

{
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_00449760(param_1 + 0x124);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_00529a70();
    FUN_00449760(param_1 + 0x148);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_00449760(param_1 + 0x16c);
    FUN_005614e0();
  }
  if (*(int *)(param_1 + 400) != 0) {
    FUN_00449760(param_1 + 400);
    FUN_005614e0();
  }
  return;
}

