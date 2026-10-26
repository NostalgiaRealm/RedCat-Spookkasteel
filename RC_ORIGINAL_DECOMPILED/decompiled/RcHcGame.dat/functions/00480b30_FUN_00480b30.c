/*
 * FUN_00480b30 at 00480b30
 * undefined FUN_00480b30(void)
 * Address ranges: 00480b30-00480c71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00480b30(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006292f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064e374;
  local_4 = 6;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2e])(1);
    param_1[0x2e] = 0;
  }
  iVar2 = param_1[0x2c];
  local_4._0_1_ = 5;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x2c] = 0;
  }
  iVar2 = param_1[0x2b];
  local_4._0_1_ = 4;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x2b] = 0;
  }
  iVar2 = param_1[0x13];
  local_4._0_1_ = 3;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x13] = 0;
  }
  iVar2 = param_1[0x12];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x12] = 0;
  }
  iVar2 = param_1[0xf];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

