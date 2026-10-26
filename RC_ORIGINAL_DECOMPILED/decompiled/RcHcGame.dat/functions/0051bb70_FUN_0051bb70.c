/*
 * FUN_0051bb70 at 0051bb70
 * undefined FUN_0051bb70(void)
 * Address ranges: 0051bb70-0051bc1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 13 for .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f5cc slot 13 for
   .?AVCAdamGameState_GS_LOADING@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0051bb70(int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006388e8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xa0) != 0) {
    ExceptionList = &local_c;
    *(float *)(param_1 + 0x90) =
         (float)param_2 * 0.01 * *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x8c);
    FUN_00442e30();
    FUN_00449760(param_1 + 0xa0);
    local_4 = 0xffffffff;
    FUN_00454200();
    FUN_005614e0();
  }
  ExceptionList = local_c;
  return;
}

