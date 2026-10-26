/*
 * FUN_004f21f0 at 004f21f0
 * undefined FUN_004f21f0(void)
 * Address ranges: 004f21f0-004f2568
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f21f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 local_3d;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined1 local_2c [4];
  char *pcStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063436f;
  pvStack_c = ExceptionList;
  local_30 = 0;
  local_3c = 0;
  ExceptionList = &pvStack_c;
  FUN_005844b0();
  local_4 = 1;
  local_38 = 0;
  FUN_005844b0();
  local_4._0_1_ = 2;
  iVar8 = 0;
  iVar2 = FUN_004f21d0();
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_004f1f00(local_34,iVar8);
      local_4._0_1_ = 3;
      if (local_3c != *piVar3) {
        if (local_3c != 0) {
          FUN_004098d0();
        }
        local_3c = *piVar3;
        FUN_005844b0();
      }
      local_4._0_1_ = 2;
      FUN_0057d310();
      pcVar7 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        pcVar7 = *(char **)(param_2 + 4);
      }
      if (local_3c == 0) {
        FUN_00409810(&DAT_006b3f70,&local_3d);
        local_4._0_1_ = 4;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar4)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      iVar2 = FUN_004f3d10();
      pcVar5 = *(char **)(iVar2 + 4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
      }
      iVar2 = __strcmpi(pcVar5,pcVar7);
      if ((iVar2 == 0) && (local_38 != local_3c)) {
        if ((local_38 != 0) &&
           (iVar2 = *(int *)(local_38 + 0x14) + -1, *(int *)(local_38 + 0x14) = iVar2, iVar2 == 0))
        {
          FUN_005abfc0(0);
        }
        local_38 = local_3c;
        FUN_005844b0();
      }
      iVar8 = iVar8 + 1;
      iVar2 = FUN_004f21d0();
    } while (iVar8 < iVar2);
  }
  if (local_38 == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    local_4._0_1_ = 5;
    FUN_0040cc00(param_2,0,0xffffffff);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_00694a58;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00484c30(&DAT_00694a58,~uVar6 - 1);
    iVar8 = 0;
    iVar2 = FUN_004f21d0();
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_004f1f00(local_34,iVar8);
        local_4._0_1_ = 6;
        if (local_3c != *piVar3) {
          if ((local_3c != 0) &&
             (iVar2 = *(int *)(local_3c + 0x14) + -1, *(int *)(local_3c + 0x14) = iVar2, iVar2 == 0)
             ) {
            FUN_005abfc0(0);
          }
          local_3c = *piVar3;
          FUN_005844b0();
        }
        local_4._0_1_ = 5;
        FUN_0057d310();
        pcVar7 = "";
        if (pcStack_28 != (char *)0x0) {
          pcVar7 = pcStack_28;
        }
        if (local_3c == 0) {
          FUN_00409810(&DAT_006b3f70,&param_2);
          local_4._0_1_ = 7;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_1c);
          (*pcVar4)();
          local_4._0_1_ = 5;
          FUN_004040a0(1);
        }
        iVar2 = FUN_004f3d10();
        pcVar5 = *(char **)(iVar2 + 4);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        iVar2 = __strcmpi(pcVar5,pcVar7);
        if (iVar2 == 0) {
          if (local_38 != local_3c) {
            if ((local_38 != 0) &&
               (iVar2 = *(int *)(local_38 + 0x14) + -1, *(int *)(local_38 + 0x14) = iVar2,
               iVar2 == 0)) {
              FUN_005abfc0(0);
            }
            local_38 = local_3c;
            FUN_005844b0();
          }
          break;
        }
        iVar8 = iVar8 + 1;
        iVar2 = FUN_004f21d0();
      } while (iVar8 < iVar2);
    }
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  *param_1 = local_38;
  if (local_38 != 0) {
    *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 1;
  }
  local_30 = 1;
  local_4._0_1_ = 1;
  if (local_38 != 0) {
    FUN_004098d0();
    local_38 = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_3c != 0) &&
     (iVar2 = *(int *)(local_3c + 0x14) + -1, *(int *)(local_3c + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

