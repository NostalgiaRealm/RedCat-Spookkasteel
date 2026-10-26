/*
 * FUN_00512d80 at 00512d80
 * undefined FUN_00512d80(void)
 * Address ranges: 00512d80-00512efe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00512d80(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  code *pcVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063776b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0050dd60(local_1c,param_2,param_3,param_4);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  iVar4 = FUN_00511940(local_1c);
  if (iVar4 < 0) {
    uVar5 = FUN_004eed40(param_2);
    pvVar6 = operator_new(0x54);
    local_4._0_1_ = 1;
    if (pvVar6 == (void *)0x0) {
      param_4 = 0;
    }
    else {
      param_4 = FUN_0050dcc0(param_2,param_3,iVar2,uVar5);
    }
    local_4._0_1_ = 0;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 0;
    if (param_4 == 0) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      local_2c[0] = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 2;
      pcVar7 = (code *)FUN_005a07f0(s_message____0_0069ef38,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x315,local_2c);
      (*pcVar7)();
      local_4._0_1_ = 0;
      uVar3 = (undefined1)local_4;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
          uVar3 = (undefined1)local_4;
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    local_4._0_1_ = uVar3;
    FUN_0053cff0(*(undefined4 *)(param_1 + 400),1,&param_4);
  }
  uVar5 = FUN_005119e0(local_1c);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_18 + -1);
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

