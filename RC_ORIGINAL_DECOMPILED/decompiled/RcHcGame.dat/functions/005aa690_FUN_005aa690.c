/*
 * FUN_005aa690 at 005aa690
 * undefined FUN_005aa690(void)
 * Address ranges: 005aa690-005aa752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005aa690(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
    uVar5 = FUN_005ae390(local_1c,s_CDaviMainWindow__ClearMouseMovem_006a8b58,
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    local_4 = 0;
    FUN_005aff00(uVar5);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  SetCursorPos(*(int *)(param_1 + 100),*(int *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  ExceptionList = local_c;
  return;
}

