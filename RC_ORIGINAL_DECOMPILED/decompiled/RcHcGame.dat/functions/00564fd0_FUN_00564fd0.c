/*
 * FUN_00564fd0 at 00564fd0
 * undefined FUN_00564fd0(void)
 * Address ranges: 00564fd0-00565356
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00564fd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_21c [4];
  undefined4 *local_218;
  undefined4 auStack_20c [64];
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ff9c;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    iVar4 = FUN_005a0830();
    iVar2 = *(int *)(iVar4 + 100);
    if (iVar2 == -0x80000000) {
      puVar8 = *(undefined1 **)(iVar4 + 0x18);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar8);
      *(int *)(iVar4 + 100) = iVar2;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_005ae390(local_21c,s_DriverQueryCallBack____AFTER__s__006a3bf4,param_4,param_2,
                           param_3);
      local_4 = 3;
      FUN_005aff00(uVar3);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_005570a0();
    FUN_005acdb0(&DAT_006b3f70);
    if (DAT_006c8de5 != '\0') {
      iVar4 = FUN_005a0830();
      iVar2 = *(int *)(iVar4 + 100);
      if (iVar2 == -0x80000000) {
        puVar8 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10(puVar8);
        *(int *)(iVar4 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        FUN_005afe30(s_DriverQueryCallBack____switch_OF_006a3bb4);
      }
      FUN_00556e90();
      puVar9 = local_10c;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      FUN_0060af1b(local_10c,0xff,&DAT_00690818,0);
      FUN_005acdb0(local_10c);
      DAT_006c8de5 = '\0';
    }
    uVar6 = (uint)(param_3 != 0);
    FUN_005644d0(param_2,uVar6);
    FUN_005a10d0(uVar6);
  }
  else {
    ExceptionList = &local_c;
    FUN_005a0830();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      uVar3 = FUN_005ae390(local_21c,s_DriverQueryCallBack____BEFORE__s_006a3ca0,param_4,param_2);
      local_4 = 0;
      FUN_005aff00(uVar3);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    iVar2 = FUN_005646e0(local_21c,param_2);
    local_4 = 1;
    FUN_005570a0();
    puVar8 = *(undefined1 **)(iVar2 + 4);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    FUN_005acdb0(puVar8);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if ((param_2 == 2) || (param_2 == 3)) {
      iVar4 = FUN_00556e90();
      iVar2 = *(int *)(iVar4 + 100);
      if (iVar2 == -0x80000000) {
        puVar8 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10(puVar8);
        *(int *)(iVar4 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar1 = FUN_00401940(uVar6,1);
        if (cVar1 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *local_218 = *puVar9;
            puVar9 = puVar9 + 1;
            local_218 = local_218 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)local_218 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            local_218 = (undefined4 *)((int)local_218 + 1);
          }
          FUN_00404190(uVar6);
        }
        local_4 = 2;
        pcVar5 = (code *)FUN_005a07f0(s____bool__GET_GLOBAL_SETTING_Disp_006a3c6c,
                                      s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x920,local_21c);
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar4 = FUN_005a0830();
      iVar2 = *(int *)(iVar4 + 100);
      if (iVar2 == -0x80000000) {
        puVar8 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10(puVar8);
        *(int *)(iVar4 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        FUN_005afe30(s_DriverQueryCallBack____switch_ON_006a3c2c);
      }
      DAT_006c8de5 = '\x01';
      FUN_00556e90();
      puVar9 = auStack_20c;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      FUN_0060af1b(auStack_20c,0xff,&DAT_00690818,1);
      FUN_005acdb0(auStack_20c);
    }
    else {
      DAT_006c8de5 = '\0';
    }
    FUN_005644d0(param_2);
    FUN_005a0d70();
  }
  ExceptionList = local_c;
  return;
}

