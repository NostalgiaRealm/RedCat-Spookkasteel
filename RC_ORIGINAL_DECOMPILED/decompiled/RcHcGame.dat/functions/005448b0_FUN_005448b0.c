/*
 * FUN_005448b0 at 005448b0
 * undefined FUN_005448b0(void)
 * Address ranges: 005448b0-005449c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_005448b0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char local_19;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063cdb0;
  local_c = ExceptionList;
  local_4 = 0;
  local_19 = '\0';
  local_18 = 0;
  ExceptionList = &local_c;
  while( true ) {
    cVar1 = local_19;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar6 <= local_18) break;
    if (param_3 == (undefined4 *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)param_4 - (int)param_3 >> 2;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    puVar3 = operator_new(iVar6 * 4);
    for (puVar5 = param_3; puVar5 != param_4; puVar5 = puVar5 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar5;
      }
      puVar3 = puVar3 + 1;
    }
    local_4 = local_4 & 0xffffff00;
    uVar4 = FUN_005494c0(local_18);
    cVar2 = FUN_00544130(uVar4);
    if ((cVar2 != '\0') || (local_19 = '\0', cVar1 != '\0')) {
      local_19 = '\x01';
    }
    local_18 = local_18 + 1;
  }
  FUN_005fe5f0();
  ExceptionList = local_c;
  return local_19;
}

