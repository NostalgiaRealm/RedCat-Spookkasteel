/*
 * FUN_00567850 at 00567850
 * undefined FUN_00567850(void)
 * Address ranges: 00567850-0056798a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00567850(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064028a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f870;
  local_4 = 3;
  cVar2 = FUN_00567f30();
  if (cVar2 != '\0') {
    uVar3 = FUN_00567e90(local_1c);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005aff00(uVar3);
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  iVar1 = param_1[0x52];
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = cVar2 + -1;
    }
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  iVar1 = param_1[0x4e];
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = cVar2 + -1;
    }
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  FUN_005fe5f0(param_1[0x48]);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

