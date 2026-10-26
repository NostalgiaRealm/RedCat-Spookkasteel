/*
 * FUN_0049f220 at 0049f220
 * undefined FUN_0049f220(void)
 * Address ranges: 0049f220-0049f374
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049f220(int *param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062cca2;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_005a3320();
  local_4._0_1_ = 2;
  pvVar2 = operator_new(0x30);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0049ef30(param_2);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    }
  }
  iVar6 = 0;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    iVar6 = iVar3;
  }
  local_4._0_1_ = 2;
  if ((iVar3 != 0) &&
     (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  if (iVar6 != 0) {
    uVar4 = FUN_005a3150(local_44,param_2);
    local_4._0_1_ = 5;
    cVar1 = FUN_005a3400(uVar4);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar6 + 0x14) + -1;
      *(int *)(iVar6 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      iVar6 = 0;
    }
    else {
      FUN_005a36c0();
      uVar4 = FUN_005b3fe0();
      *(undefined4 *)(iVar6 + 0x1c) = uVar4;
    }
  }
  *param_1 = iVar6;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  }
  local_4._0_1_ = 1;
  FUN_005a3370();
  local_4 = (uint)local_4._1_3_ << 8;
  if ((iVar6 != 0) &&
     (iVar3 = *(int *)(iVar6 + 0x14) + -1, *(int *)(iVar6 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

