/*
 * FUN_004c4440 at 004c4440
 * undefined FUN_004c4440(void)
 * Address ranges: 004c4440-004c452c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004c4440(int param_1,undefined1 param_2)

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
  puStack_8 = &LAB_00630438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00517670();
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
    uVar5 = FUN_005ae390(local_1c,s_CAdamApplication__SetQuit___d_____00698740,param_2,
                         *(undefined1 *)(param_1 + 0x3e));
    local_4 = 0;
    FUN_005aefb0(uVar5);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        *(undefined1 *)(param_1 + 0x3e) = param_2;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    *(undefined1 *)(param_1 + 0x3e) = param_2;
    ExceptionList = local_c;
    return;
  }
  *(undefined1 *)(param_1 + 0x3e) = param_2;
  ExceptionList = local_c;
  return;
}

