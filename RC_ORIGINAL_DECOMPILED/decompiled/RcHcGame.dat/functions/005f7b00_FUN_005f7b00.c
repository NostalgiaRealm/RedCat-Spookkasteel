/*
 * FUN_005f7b00 at 005f7b00
 * undefined FUN_005f7b00(void)
 * Address ranges: 005f7b00-005f7ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x650e14; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x650e14; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_005f7b00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648648;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 8) == -2) {
    ExceptionList = &pvStack_c;
    uVar2 = FUN_005f7960(local_2c,*(undefined4 *)(param_1 + 0xc));
    local_4 = 0;
    uVar2 = FUN_004caa20(local_3c,&DAT_006b1544,uVar2);
    local_4._0_1_ = 1;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  else {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_005f7960(local_2c,*(undefined4 *)(param_1 + 0xc));
    puVar4 = *(undefined1 **)(iVar3 + 4);
    local_4 = 2;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005e7110(local_3c,&DAT_006b153c,puVar4,*(undefined4 *)(param_1 + 8));
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0040cc00(uVar2,0,0xffffffff);
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(local_1c);
  puStack_8 = (undefined1 *)0x4;
  FUN_0040cc00(uVar2,0,0xffffffff);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return;
    }
    FUN_005fe5f0((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return;
}

