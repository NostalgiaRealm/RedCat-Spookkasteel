/*
 * FUN_005e4170 at 005e4170
 * undefined FUN_005e4170(void)
 * Address ranges: 005e4170-005e4242
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e4170(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646658;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_0070fae8 != (int *)0x0) {
    puVar3 = &DAT_0064a3b4;
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = param_2;
    }
    ExceptionList = &local_c;
    FUN_005e5d20(DAT_0070fae8,puVar3);
    piVar2 = DAT_0070fae8;
    uVar5 = 0;
    if ((*(byte *)(*(int *)(*DAT_0070fae8 + 4) + 4 + (int)DAT_0070fae8) & 6) == 0) {
      iVar4 = (**(code **)(**(int **)((int)DAT_0070fae8 + *(int *)(*DAT_0070fae8 + 4) + 0x28) + 0x2c
                          ))();
      if (iVar4 == -1) {
        uVar5 = 4;
      }
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
      if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_005fe7e4(uVar5,0);
    }
  }
  if (param_2 != (undefined1 *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_2[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(param_2 + -1);
  }
  ExceptionList = local_c;
  return;
}

