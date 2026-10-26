/*
 * FUN_0060a613 at 0060a613
 * undefined FUN_0060a613(void)
 * Address ranges: 0060a613-0060a6a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060a613(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00651b58;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffac;
  if (param_1 == (int *)0x0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffffac;
    FUN_0060a6d9("Attempted a typeid of NULL pointer!");
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_0068a698);
  }
  local_8 = 0;
  iVar1 = *(int *)(*param_1 + -4);
  ExceptionList = &local_14;
  local_20 = iVar1;
  BVar2 = IsBadReadPtr(*(void **)(iVar1 + 0xc),8);
  if (BVar2 == 0) {
    ExceptionList = local_14;
    return *(undefined4 *)(iVar1 + 0xc);
  }
  FUN_0060a5bc("Bad read pointer - no RTTI data!");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_38,&DAT_0068a678);
}

