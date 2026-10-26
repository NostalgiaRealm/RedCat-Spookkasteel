/*
 * FUN_004f07d0 at 004f07d0
 * undefined FUN_004f07d0(void)
 * Address ranges: 004f07d0-004f0c2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004f07d0(int param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  char local_5f;
  char local_5e;
  undefined1 local_5d;
  int local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  int *piStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  uint uStack_34;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006340d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_5c = param_1;
  FUN_004f1790(*(undefined4 *)(param_7 + 4),*(undefined4 *)(param_7 + 8));
  local_54 = param_3;
  local_4c = param_5;
  uVar10 = 0;
  local_5f = '\n';
  iVar3 = FUN_004f1490(&local_5f,&local_5e);
  if (local_5e == '\0') {
    FUN_00409810(&DAT_006b3f70,&local_5d);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0xae,
                                  local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_40 = *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4);
  local_5e = ' ';
  iVar3 = FUN_004f1490(&local_5e,&local_5f);
  if (local_5f == '\0') {
    FUN_00409810(&DAT_006b3f70,&local_5d);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0xae,
                                  local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piStack_48 = *(int **)(*(int *)(param_1 + 0x18) + iVar3 * 4);
  FUN_005ae390(auStack_3c,&DAT_006b3f70);
  local_4 = 2;
  while( true ) {
    puVar5 = DAT_006b9574;
    if (DAT_006b9574 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar3 = FUN_004f1430(puVar5,uVar10,DAT_006b9578);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_2 + 8);
    }
    uVar6 = FUN_004eed60(auStack_1c,uVar10,iVar3 - uVar10);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar6,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
    uVar11 = 0;
    fStack_58 = 0.0;
    fStack_50 = 0.0;
    if (uStack_34 != 0) {
      do {
        if (iStack_38 == 0) {
          puVar5 = &DAT_0064a3b4;
        }
        else {
          FUN_004c4700();
          puVar5 = (undefined1 *)(iStack_38 + uVar11);
        }
        iVar7 = FUN_004f1490(puVar5,&local_5e);
        if (local_5e == '\0') {
          FUN_00409810(&DAT_006b3f70,&local_5d);
          local_4._0_1_ = 4;
          pcVar4 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,
                                        0xae,local_2c);
          (*pcVar4)();
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_004040a0(1);
        }
        piVar2 = *(int **)(*(int *)(local_5c + 0x18) + iVar7 * 4);
        fVar12 = (float10)(**(code **)(*piVar2 + 0x10))();
        fStack_58 = (float)(fVar12 + (float10)fStack_58 + (float10)*(float *)(local_5c + 0x40));
        fVar12 = (float10)(**(code **)(*piVar2 + 0x18))();
        fStack_44 = (float)fVar12;
        pfVar8 = &fStack_44;
        if ((float)fVar12 <= fStack_50) {
          pfVar8 = &fStack_50;
        }
        fStack_50 = *pfVar8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uStack_34);
    }
    iVar7 = param_7;
    if (param_4 < fStack_58 + local_54) {
      FUN_004f15f0(*(undefined4 *)(param_7 + 8),&local_40);
      local_54 = param_3;
      local_4c = fStack_50 + local_4c + *(float *)(local_5c + 0x44);
    }
    if (param_6 < fStack_50 + local_4c) break;
    FUN_004f0c30(auStack_3c,iVar7);
    uVar10 = iVar3 + 1;
    if ((*(uint *)(param_2 + 8) <= uVar10) ||
       (fVar12 = (float10)(**(code **)(*piStack_48 + 0x10))(),
       (float10)param_4 < fVar12 + (float10)fStack_58 + (float10)local_54)) {
      fVar12 = (float10)fStack_58;
    }
    else {
      FUN_004f15f0(*(undefined4 *)(iVar7 + 8),&piStack_48);
      fVar12 = (float10)(**(code **)(*piStack_48 + 0x10))();
      fVar12 = fVar12 + (float10)fStack_58 + (float10)*(float *)(local_5c + 0x40);
    }
    local_54 = (float)(fVar12 + (float10)local_54);
    if (*(int *)(param_2 + 4) == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)(*(int *)(param_2 + 4) + iVar3);
    }
    if (*pcVar9 == '\n') {
      FUN_0053cff0(*(undefined4 *)(iVar7 + 8),1,&local_40);
      local_54 = param_3;
    }
    if (*(uint *)(param_2 + 8) <= uVar10) {
      if (iStack_38 != 0) {
        cVar1 = *(char *)(iStack_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(iStack_38 + -1);
        }
        else {
          *(char *)(iStack_38 + -1) = cVar1 + -1;
        }
      }
      ExceptionList = pvStack_c;
      return;
    }
  }
  iVar3 = FUN_004eed60(auStack_1c,0,uVar10);
  puVar5 = *(undefined1 **)(iVar3 + 4);
  local_4._0_1_ = 5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar6 = FUN_005ae390(&param_3,s_CAdamTextPrinter__PrintTextToScr_0069c350,puVar5);
  local_4._0_1_ = 6;
  FUN_004c43b0(uVar6);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return;
}

