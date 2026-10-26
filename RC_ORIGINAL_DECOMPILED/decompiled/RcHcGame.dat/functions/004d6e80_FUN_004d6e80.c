/*
 * FUN_004d6e80 at 004d6e80
 * undefined FUN_004d6e80(void)
 * Address ranges: 004d6e80-004d71ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_004d6e80(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 local_51;
  void *local_50;
  undefined1 local_4c [4];
  int local_48 [2];
  byte bStack_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631b7b;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x1b0);
  bVar1 = false;
  ExceptionList = &local_c;
  if (iVar5 != 0) {
    ExceptionList = &local_c;
    FUN_00514430();
    FUN_005fe5f0(iVar5);
  }
  pvVar3 = operator_new(0x10);
  local_4 = 0;
  local_50 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    FUN_0044e4a0(&local_51);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00514e80(0);
  }
  *(void **)(param_1 + 0x1b0) = pvVar3;
  local_4 = 0xffffffff;
  cVar2 = FUN_00554b20(param_2,2,0xffffffff,local_4c,&LAB_004d71b0,pvVar3);
  do {
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return !bVar1;
    }
    if (local_48[0] == 0) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_contents_Model____0_0069986c,
                                    s_D__Work_RCHorror_AdamSource_Adam_00699728,0x233,local_3c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_004f15f0(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 8),local_48);
    iVar5 = FUN_004d0570(local_48[0]);
    if (iVar5 == 0) {
      iVar5 = FUN_004337e0();
      if (iVar5 != 0) {
        FUN_005afe30(s_Player_is_inside_something_that_h_0069983c);
      }
    }
    else {
      iVar6 = FUN_004337e0();
      if (iVar6 != 0) {
        puVar9 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar5 + 0x60) != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)(iVar5 + 0x60);
        }
        puVar7 = *(undefined1 **)(param_1 + 0x60);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        uVar8 = FUN_005ae390(auStack_1c,s__s_collides_with_model__s_00699820,puVar7,puVar9);
        local_4 = 3;
        FUN_005aff00(uVar8);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(iVar5 + 100) == 0) {
        if (DAT_006b93c4 == -0x80000000) {
          puVar9 = DAT_006b9378;
          if (DAT_006b9378 == (undefined1 *)0x0) {
            puVar9 = &DAT_0064a3b4;
          }
          DAT_006b93c4 = FUN_0060af10(puVar9);
        }
        if (DAT_006b93c4 != 0) {
          FUN_005afe30(s_Player_is_inside_model_without_n_006997d8);
        }
      }
      else {
        if (DAT_006b93c4 == -0x80000000) {
          puVar9 = DAT_006b9378;
          if (DAT_006b9378 == (undefined1 *)0x0) {
            puVar9 = &DAT_0064a3b4;
          }
          DAT_006b93c4 = FUN_0060af10(puVar9);
        }
        if (DAT_006b93c4 != 0) {
          puVar9 = *(undefined1 **)(iVar5 + 0x60);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_0064a3b4;
          }
          uVar8 = FUN_005ae390(auStack_2c,s_Player_is_inside_model_with_name_006997fc,puVar9);
          local_4 = 4;
          FUN_005aff00(uVar8);
          local_4 = 0xffffffff;
          if (iStack_28 != 0) {
            cVar2 = *(char *)(iStack_28 + -1);
            if ((cVar2 != '\0') && (cVar2 != -1)) {
              *(char *)(iStack_28 + -1) = cVar2 + -1;
              iStack_28 = 0;
              uStack_24 = 0;
              uStack_20 = 0;
              goto LAB_004d7113;
            }
            FUN_005fe5f0((char *)(iStack_28 + -1));
          }
          iStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
        }
      }
LAB_004d7113:
      FUN_00503180(param_1);
    }
    if ((bStack_40 & 1) != 0) {
      bVar1 = true;
      if (DAT_006b93c4 == -0x80000000) {
        puVar9 = DAT_006b9378;
        if (DAT_006b9378 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        DAT_006b93c4 = FUN_0060af10(puVar9);
      }
      if (DAT_006b93c4 != 0) {
        FUN_005afe30(s_Player_is_stuck_in_a_solid_model_006997b4);
      }
    }
    cVar2 = FUN_00554b20(param_2,2,0xffffffff,local_4c,&LAB_004d71b0,
                         *(undefined4 *)(param_1 + 0x1b0));
  } while( true );
}

