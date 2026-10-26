/*
 * FUN_00594900 at 00594900
 * undefined FUN_00594900(void)
 * Address ranges: 00594900-00594a79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00594900(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643b28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a6948,0x70);
  local_4 = 0;
  cVar1 = FUN_00402d10();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[8] + 0xa9) != '\0') {
      puVar3 = *(undefined1 **)(param_1[8] + 0x60);
      puVar5 = &DAT_0064a3b4;
      if (puVar3 != (undefined1 *)0x0) {
        puVar5 = puVar3;
      }
      iVar2 = (**(code **)(*param_1 + 0xc))(local_1c);
      puVar3 = *(undefined1 **)(iVar2 + 4);
      local_4._0_1_ = 1;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      FUN_005afe30(s_initializing__s_state_of_CursorA_006a69b0,puVar3,puVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
    }
    FUN_005948a0();
  }
  if (*(char *)(param_1[8] + 0xa9) != '\0') {
    puVar3 = *(undefined1 **)(param_1[8] + 0x60);
    puVar5 = &DAT_0064a3b4;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    iVar2 = (**(code **)(*param_1 + 0xc))(local_1c);
    local_4._0_1_ = 2;
    puVar3 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(iVar2 + 4);
    }
    uVar4 = FUN_005530d0();
    FUN_005afe30(s_framecall_for__s_state_of_Cursor_006a6974,puVar3,puVar5,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  cVar1 = FUN_00594890();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 8))(param_2,param_3);
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

