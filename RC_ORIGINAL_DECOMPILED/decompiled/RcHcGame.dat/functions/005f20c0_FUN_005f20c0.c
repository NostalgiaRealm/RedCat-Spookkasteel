/*
 * FUN_005f20c0 at 005f20c0
 * undefined FUN_005f20c0(void)
 * Address ranges: 005f20c0-005f222e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f20c0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_44 [4];
  char *local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined **ppuStack_28;
  undefined1 auStack_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647bcf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_4 == DAT_0070fae4) {
    local_44[0] = (undefined1)param_4;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_Cannot_invoke_method_for_NIL_obj_006b1414;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Cannot_invoke_method_for_NIL_obj_006b1414;
      pcVar6 = local_40;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_40[uVar3] = '\0';
      local_3c = uVar3;
    }
    local_4 = 1;
    FUN_005ea160(0xbc0,local_44,param_1 + 0xc,*(int *)(param_1 + 8) + 0xc);
    local_4 = local_4 & 0xffffff00;
    if (local_40 != (char *)0x0) {
      cVar1 = local_40[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_40 + -1);
      }
      else {
        local_40[-1] = cVar1 + -1;
      }
    }
    local_40 = (char *)0x0;
    local_3c = 0;
    uStack_38 = 0;
  }
  uVar2 = FUN_005f1f70(local_34,param_3);
  local_4 = 2;
  uVar2 = (**(code **)(param_1 + 0x40))(auStack_24,param_4,uVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005e27d0(uVar2);
  *param_2 = &PTR_FUN_00650ad4;
  puStack_8._0_1_ = 2;
  ppuStack_28 = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_005e2320();
  ExceptionList = pvStack_10;
  return param_2;
}

