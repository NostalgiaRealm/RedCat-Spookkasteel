/*
 * FUN_00422420 at 00422420
 * undefined FUN_00422420(void)
 * Address ranges: 00422420-00422600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00422420(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622452;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0040cad0(local_1c,param_2,s_Actor_0068f828);
  local_4 = 0;
  FUN_00501cb0(uVar3);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x44) = (undefined1)param_2;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  FUN_00425d30(param_4);
  local_4._0_1_ = 6;
  FUN_00422400();
  *param_1 = &PTR_FUN_0064bcc4;
  pvVar4 = operator_new(0x14d0);
  local_4._0_1_ = 7;
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_0040cad0(local_1c,param_2,s_SmokeEffect_0068f81c);
    local_4 = CONCAT31(local_4._1_3_,8);
    iVar5 = FUN_0046db00(uVar3);
  }
  piVar1 = param_1 + 0x5d;
  local_4 = 6;
  *piVar1 = iVar5;
  if ((pvVar4 != (void *)0x0) && (local_18 != 0)) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  if (*piVar1 == 0) {
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    param_2._0_1_ = SUB41(pvVar4,0);
    local_28 = 0;
    local_2c[0] = (undefined1)param_2;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 10;
    pcVar6 = (code *)FUN_005a07f0(s_m_Effect_0068e4dc,s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,
                                  0x42,local_2c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,6);
    if (local_28 != 0) {
      cVar2 = *(char *)(local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar2 + -1;
      }
    }
  }
  FUN_00509a90(*piVar1,piVar1);
  ExceptionList = pvStack_c;
  return param_1;
}

