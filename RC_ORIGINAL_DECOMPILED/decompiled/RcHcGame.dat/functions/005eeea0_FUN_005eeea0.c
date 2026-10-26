/*
 * FUN_005eeea0 at 005eeea0
 * undefined FUN_005eeea0(void)
 * Address ranges: 005eeea0-005eef2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005eeea0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647568;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005eed10(local_1c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  local_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005e5d20(param_1,puVar3);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}

