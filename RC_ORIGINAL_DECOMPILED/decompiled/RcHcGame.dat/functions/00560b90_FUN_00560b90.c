/*
 * FUN_00560b90 at 00560b90
 * undefined FUN_00560b90(void)
 * Address ranges: 00560b90-00560c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00560b90(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fa88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8);
  local_4 = 0;
  while ((*(int *)(param_1 + 0x28) != 0 &&
         (0 < (int)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) & 0xfffffffcU)))) {
    piVar1 = (int *)FUN_004fd0d0();
    if (*piVar1 != 0) {
      piVar1 = (int *)(*piVar1 + 0x14);
      *piVar1 = *piVar1 + 1;
    }
    FUN_00560c30();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

