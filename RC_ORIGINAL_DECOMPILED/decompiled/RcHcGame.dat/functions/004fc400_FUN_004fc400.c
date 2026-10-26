/*
 * FUN_004fc400 at 004fc400
 * undefined FUN_004fc400(void)
 * Address ranges: 004fc400-004fc49a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fc400(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006354c8;
  local_c = ExceptionList;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_005ae390(local_1c,s_SubLevel___s___error___s_0069d62c,puVar4,puVar2);
  local_4 = 0;
  FUN_004c43e0(uVar3);
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

