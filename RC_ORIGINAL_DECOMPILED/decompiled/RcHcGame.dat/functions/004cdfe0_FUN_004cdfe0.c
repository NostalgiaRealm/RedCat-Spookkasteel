/*
 * FUN_004cdfe0 at 004cdfe0
 * undefined FUN_004cdfe0(void)
 * Address ranges: 004cdfe0-004ce1f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cdfe0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  int *local_44;
  int local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630f78;
  pvStack_c = ExceptionList;
  local_40 = 0;
  local_44 = *(int **)(param_1 + 0x1b4);
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)(param_1 + 0x1b4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4) >> 2;
    }
    if (iVar2 <= local_40) {
      ExceptionList = pvStack_c;
      return;
    }
    cVar1 = FUN_004ce560();
    if (cVar1 == '\0') {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_IsValid___00698fe8,s___AdamSource_DaviList_h_0068f458,0x14f,
                                    local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*local_44 == 0) {
      uVar4 = 0xffffffff;
      local_38 = 0;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_34 = 0;
      uStack_30 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4 = 2;
      pcVar3 = (code *)FUN_005a07f0(s_controlledWayPoint____0_00698fd0,
                                    s_D__Work_RCHorror_AdamSource_Adam_00698ddc,0x3c5,local_3c);
      (*pcVar3)();
      local_4 = 0xffffffff;
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
      uStack_30 = 0;
    }
    FUN_0059a6c0();
    cVar1 = FUN_004ce560();
    if (cVar1 == '\0') {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_IsValid___00698fe8,s___AdamSource_DaviList_h_0068f458,0x132,
                                    auStack_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    local_40 = local_40 + 1;
    local_44 = local_44 + 1;
  } while( true );
}

