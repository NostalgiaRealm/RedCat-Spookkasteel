/*
 * FUN_005aa270 at 005aa270
 * undefined FUN_005aa270(void)
 * Address ranges: 005aa270-005aa355
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005aa270(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006459f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined4 *)(param_1 + 0x68) = param_3;
  iVar2 = FUN_00517af0();
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
    uVar5 = FUN_005ae390(local_1c,s_CDaviMainWindow__SetMouseCenter__006a8a54,
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  SetCursorPos(*(int *)(param_1 + 100),*(int *)(param_1 + 0x68));
  *(undefined1 *)(param_1 + 0x74) = 1;
  FUN_005aa450(1);
  ExceptionList = local_c;
  return;
}

