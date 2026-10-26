/*
 * FUN_005af210 at 005af210
 * undefined FUN_005af210(void)
 * Address ranges: 005af210-005af394
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005af210(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646018;
  local_c = ExceptionList;
  puVar6 = &DAT_0064a3b4;
  if ((undefined1 *)param_1[3] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)param_1[3];
  }
  iVar2 = param_1[1];
  ExceptionList = &local_c;
  pcVar3 = _strrchr((char *)*param_1,0x5c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strrchr((char *)*param_1,0x2f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = _strrchr((char *)*param_1,0x3a);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)*param_1;
        goto LAB_005af27b;
      }
    }
  }
  pcVar3 = pcVar3 + 1;
LAB_005af27b:
  iVar4 = FUN_005aed10(local_2c,param_2);
  puVar7 = *(undefined1 **)(iVar4 + 4);
  local_4 = 0;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  iVar4 = FUN_005aee20(local_3c,param_3);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  FUN_005ae390(local_1c,s__s_s_s___d_____s_006a906c,puVar5,puVar7,pcVar3,iVar2,puVar6);
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_005aff00(local_1c);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

