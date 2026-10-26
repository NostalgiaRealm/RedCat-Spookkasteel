/*
 * FUN_00555940 at 00555940
 * undefined FUN_00555940(void)
 * Address ranges: 00555940-00555a19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00555940(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e692;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f828;
  local_4 = 4;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a2194,0x2a);
  local_4._0_1_ = 5;
  FUN_00556530();
  local_4._0_1_ = 4;
  FUN_005ae770();
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005acca0();
  iVar2 = param_1[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

