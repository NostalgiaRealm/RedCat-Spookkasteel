/*
 * FUN_004d21f0 at 004d21f0
 * undefined FUN_004d21f0(void)
 * Address ranges: 004d21f0-004d23b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_004d21f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631508;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    uVar6 = 0xffffffff;
    local_28 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_ModelController____0_006993a4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006993bc,0x26,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
  uVar3 = FUN_004cfc00(*(undefined4 *)(param_2 + 0x14),param_2);
  *(int *)(param_1 + 0x168) = param_2;
  iVar2 = *(int *)(param_2 + 0x20);
  if ((iVar2 < 0) || (3 < iVar2)) {
    uVar5 = FUN_005ae390(local_2c,s_Invalid_RepeatMode__d_for_ModelC_00699378,iVar2);
    local_4 = 1;
    FUN_005035a0(uVar5);
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(param_1 + 0x170) = 4;
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x170) = iVar2;
  }
  if (0.0 <= *(float *)(param_2 + 0x38)) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x38);
  }
  else {
    iStack_18 = 0;
    auStack_1c[0] = (undefined1)param_2;
    uStack_14 = 0;
    uStack_10 = 0;
    uVar6 = 0xffffffff;
    pcVar7 = s_CrushDamagePerSecond_should_be_>_00699354;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CrushDamagePerSecond_should_be_>_00699354,~uVar6 - 1);
    local_4 = 2;
    FUN_005035a0(auStack_1c);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

