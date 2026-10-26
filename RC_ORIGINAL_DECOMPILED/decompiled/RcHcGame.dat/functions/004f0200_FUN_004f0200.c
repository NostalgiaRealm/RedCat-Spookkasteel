/*
 * FUN_004f0200 at 004f0200
 * undefined FUN_004f0200(void)
 * Address ranges: 004f0200-004f0622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f0200(int param_1,undefined1 *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar9;
  char cVar10;
  int iVar11;
  int *unaff_EDI;
  int iVar12;
  char *pcVar13;
  int *piStack_90;
  int *piStack_8c;
  char *pcStack_88;
  int *piStack_84;
  undefined4 *puStack_80;
  undefined4 uStack_68;
  int local_58;
  undefined1 *local_54;
  undefined1 auStack_50 [20];
  undefined1 uStack_3c;
  undefined1 local_1c [4];
  int local_18;
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063406e;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x34) == 0) {
    puStack_80 = (undefined4 *)local_1c;
    piStack_84 = (int *)0x4f05d5;
    ExceptionList = &local_c;
    piStack_84 = (int *)FUN_005ae390();
    local_4 = 6;
    pcStack_88 = (char *)0x4f05e6;
    FUN_004c43e0();
    if (local_18 != 0) {
      cVar10 = *(char *)(local_18 + -1);
      if ((cVar10 == '\0') || (cVar10 == -1)) {
        puStack_80 = (undefined4 *)0x4f060b;
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_18 + -1) = cVar10 + -1;
      }
    }
  }
  else {
    cVar10 = param_3;
    cVar3 = (char)param_2;
    if (param_3 < (char)param_2) {
      cVar10 = (char)param_2;
      cVar3 = param_3;
    }
    iVar11 = (int)cVar3;
    local_54 = (undefined1 *)(int)cVar10;
    ExceptionList = &local_c;
    if (iVar11 <= (int)local_54) {
      do {
        puStack_80 = &param_2;
        iVar9 = param_1 + 0x14;
        cVar10 = (char)iVar11;
        param_2 = (undefined1 *)CONCAT31(param_2._1_3_,cVar10);
        piStack_84 = (int *)0x4f027a;
        FUN_004f1490();
        if (param_3 == '\0') {
          if (cVar10 == '\n') {
            puStack_80 = (undefined4 *)0x4f0295;
            param_2 = operator_new(0x28);
            local_4 = 0;
            if (param_2 == (undefined1 *)0x0) {
              local_4 = 0xffffffff;
            }
            else {
              FUN_004ef9b0();
              local_4 = 0xffffffff;
            }
          }
          else {
            puStack_80 = (undefined4 *)0x4f02d8;
            param_2 = operator_new(0x28);
            local_4 = 1;
            if (param_2 == (void *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              uStack_68._0_3_ = CONCAT12(cVar10,(undefined2)uStack_68);
              puStack_80 = (undefined4 *)0x4f02fb;
              piVar4 = (int *)FUN_004ef000();
            }
            piVar1 = (int *)(param_1 + 0x34);
            param_2 = &stack0xffffff84;
            local_4 = 0xffffffff;
            if (*piVar1 != 0) {
              piVar2 = (int *)(*piVar1 + 0x14);
              *piVar2 = *piVar2 + 1;
            }
            puStack_80 = (undefined4 *)0x4f032c;
            iVar6 = (**(code **)(*piVar4 + 0x14))();
            if (*(int *)(param_1 + 0x30) == 0) {
              auStack_50[0] = (undefined1)iVar6;
              puStack_80 = (undefined4 *)0x0;
              piStack_84 = (int *)0x4f034b;
              FUN_004040a0();
              uVar8 = 0xffffffff;
              pcVar13 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar3 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar3 != '\0');
              puStack_80 = (undefined4 *)(~uVar8 - 1);
              piStack_84 = (int *)&DAT_006b3f70;
              pcStack_88 = (char *)0x4f0369;
              FUN_004040f0();
              puStack_80 = (undefined4 *)auStack_50;
              puStack_8 = (undefined1 *)0x2;
              piStack_84 = (int *)0xb6;
              pcStack_88 = s___AdamSource_DaviRC_h_0068d638;
              piStack_8c = (int *)s_m_Pointer_0068d62c;
              piStack_90 = (int *)0x4f038a;
              pcVar5 = (code *)FUN_005a07f0();
              piStack_90 = (int *)0x4f038c;
              (*pcVar5)();
              puStack_8 = (undefined1 *)0xffffffff;
              puStack_80 = (undefined4 *)0x1;
              piStack_84 = (int *)0x4f03a2;
              FUN_004040a0();
              iVar9 = param_1;
            }
            puStack_80 = (undefined4 *)0x4f03ad;
            iVar12 = FUN_00439d60();
            puStack_80 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar6);
            if (iVar12 < (int)puStack_80) {
              *(undefined4 *)(param_1 + 0x38) = 0;
              pcStack_88 = (char *)0x4f03d1;
              piStack_84 = piVar1;
              FUN_00449760();
              piStack_84 = (int *)0x4f03da;
              iVar6 = (**(code **)(*uStack_68 + 0x1c))();
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar6 + 5;
            }
            puStack_80 = *(undefined4 **)(param_1 + 0x3c);
            pcStack_88 = *(char **)(param_1 + 0x38);
            piStack_90 = (int *)0x4f03fd;
            piStack_8c = piVar1;
            piStack_84 = (int *)pcStack_88;
            FUN_00449760();
            local_54 = (undefined1 *)&piStack_8c;
            puStack_8 = (undefined1 *)0x3;
            piStack_90 = (int *)(param_1 + 0x30);
            piStack_8c = extraout_ECX;
            FUN_00449760();
            puStack_8 = (undefined1 *)0xffffffff;
            piStack_90 = (int *)0x4f0429;
            (**(code **)(*uStack_68 + 4))();
            puStack_10 = (undefined1 *)&piStack_90;
            piStack_90 = extraout_ECX_00;
            FUN_00449760(piVar1);
            iVar6 = (**(code **)(*unaff_EDI + 0x14))();
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar6 + 5;
          }
          param_2 = (undefined1 *)CONCAT31(param_2._1_3_,cVar10);
          if (*(int *)(iVar9 + 0x14) == 0) {
            puStack_80 = (undefined4 *)&DAT_006b3f70;
            piStack_84 = (int *)0x4f046f;
            FUN_00409810();
            local_4 = 4;
            puStack_80 = (undefined4 *)0xb9;
            piStack_84 = (int *)s___AdamSource_DaviSortedList_h_00690798;
            pcStack_88 = s_m_Func_0069522c;
            piStack_8c = (int *)0x4f0490;
            pcVar5 = (code *)FUN_005a07f0();
            piStack_8c = (int *)0x4f0492;
            (*pcVar5)();
            local_4 = 0xffffffff;
            puStack_80 = (undefined4 *)0x4f04a8;
            FUN_004040a0();
          }
          iVar6 = FUN_0044e4c0();
          if (iVar6 == 0) {
            local_58 = 0;
          }
          else {
            iVar6 = 0;
            iVar12 = (-(uint)(*(int *)(iVar9 + 0x10) != 0) & 0xfffffffe) + 2;
            iVar9 = FUN_0044e4c0();
            iVar9 = iVar9 + -1;
            do {
              local_58 = (iVar6 + iVar9) / 2;
              puStack_80 = &param_2;
              piStack_84 = (int *)0x4f04f4;
              iVar7 = (**(code **)(param_1 + 0x28))();
              if (iVar7 == 1) goto LAB_004f05b3;
              if (iVar7 == iVar12) {
                iVar6 = local_58 + 1;
              }
              else {
                iVar9 = local_58 + -1;
              }
            } while (iVar6 <= iVar9);
            if (iVar7 == iVar12) {
              local_58 = local_58 + 1;
            }
          }
          if (*(char *)(param_1 + 0x2c) != '\0') {
            uStack_3c = (char)param_2;
            puStack_80 = (undefined4 *)0x4f053e;
            FUN_004040a0();
            iVar9 = -1;
            pcVar13 = &DAT_006b3f70;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              cVar10 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar10 != '\0');
            puStack_80 = (undefined4 *)&DAT_006b3f70;
            piStack_84 = (int *)0x4f055c;
            FUN_004040f0();
            local_4 = 5;
            puStack_80 = (undefined4 *)0x59;
            piStack_84 = (int *)s___AdamSource_DaviSortedList_h_00690798;
            pcStack_88 = s__GetIsLocked___00695180;
            piStack_8c = (int *)0x4f057a;
            pcVar5 = (code *)FUN_005a07f0();
            piStack_8c = (int *)0x4f057c;
            (*pcVar5)();
            local_4 = 0xffffffff;
            puStack_80 = (undefined4 *)0x4f0592;
            FUN_004040a0();
          }
          puStack_80 = (undefined4 *)(*(int *)(param_1 + 0x18) + local_58 * 4);
          piStack_84 = (int *)0x4f05a9;
          FUN_004f15f0();
        }
LAB_004f05b3:
        iVar11 = iVar11 + 1;
      } while (iVar11 <= (int)local_54);
    }
  }
  ExceptionList = local_c;
  return;
}

