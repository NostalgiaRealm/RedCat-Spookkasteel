/*
 * FUN_005f8610 at 005f8610
 * undefined FUN_005f8610(void)
 * Address ranges: 005f8610-005f88c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f8610(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBX;
  char *pcVar7;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [20];
  int iStack_24;
  undefined1 local_1c [4];
  void *pvStack_18;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648749;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar7 = s_BINOP_006b1588;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_004040f0(s_BINOP_006b1588,~uVar6 - 1);
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 4))(local_1c);
  puStack_8 = (undefined1 *)0x0;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = (char *)&DAT_00693460;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00693460,~uVar6 - 1);
  puStack_8._0_1_ = 1;
  uVar3 = FUN_005f81a0(&uStack_a0,*(undefined4 *)(param_1 + 0x10));
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))(auStack_40);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  uVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 4))(auStack_64);
  uStack_10 = 4;
  uVar5 = FUN_0040cad0(auStack_88,uVar5,&DAT_006a678c);
  uStack_10 = 5;
  uVar4 = FUN_0044e370(auStack_58,uVar5,uVar4);
  uStack_10 = 6;
  uVar3 = FUN_0044e370(auStack_98,uVar4,uVar3);
  uStack_10 = 7;
  uVar3 = FUN_0044e370(auStack_78,uVar3,&stack0xffffff48);
  uStack_10 = 8;
  uVar2 = FUN_0044e370(auStack_38,uVar3,uVar2);
  uStack_10 = 9;
  FUN_0040cc00(uVar2,0,0xffffffff);
  uStack_10 = 8;
  FUN_004040a0(1);
  uStack_10 = 7;
  FUN_004040a0(1);
  uStack_10 = 6;
  FUN_004040a0(1);
  uStack_10 = 5;
  FUN_004040a0(1);
  uStack_10 = 4;
  FUN_004040a0(1);
  uStack_10 = 3;
  FUN_004040a0(1);
  uStack_10 = 2;
  FUN_004040a0(1);
  if (iStack_a4 != 0) {
    cVar1 = *(char *)(iStack_a4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_a4 + -1));
    }
    else {
      *(char *)(iStack_a4 + -1) = cVar1 + -1;
    }
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(unaff_EBX + -1));
    }
    else {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
    }
  }
  if (iStack_24 != 0) {
    cVar1 = *(char *)(iStack_24 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_24 + -1) = cVar1 + -1;
      ExceptionList = pvStack_18;
      return;
    }
    FUN_005fe5f0((char *)(iStack_24 + -1));
  }
  ExceptionList = pvStack_18;
  return;
}

