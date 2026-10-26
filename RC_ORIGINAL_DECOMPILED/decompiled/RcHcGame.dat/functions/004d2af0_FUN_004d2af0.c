/*
 * FUN_004d2af0 at 004d2af0
 * undefined FUN_004d2af0(void)
 * Address ranges: 004d2af0-004d30e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004d2b78) */
/* WARNING: Removing unreachable block (ram,0x004d2b95) */
/* WARNING: Removing unreachable block (ram,0x004d2b97) */
/* WARNING: Removing unreachable block (ram,0x004d2e26) */
/* WARNING: Removing unreachable block (ram,0x004d2e43) */
/* WARNING: Removing unreachable block (ram,0x004d2e45) */

uint __thiscall FUN_004d2af0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar10;
  undefined2 extraout_var_00;
  float fVar8;
  undefined3 uVar9;
  undefined3 extraout_var;
  float10 fVar11;
  float local_48;
  undefined1 local_44 [4];
  uint local_40;
  undefined1 local_34 [4];
  int iStack_30;
  undefined1 auStack_24 [4];
  int iStack_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00631600;
  local_14 = ExceptionList;
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  ExceptionList = &local_14;
  iVar4 = __strcmpi(pcVar3,s_MoveTo_006995a0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_4 + 4);
    if (((iVar4 != 0) && ((*(int *)(param_4 + 8) - iVar4) / 0x18 == 1)) &&
       (*(int *)(iVar4 + 8) == 1)) {
      local_48 = (float)*(double *)(iVar4 + 0x10);
      if (local_48 < *(float *)(param_1 + 0x140)) {
        FUN_005ae390(local_44,s_MoveTo___f___value_out_of_range___00699570,(double)local_48,
                     (double)*(float *)(param_1 + 0x140));
        local_c = 3;
        FUN_005035a0();
        local_c = 0xffffffff;
        FUN_004040a0();
        local_48 = *(float *)(param_1 + 0x140);
      }
      if (*(float *)(param_1 + 0x13c) < local_48) {
        FUN_005ae390(local_44,s_MoveTo___f___value_out_of_range___00699540,(double)local_48,
                     (double)*(float *)(param_1 + 0x13c));
        local_c = 4;
        FUN_005035a0();
        local_c = 0xffffffff;
        FUN_004040a0();
        local_48 = *(float *)(param_1 + 0x13c);
      }
      if (*(char *)(param_1 + 0xa9) != '\0') {
        puVar5 = *(undefined1 **)(param_1 + 0x60);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(local_44,s_ModelController__s_receives_comm_0069950c,puVar5,
                             (double)local_48);
        local_c = 5;
        FUN_005aff00(uVar6);
        local_c = 0xffffffff;
        FUN_004040a0();
      }
      *(float *)(param_1 + 0x174) = local_48;
      fVar11 = (float10)FUN_004d0710();
      *(bool *)(param_1 + 0x16c) = (float10)local_48 < fVar11;
      *(undefined1 *)(param_1 + 0x16d) = 0;
      *(undefined4 *)(param_1 + 0x170) = 3;
      ExceptionList = local_14;
      return 1;
    }
    FUN_005b18a0(local_34,param_4);
    local_c = 0;
    FUN_005ae390();
    local_c._0_1_ = 1;
    FUN_005035a0();
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004040a0();
    local_c = 0xffffffff;
    uVar7 = FUN_004040a0();
    ExceptionList = local_14;
    return uVar7 & 0xffffff00;
  }
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_SetTo_006994e0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_4 + 4);
    if (((iVar4 != 0) && ((*(int *)(param_4 + 8) - iVar4) / 0x18 == 1)) &&
       (*(int *)(iVar4 + 8) == 1)) {
      uVar10 = 0;
      local_48 = (float)*(double *)(iVar4 + 0x10);
      if (local_48 < *(float *)(param_1 + 0x140)) {
        FUN_005ae390(local_34,s_SetTo___f___value_out_of_range___006994b0,(double)local_48,
                     (double)*(float *)(param_1 + 0x140));
        local_c = 9;
        FUN_005035a0();
        local_c = 0xffffffff;
        uVar10 = 0;
        if (iStack_30 != 0) {
          cVar2 = *(char *)(iStack_30 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0();
            uVar10 = extraout_var_00;
          }
          else {
            uVar10 = (undefined2)((uint)iStack_30 >> 0x10);
            *(char *)(iStack_30 + -1) = cVar2 + -1;
          }
        }
        local_48 = *(float *)(param_1 + 0x140);
      }
      fVar1 = *(float *)(param_1 + 0x13c);
      fVar8 = (float)CONCAT22(uVar10,(ushort)(local_48 < fVar1) << 8 |
                                     (ushort)(NAN(local_48) || NAN(fVar1)) << 10 |
                                     (ushort)(local_48 == fVar1) << 0xe);
      if (local_48 < fVar1 == 0 && (local_48 == fVar1) == 0) {
        FUN_005ae390(local_34,s_SetTo___f___value_out_of_range___00699484,(double)local_48,
                     (double)*(float *)(param_1 + 0x13c));
        local_c = 10;
        FUN_005035a0();
        local_c = 0xffffffff;
        if (iStack_30 != 0) {
          cVar2 = *(char *)(iStack_30 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_30 + -1) = cVar2 + -1;
          }
        }
        fVar8 = *(float *)(param_1 + 0x13c);
        local_48 = fVar8;
      }
      uVar9 = (undefined3)((uint)fVar8 >> 8);
      if (*(char *)(param_1 + 0xa9) != '\0') {
        puVar5 = *(undefined1 **)(param_1 + 0x60);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(auStack_24,s_ModelController__s_receives_comm_00699454,puVar5,
                             (double)local_48);
        local_c = 0xb;
        FUN_005aff00(uVar6);
        uVar9 = 0;
        if (iStack_20 != 0) {
          cVar2 = *(char *)(iStack_20 + -1);
          uVar9 = (undefined3)((uint)iStack_20 >> 8);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0();
            uVar9 = extraout_var;
          }
          else {
            *(char *)(iStack_20 + -1) = cVar2 + -1;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x16d) = 1;
      *(float *)(param_1 + 0x174) = local_48;
      *(undefined4 *)(param_1 + 0x170) = 3;
      ExceptionList = local_14;
      return CONCAT31(uVar9,1);
    }
    FUN_005b18a0(local_44,param_4);
    local_c = 6;
    FUN_005ae390();
    local_c._0_1_ = 7;
    FUN_005035a0();
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_004040a0();
    uVar7 = 0;
    if (local_40 != 0) {
      cVar2 = *(char *)(local_40 - 1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)(local_40 - 1) = cVar2 + -1;
        ExceptionList = local_14;
        return local_40 & 0xffffff00;
      }
      uVar7 = FUN_005fe5f0();
    }
    ExceptionList = local_14;
    return uVar7 & 0xffffff00;
  }
  uVar7 = FUN_004d1940();
  ExceptionList = local_14;
  return uVar7;
}

