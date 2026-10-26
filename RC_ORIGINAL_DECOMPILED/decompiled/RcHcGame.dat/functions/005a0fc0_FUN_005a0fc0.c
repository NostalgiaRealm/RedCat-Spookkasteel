/*
 * FUN_005a0fc0 at 005a0fc0
 * undefined FUN_005a0fc0(void)
 * Address ranges: 005a0fc0-005a10ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a0fc0(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_11c [4];
  int local_118;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644e9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005a0830();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x20);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_11c,s_CDaviCriticalSection__SetAllowed_006a78d4,puVar3,param_2);
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (local_118 != 0) {
      cVar1 = *(char *)(local_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_118 + -1));
      }
      else {
        *(char *)(local_118 + -1) = cVar1 + -1;
      }
    }
  }
  puVar6 = local_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,param_2);
  FUN_005acdb0(local_10c);
  ExceptionList = local_c;
  return;
}

