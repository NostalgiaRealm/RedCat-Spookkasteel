/*
 * FUN_0056c8a0 at 0056c8a0
 * undefined FUN_0056c8a0(void)
 * Address ranges: 0056c8a0-0056cbc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c8a0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640ac8;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)(param_2 + 4);
  if ((((iVar6 == 0) || ((*(int *)(param_2 + 8) - iVar6) / 0x18 != 2)) || (*(int *)(iVar6 + 8) != 2)
      ) || (ExceptionList = &pvStack_c, *(int *)(iVar6 + 0x20) != 2)) {
    local_5c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s__args_size______2______args_0__I_006a4454,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x1f0,local_5c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar6 = *(int *)(param_2 + 4);
  if ((*(int *)(iVar6 + 8) == 2) <= (*(int *)(iVar6 + 0x20) == 2)) {
    if (*(int *)(iVar6 + 8) != 2) {
      local_5c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,local_5c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    do {
      iVar2 = *(int *)(param_2 + 4);
      if (*(int *)(iVar2 + 0x20) != 2) {
        local_5c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284
                                      ,0x42,local_5c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(iVar2 + 0x28) < iVar6) goto LAB_0056cb9f;
      uVar4 = FUN_00511280(auStack_2c,iVar6);
      local_4 = 3;
      FUN_00514140(uVar4);
      FUN_00512f00(uVar4);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      iVar6 = iVar6 + 1;
    } while( true );
  }
  if (*(int *)(iVar6 + 0x20) != 2) {
    auStack_4c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 4;
    pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,auStack_4c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(param_2 + 4);
  uVar4 = *(undefined4 *)(iVar6 + 0x28);
  if (*(int *)(iVar2 + 8) != 2) {
    auStack_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 5;
    pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,auStack_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar4 = FUN_005ae390(auStack_1c,s_Script__LoadCommSounds___No_soun_006a43f4,
                       *(undefined4 *)(iVar2 + 0x10),uVar4);
  local_4 = 6;
  FUN_004c43b0(uVar4);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_0056cb9f:
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

