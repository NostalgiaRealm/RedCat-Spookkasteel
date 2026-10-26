/*
 * FUN_00544130 at 00544130
 * undefined FUN_00544130(void)
 * Address ranges: 00544130-005443ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_00544130(undefined4 param_1,int param_2,undefined1 param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  char *local_74;
  char *local_70;
  undefined1 *local_6c;
  undefined4 *local_68;
  undefined1 local_52;
  undefined1 uStack_51;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  iVar1 = param_2;
  puStack_8 = &LAB_0063cd28;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  local_52 = 0;
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  local_48 = param_1;
  do {
    iVar6 = param_4;
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 4;
    }
    if (iVar3 <= local_50) {
      local_68 = (undefined4 *)param_4;
      local_6c = (undefined1 *)0x54439f;
      FUN_005fe5f0();
      ExceptionList = pvStack_c;
      return local_52;
    }
    local_44 = (undefined1 *)&local_74;
    local_74 = (char *)CONCAT31(local_74._1_3_,param_3);
    if (param_4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_5 - param_4 >> 2;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iStack_7c = 0x5441c0;
    local_70 = operator_new(iVar3 * 4);
    iStack_7c = param_5;
    iStack_80 = iVar6;
    uStack_84 = 0x5441d7;
    local_6c = (undefined1 *)FUN_004dddf0();
    iVar6 = local_50;
    local_4 = 1;
    iStack_7c = 0x5441ee;
    local_68 = (undefined4 *)local_6c;
    uVar4 = FUN_00548f50();
    local_40 = (undefined1 *)&uStack_84;
    FUN_00548a70(uVar4);
    local_4 = 0;
    cVar2 = FUN_00542a20();
    if (cVar2 != '\0') {
      if (*(int *)(iVar1 + 0x14) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 4;
      }
      if (iVar3 <= iVar6) {
        local_68 = (undefined4 *)0x0;
        local_3c[0] = (undefined1)param_2;
        local_6c = (undefined1 *)0x54423e;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        local_68 = (undefined4 *)(~uVar8 - 1);
        local_6c = &DAT_006b3f70;
        local_70 = (char *)0x54425c;
        FUN_004040f0();
        local_68 = (undefined4 *)local_3c;
        local_4 = 2;
        local_6c = (undefined1 *)0xbb;
        local_70 = s___AdamSource_DaviList_h_0068f458;
        local_74 = s_a_Index<Count()_0068f448;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4 = 0;
        local_68 = (undefined4 *)0x1;
        local_6c = (undefined1 *)0x54428e;
        FUN_004040a0();
      }
      local_68 = (undefined4 *)0x544295;
      iVar6 = FUN_00442d80();
      if (iVar6 < 1) {
        local_68 = &param_2;
        local_6c = &DAT_006b3f70;
        local_70 = (char *)0x5442ac;
        FUN_00409810();
        local_68 = (undefined4 *)auStack_2c;
        local_4 = 3;
        local_6c = (undefined1 *)0x9d;
        local_70 = s___AdamSource_DaviList_h_0068f458;
        local_74 = s_Count__>0_0068f4c0;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4 = 0;
        local_68 = (undefined4 *)0x1;
        local_6c = (undefined1 *)0x5442de;
        FUN_004040a0();
      }
      iVar6 = *(int *)(iVar1 + 0x14);
      if (local_4c < 0) {
LAB_005442f6:
        local_68 = (undefined4 *)&uStack_51;
        local_6c = &DAT_006b3f70;
        local_70 = (char *)0x544309;
        FUN_00409810();
        local_68 = (undefined4 *)auStack_1c;
        local_4 = 4;
        local_6c = (undefined1 *)0x8b;
        local_70 = s___AdamSource_DaviList_h_0068f458;
        local_74 = s_a_Index>_0____a_Index<Count()_0068f470;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4 = 0;
        local_68 = (undefined4 *)0x1;
        local_6c = (undefined1 *)0x54433b;
        FUN_004040a0();
      }
      else {
        local_68 = (undefined4 *)0x5442f0;
        iVar3 = FUN_00442d80();
        if (iVar3 <= local_50) goto LAB_005442f6;
      }
      local_68 = (undefined4 *)0x544345;
      iVar7 = FUN_00442d80();
      iVar3 = local_4c;
      local_68 = (undefined4 *)(iVar7 * 0x10 + -0x10 + iVar6);
      local_6c = (undefined1 *)0x544359;
      FUN_004f12a0();
      local_68 = (undefined4 *)(*(int *)(iVar1 + 0x18) + -0x10);
      local_6c = (undefined1 *)0x544367;
      FUN_00549eb0();
      local_52 = 1;
      local_50 = local_50 + -1;
      local_4c = iVar3 + -0x10;
    }
    local_50 = local_50 + 1;
    local_4c = local_4c + 0x10;
  } while( true );
}

