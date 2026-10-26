/*
 * FUN_0044d260 at 0044d260
 * undefined FUN_0044d260(void)
 * Address ranges: 0044d260-0044d560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0044d260(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                  )

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 in_stack_00000024;
  int *in_stack_0000002c;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30 [4];
  void *pvStack_20;
  int iStack_18;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006259b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0044b5d0(local_3c);
  uVar5 = param_3;
  local_4._0_1_ = 1;
  FUN_0044b8f0(local_4c,param_3);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004041b0(0);
  piVar4 = (int *)FUN_0044d570(uVar5);
  piVar2 = in_stack_0000002c;
  *in_stack_0000002c = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    *param_1 = local_5c;
    param_1[1] = local_58;
    param_1[2] = local_54;
    param_1[3] = local_50;
    if (local_48 != 0) {
      cVar1 = *(char *)(local_48 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_48 + -1));
      }
      else {
        *(char *)(local_48 + -1) = cVar1 + -1;
      }
    }
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
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
    local_30[0] = 0;
    local_4 = 0xffffffff;
    if ((param_2 != 0) &&
       (iVar7 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
    ExceptionList = local_c;
    return param_1;
  }
  iVar7 = *piVar4;
  uVar5 = FUN_0044c1e0();
  (**(code **)(iVar7 + 0x78))(uVar5);
  uVar5 = FUN_0044c1e0();
  FUN_0044c1f0(uVar5);
  *(undefined1 *)(*piVar2 + 0x1d1) = in_stack_00000024;
  FUN_00502350(1);
  (**(code **)(*(int *)*piVar2 + 0x4c))(&param_3);
  *(undefined4 *)(*piVar2 + 0x130) = 0x3f4ccccd;
  FUN_0044bf50();
  (**(code **)(*(int *)*piVar2 + 0x7c))(&local_44,&local_54,&param_5);
  pvVar3 = local_c;
  if (local_c == (void *)0x0) {
    local_40 = CONCAT31(local_40._1_3_,(undefined1)param_5);
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    iStack_18._0_1_ = 3;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_40);
    (*pcVar6)();
    iStack_18 = CONCAT31(iStack_18._1_3_,2);
    FUN_004040a0(1);
  }
  FUN_004f41c0(*piVar2);
  param_5 = *(undefined4 *)(*piVar2 + 0x21c);
  iVar7 = __ftol();
  if ((iVar7 != -1) && (iVar7 < 0)) {
    FUN_00409810(&DAT_006b3f70,&param_5);
    iStack_18._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_30);
    (*pcVar6)();
    iStack_18 = CONCAT31(iStack_18._1_3_,2);
    FUN_004040a0(1);
  }
  local_38 = 0x3f800000;
  *piStack_10 = iVar7;
  local_34 = CONCAT31(local_34._1_3_,1);
  piStack_10[1] = -1;
  piStack_10[2] = 0x3f800000;
  iStack_18._0_1_ = 1;
  piStack_10[3] = local_34;
  FUN_004040a0(1);
  iStack_18 = (uint)iStack_18._1_3_ << 8;
  FUN_004040a0(1);
  iStack_18 = 0xffffffff;
  if ((pvVar3 != (void *)0x0) &&
     (iVar7 = *(int *)((int)pvVar3 + 0x14) + -1, *(int *)((int)pvVar3 + 0x14) = iVar7, iVar7 == 0))
  {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_20;
  return piStack_10;
}

