/*
 * FUN_005eded0 at 005eded0
 * undefined FUN_005eded0(void)
 * Address ranges: 005eded0-005ee257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005eded0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  char *pcStack_64;
  int *local_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006473c0;
  pvStack_c = ExceptionList;
  pcStack_64 = (char *)0x5edef8;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0044e4c0();
  pcStack_64 = (char *)0x5edf05;
  iVar3 = FUN_00509a00();
  if (iVar3 + 1 != iVar2) {
    if (*(int *)(param_2 + 4) == 0) {
      pcStack_64 = (char *)0x0;
    }
    else {
      pcStack_64 = (char *)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18);
    }
    pcStack_68 = s_Args_size___d_006b1348;
    pcStack_6c = (char *)0x5edf3c;
    FUN_005e4140();
    if (*(int *)(param_1 + 0x30) == 0) {
      pcStack_64 = (char *)0x0;
    }
    else {
      pcStack_64 = (char *)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2);
    }
    pcStack_68 = s_Formal_args_size___d_006b1330;
    pcStack_6c = (char *)0x5edf5d;
    FUN_005e4140();
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 != *(int *)(param_2 + 8)) {
      do {
        pcStack_64 = *(char **)(iVar2 + 8);
        pcStack_68 = local_4c;
        pcStack_6c = (char *)0x5edf78;
        iVar3 = FUN_005eeb80();
        pcStack_64 = *(char **)(iVar3 + 4);
        uStack_4 = 0;
        if (pcStack_64 == (undefined1 *)0x0) {
          pcStack_64 = &DAT_0064a3b4;
        }
        pcStack_68 = (char *)((iVar2 - *(int *)(param_2 + 4)) / 0x18);
        pcStack_6c = s_Arg__d___s_006b1324;
        pcStack_70 = (char *)0x5edfaf;
        FUN_005e4140();
        uStack_4 = 0xffffffff;
        pcStack_64 = (char *)0x1;
        pcStack_68 = (char *)0x5edfc5;
        FUN_004040a0();
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != *(int *)(param_2 + 8));
    }
    piVar8 = *(int **)(param_1 + 0x30);
    if (piVar8 != *(int **)(param_1 + 0x34)) {
      do {
        pcStack_68 = local_4c;
        pcStack_64 = *(char **)(*piVar8 + 0x20);
        pcStack_6c = (char *)0x5edfe9;
        iVar2 = FUN_005eeb80();
        uStack_4 = 1;
        pcStack_64 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
          pcStack_64 = *(undefined1 **)(iVar2 + 4);
        }
        pcStack_68 = (char *)((int)piVar8 - *(int *)(param_1 + 0x30) >> 2);
        pcStack_6c = s_Formal_arg__d___s_006b1310;
        pcStack_70 = (char *)0x5ee018;
        FUN_005e4140();
        uStack_4 = 0xffffffff;
        pcStack_64 = (char *)0x1;
        pcStack_68 = (char *)0x5ee02e;
        FUN_004040a0();
        piVar8 = piVar8 + 1;
      } while (piVar8 != *(int **)(param_1 + 0x34));
    }
    pcStack_64 = (char *)0x5ee03f;
    uVar4 = FUN_005ee260();
    FUN_004caa20(&pcStack_70,s_Davi_script__incorrect_number_of_006b12d4,uVar4);
    FUN_005e4170();
    local_4c[0] = (undefined1)param_2;
    pcStack_64 = (char *)0x0;
    pcStack_68 = (char *)0x5ee071;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar9 = s_Incorrect_number_of_arguments_to_006b12a4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcStack_64 = (char *)(~uVar6 - 1);
    pcStack_68 = s_Incorrect_number_of_arguments_to_006b12a4;
    pcStack_6c = (char *)0x5ee08f;
    FUN_004040f0();
    pcStack_68 = (char *)(param_1 + 0xc);
    pcStack_64 = (char *)(*(int *)(param_1 + 8) + 0xc);
    pcStack_6c = local_4c;
    pcStack_70 = (char *)0xbbc;
    uStack_4 = 2;
    FUN_005ea160();
    uStack_4 = 0xffffffff;
    pcStack_64 = (char *)0x1;
    pcStack_68 = (char *)0x5ee0c7;
    FUN_004040a0();
  }
  local_50 = *(int **)(param_1 + 0x30);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_2 + 8)) {
    do {
      pcStack_64 = *(char **)(*local_50 + 0x20);
      if (pcStack_64 != (char *)*(int *)(iVar2 + 8)) {
        iVar3 = *(int *)(param_1 + 8);
        pcStack_68 = local_1c;
        pcStack_6c = (char *)0x5ee100;
        iVar5 = FUN_005eeb80();
        uStack_4 = 3;
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar5 + 4) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar5 + 4);
        }
        pcStack_64 = *(char **)(iVar2 + 8);
        pcStack_68 = auStack_2c;
        pcStack_6c = (char *)0x5ee127;
        iVar5 = FUN_005eeb80();
        pcStack_68 = *(char **)(iVar5 + 4);
        uStack_4._0_1_ = 4;
        if (pcStack_68 == (undefined1 *)0x0) {
          pcStack_68 = &DAT_0064a3b4;
        }
        pcStack_6c = (char *)((iVar2 - *(int *)(param_2 + 4)) / 0x18 + 1);
        pcStack_70 = s_Bad_call_to_eventhandler_arg__d__006b1264;
        pcStack_64 = puVar7;
        uVar4 = FUN_005e7110(auStack_3c);
        uStack_4 = CONCAT31(uStack_4._1_3_,5);
        FUN_005ea160(0xbbd,uVar4,param_1 + 0xc,iVar3 + 0xc);
        if (iStack_38 != 0) {
          pcStack_64 = (char *)(iStack_38 + -1);
          cVar1 = *(char *)(iStack_38 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x5ee1ad;
            FUN_005fe5f0();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        if (iStack_28 != 0) {
          pcStack_64 = (char *)(iStack_28 + -1);
          cVar1 = *(char *)(iStack_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x5ee1de;
            FUN_005fe5f0();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_4 = 0xffffffff;
        if (iStack_18 != 0) {
          pcStack_64 = (char *)(iStack_18 + -1);
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x5ee217;
            FUN_005fe5f0();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      iVar2 = iVar2 + 0x18;
      local_50 = local_50 + 1;
    } while (iVar2 != *(int *)(param_2 + 8));
  }
  ExceptionList = pvStack_c;
  return;
}

