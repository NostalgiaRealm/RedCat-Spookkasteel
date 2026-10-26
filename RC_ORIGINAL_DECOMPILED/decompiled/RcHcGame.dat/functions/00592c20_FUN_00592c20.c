/*
 * FUN_00592c20 at 00592c20
 * undefined FUN_00592c20(void)
 * Address ranges: 00592c20-00592ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00592c20(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643918;
  local_c = ExceptionList;
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_005ae390(local_1c,s_CONSOLE___s_006a66c4,puVar2);
  local_4 = 0;
  FUN_005aff00(uVar3);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

