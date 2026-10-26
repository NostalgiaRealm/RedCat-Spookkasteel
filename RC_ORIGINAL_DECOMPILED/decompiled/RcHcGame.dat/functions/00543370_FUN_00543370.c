/*
 * FUN_00543370 at 00543370
 * undefined FUN_00543370(void)
 * Address ranges: 00543370-0054358c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005433ca) */
/* WARNING: Removing unreachable block (ram,0x005433dc) */
/* WARNING: Removing unreachable block (ram,0x005433fa) */
/* WARNING: Removing unreachable block (ram,0x005433fc) */
/* WARNING: Removing unreachable block (ram,0x0054340f) */
/* WARNING: Removing unreachable block (ram,0x0054341f) */
/* WARNING: Removing unreachable block (ram,0x00543421) */
/* WARNING: Removing unreachable block (ram,0x00543427) */
/* WARNING: Removing unreachable block (ram,0x00543429) */
/* WARNING: Removing unreachable block (ram,0x00543432) */

void __thiscall FUN_00543370(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_28;
  int iStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063cb78;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  FUN_00514e80();
  local_4._0_1_ = 2;
  FUN_004040a0();
  FUN_0040cc00();
  FUN_00543870();
  local_4._0_1_ = 4;
  iVar4 = 0;
  while( true ) {
    if (iStack_28 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iStack_24 - iStack_28 >> 4;
    }
    if (iVar2 <= iVar4) break;
    uVar3 = FUN_00548f50();
    FUN_00548a70(uVar3);
    FUN_005431e0(param_1,param_2);
    iVar4 = iVar4 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  for (; iStack_28 != iStack_24; iStack_28 = iStack_28 + 0x10) {
    FUN_005497f0();
  }
  FUN_005fe5f0();
  FUN_005fe5f0();
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(param_4 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

