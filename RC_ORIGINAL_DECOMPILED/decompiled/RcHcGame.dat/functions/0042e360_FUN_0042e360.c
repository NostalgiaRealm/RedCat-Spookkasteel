/*
 * FUN_0042e360 at 0042e360
 * undefined FUN_0042e360(void)
 * Address ranges: 0042e360-0042e4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042e360(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *extraout_ECX;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piStack_3c;
  int *local_38;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar7 = param_3;
  puStack_8 = &LAB_00623648;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((param_3 != (int *)0x0) && (ExceptionList = &pvStack_c, param_1[0xa5] != 0)) {
    local_38 = &local_28;
    piStack_3c = (int *)0x42e3a9;
    ExceptionList = &pvStack_c;
    piVar2 = (int *)FUN_004042e0();
    local_4._0_1_ = 2;
    if (*piVar2 == 0) {
      local_38 = (int *)0x0;
      local_1c[0] = (undefined1)param_2;
      piStack_3c = (int *)0x42e3ca;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_38 = (int *)(~uVar4 - 1);
      piStack_3c = (int *)&DAT_006b3f70;
      FUN_004040f0();
      local_38 = (int *)local_1c;
      local_4._0_1_ = 3;
      piStack_3c = (int *)0xb6;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
      (*pcVar3)();
      local_4._0_1_ = 2;
      local_38 = (int *)0x1;
      piStack_3c = (int *)0x42e41b;
      FUN_004040a0();
      piVar7 = param_3;
    }
    local_38 = (int *)param_1[0xa5];
    piStack_3c = (int *)0x42e42e;
    FUN_004f41c0();
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_28 != 0) {
      iVar5 = *(int *)(local_28 + 0x14) + -1;
      *(int *)(local_28 + 0x14) = iVar5;
      if (iVar5 == 0) {
        local_38 = (int *)0x0;
        piStack_3c = (int *)0x42e453;
        FUN_005abfc0();
      }
      local_28 = 0;
    }
    piStack_3c = (int *)0x42e467;
    local_38 = param_1;
    FUN_0046da20();
    param_1 = extraout_ECX;
  }
  local_24 = (undefined1 *)&local_38;
  if (piVar7 != (int *)0x0) {
    piVar7[5] = piVar7[5] + 1;
  }
  local_20 = (undefined1 *)&piStack_3c;
  local_4._0_1_ = 4;
  piStack_3c = param_1;
  local_38 = piVar7;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_0049c1b0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar5;
    if (iVar5 == 0) {
      local_38 = (int *)0x0;
      piStack_3c = (int *)0x42e4be;
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((piVar7 != (int *)0x0) && (iVar5 = piVar7[5], piVar7[5] = iVar5 + -1, iVar5 + -1 == 0)) {
    local_38 = (int *)0x0;
    piStack_3c = (int *)0x42e4e4;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

