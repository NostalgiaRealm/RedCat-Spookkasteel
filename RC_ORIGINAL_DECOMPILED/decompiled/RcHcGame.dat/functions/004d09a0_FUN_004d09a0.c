/*
 * FUN_004d09a0 at 004d09a0
 * undefined FUN_004d09a0(void)
 * Address ranges: 004d09a0-004d0a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 21 for .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 21 for
   .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004d09a0(int param_1)

{
  char cVar1;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631308;
  local_c = ExceptionList;
  if ((*(float *)(param_1 + 0x140) <= *(float *)(param_1 + 0x144)) &&
     (*(float *)(param_1 + 0x144) <= *(float *)(param_1 + 0x13c))) {
    ExceptionList = &local_c;
    FUN_004d0770(*(float *)(param_1 + 0x144));
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_005ae390(local_1c,s_Invalid_InitialPosition__f_00699218,(double)*(float *)(param_1 + 0x144));
  local_4 = 0;
  FUN_005035a0();
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_004d0770();
  ExceptionList = local_c;
  return;
}

