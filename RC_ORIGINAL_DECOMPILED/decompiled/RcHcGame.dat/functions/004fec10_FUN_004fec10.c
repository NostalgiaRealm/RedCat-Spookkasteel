/*
 * FUN_004fec10 at 004fec10
 * undefined FUN_004fec10(void)
 * Address ranges: 004fec10-004fecfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004fec10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635914;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f4c0;
  local_4 = 7;
  FUN_005a3ce0();
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 5;
  FUN_005acca0();
  local_4._0_1_ = 4;
  FUN_005a3ce0();
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005acca0();
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

