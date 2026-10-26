/*
 * FUN_004fc360 at 004fc360
 * undefined FUN_004fc360(void)
 * Address ranges: 004fc360-004fc3f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004fc360(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006354a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4 = 0;
  while ((*(int *)(param_1 + 0x3c8) != 0 &&
         (0 < (int)(*(int *)(param_1 + 0x3cc) - *(int *)(param_1 + 0x3c8) & 0xfffffffcU)))) {
    piVar1 = (int *)FUN_004fd0d0();
    if (*piVar1 != 0) {
      piVar1 = (int *)(*piVar1 + 0x14);
      *piVar1 = *piVar1 + 1;
    }
    FUN_004fbe90();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

