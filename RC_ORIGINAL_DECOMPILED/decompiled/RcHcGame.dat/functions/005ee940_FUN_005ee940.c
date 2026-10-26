/*
 * FUN_005ee940 at 005ee940
 * undefined FUN_005ee940(void)
 * Address ranges: 005ee940-005ee9fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ee940(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064751e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650af8;
  local_4 = 0;
  FUN_005ed250();
  *param_1 = &PTR_FUN_00650b40;
  local_4 = 3;
  FUN_005f0dd0();
  local_4._0_1_ = 2;
  FUN_005ed250();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005ed250();
  *param_1 = &PTR_FUN_00650b8c;
  local_4 = 4;
  FUN_005ed250();
  *param_1 = &PTR_FUN_00650a74;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return;
}

