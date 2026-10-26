/*
 * FUN_0051abb0 at 0051abb0
 * undefined FUN_0051abb0(void)
 * Address ranges: 0051abb0-0051ad92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0051abb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638760;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069f3ec,0xcf);
  local_4 = 0;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(char *)(*(int *)(iVar2 + 0x58) + 0x59) == '\0') {
    if (param_1[9] != 3) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_4 = CONCAT31(local_4._1_3_,3);
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      FUN_004bef70(0,local_1c);
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
  }
  else {
    iVar3 = FUN_005168f0();
    iVar2 = *(int *)(iVar3 + 100);
    if (iVar2 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar2;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined1 *)param_1[6];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_1c,s_CAdamGameState__Handle_____befor_0069f470,puVar4);
      local_4._0_1_ = 1;
      FUN_005aff00(uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    (**(code **)(*param_1 + 4))((char)param_1[10]);
    *(undefined1 *)(param_1 + 10) = 0;
    iVar3 = FUN_005168f0();
    iVar2 = *(int *)(iVar3 + 100);
    if (iVar2 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar2;
    }
    if (iVar2 != 0) {
      puVar4 = (undefined1 *)param_1[6];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_1c,s_CAdamGameState__Handle_____after_0069f440,puVar4);
      local_4 = CONCAT31(local_4._1_3_,2);
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
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

