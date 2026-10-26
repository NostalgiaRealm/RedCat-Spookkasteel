/*
 * FUN_004a06b0 at 004a06b0
 * undefined FUN_004a06b0(void)
 * Address ranges: 004a06b0-004a09e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a06b0(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x44) = 0;
  puVar2 = *(undefined1 **)((int)param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x20),puVar2,*(undefined4 *)((int)param_2 + 8));
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x38) != 0) && (*(float *)(param_1 + 0x58) < 0.5)) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    }
    FUN_0040cc00(param_2,0,0xffffffff);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      param_2 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
        param_2 = *(undefined1 **)(param_1 + 0x1c);
      }
      piVar4 = (int *)FUN_00421000(&local_34);
      local_4 = 0;
      if (*piVar4 == 0) {
        local_2c[0] = param_2._0_1_;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 1;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_0049f120();
      uVar6 = FUN_005b3f40();
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      local_4 = 0xffffffff;
      if (local_34 != 0) {
        FUN_004098d0();
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar3 = FUN_0060a6f2(*(undefined4 *)(param_1 + 0x14),0,&CAdamActor::RTTI_Type_Descriptor,
                             &CAdamGrobber::RTTI_Type_Descriptor,0);
        if (iVar3 == 0) {
          puVar2 = *(undefined1 **)(param_1 + 0x1c);
          if (puVar2 == (undefined1 *)0x0) {
            puVar2 = &DAT_0064a3b4;
          }
          puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x14) + 0x60);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          uVar6 = FUN_005ae390(auStack_1c,s_Actor__s_doesn_t_have_motion__s_006952f0,puVar7,puVar2);
          local_4 = 2;
          FUN_005035a0(uVar6);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
      else {
        iVar3 = FUN_005bda90(auStack_30);
        if (iVar3 == 0) {
          puVar2 = *(undefined1 **)(param_1 + 0x1c);
          if (puVar2 == (undefined1 *)0x0) {
            puVar2 = &DAT_0064a3b4;
          }
          puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x14) + 0x60);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          uVar6 = FUN_005ae390(auStack_1c,s_geMotion_GetTimeExtents___fails_f_006952b8,puVar7,puVar2
                              );
          local_4 = 3;
          FUN_005035a0(uVar6);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        else {
          iVar3 = __ftol();
          *(int *)(param_1 + 0x2c) = iVar3;
          iVar8 = __ftol();
          *(int *)(param_1 + 0x30) = iVar8;
          if ((iVar8 <= iVar3) || (iVar8 < 1)) {
            puVar2 = *(undefined1 **)(param_1 + 0x1c);
            if (puVar2 == (undefined1 *)0x0) {
              puVar2 = &DAT_0064a3b4;
            }
            puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x14) + 0x60);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_0064a3b4;
            }
            uVar6 = FUN_005ae390(local_2c,s_geMotion_GetTimeExtents___return_00695268,puVar7,puVar2)
            ;
            local_4 = 4;
            FUN_005035a0(uVar6);
            local_4 = 0xffffffff;
            if (iStack_28 != 0) {
              cVar1 = *(char *)(iStack_28 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005fe5f0((char *)(iStack_28 + -1));
              }
              else {
                *(char *)(iStack_28 + -1) = cVar1 + -1;
              }
            }
            iStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
          FUN_004a10a0();
        }
      }
    }
  }
  cVar1 = FUN_004a0640();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x3c) == '\0')) {
    FUN_004a10a0();
  }
  ExceptionList = pvStack_c;
  return;
}

