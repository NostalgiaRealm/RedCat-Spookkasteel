/*
 * FUN_004f6200 at 004f6200
 * undefined FUN_004f6200(void)
 * Address ranges: 004f6200-004f628b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f6200(int param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  cVar1 = FUN_0055cec0();
  if (cVar1 != '\0') {
    if (param_1 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    FUN_0055d330();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

