/*
 * FUN_00501cb0 at 00501cb0
 * undefined FUN_00501cb0(void)
 * Address ranges: 00501cb0-00501f36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00501cb0(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006359f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ff0e0();
  param_1[6] = 0;
  param_1[7] = param_1;
  param_1[10] = param_1;
  param_1[0xd] = param_1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = param_2._0_1_;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x17) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x1b) = param_2._0_1_;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x20) = param_2._0_1_;
  local_4._0_1_ = 4;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x24) = param_2._0_1_;
  FUN_004040a0(0);
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_004041b0(0);
  param_1[0x30] = 0;
  uVar7 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  *(undefined1 *)((int)param_1 + 0xde) = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *param_1 = &PTR_FUN_0064f4dc;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_4._0_1_ = 7;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 7;
  if (param_1[0x19] == 0) {
    local_1c[0] = param_2._0_1_;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_m_Name_length___>_0_0069d97c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x57,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 7;
    uVar2 = (undefined1)local_4;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
        uVar2 = (undefined1)local_4;
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  local_4._0_1_ = uVar2;
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  iVar6 = *(int *)(iVar4 + 0x4e8);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x49c);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 0x4e8) = iVar6;
  }
  if (iVar6 == 0) {
    param_1[0x39] = 0x4a1c4000;
  }
  else {
    param_1[0x39] = 0x49742400;
  }
  ExceptionList = pvStack_c;
  return param_1;
}

