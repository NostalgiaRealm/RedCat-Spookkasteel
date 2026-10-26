/*
 * FUN_004793f0 at 004793f0
 * undefined FUN_004793f0(void)
 * Address ranges: 004793f0-00479505
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004793f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00628af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064e294;
  iVar2 = 5;
  piVar3 = param_1 + 0xde;
  local_4 = 5;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4._0_1_ = 4;
  FUN_0060af6c(param_1 + 0x12d6,0x18,6,FUN_0046ace0);
  iVar2 = param_1[0x42];
  local_4._0_1_ = 3;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x42] = 0;
  }
  iVar2 = param_1[0x41];
  local_4._0_1_ = 2;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x41] = 0;
  }
  iVar2 = param_1[0x40];
  local_4._0_1_ = 1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x40] = 0;
  }
  iVar2 = param_1[0x3f];
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x3f] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = pvStack_c;
  return;
}

