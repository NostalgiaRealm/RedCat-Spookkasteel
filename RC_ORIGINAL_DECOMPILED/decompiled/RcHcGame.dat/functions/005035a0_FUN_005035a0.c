/*
 * FUN_005035a0 at 005035a0
 * undefined FUN_005035a0(void)
 * Address ranges: 005035a0-005036c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005035a0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_28;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635c80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_0040cc00(param_1 + 0x6c,0,0xffffffff);
  if (local_24 == 0) {
    FUN_0040cc00(param_1 + 0x5c,0,0xffffffff);
  }
  puVar4 = *(undefined1 **)(param_2 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  puVar3 = local_28;
  if (local_28 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_0060a613(param_1);
  uVar2 = FUN_0060b060();
  uVar2 = FUN_005ae390(local_1c,s___s___error___s___s__0069dc70,puVar3,puVar4,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004c43e0(uVar2);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  if (local_28 != (undefined1 *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}

