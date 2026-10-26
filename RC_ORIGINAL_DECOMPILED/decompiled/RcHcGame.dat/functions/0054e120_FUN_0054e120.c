/*
 * FUN_0054e120 at 0054e120
 * undefined FUN_0054e120(void)
 * Address ranges: 0054e120-0054e481
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0054e120(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  int iStack_14c;
  int iStack_148;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 uStack_141;
  float local_140;
  undefined1 local_13c [32];
  undefined1 local_11c [16];
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d9b2;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0xf0) == 0.0) {
    ExceptionList = &local_c;
    fVar7 = (float10)FUN_005ad390(param_1 + 0xa4,&local_142);
    *(float *)(param_1 + 0xf0) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(param_1 + 0xf0);
    ExceptionList = &local_c;
  }
  if (fVar7 != (float10)param_2) {
    puVar5 = local_10c;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_0069081c,(double)param_2);
    FUN_005acdb0();
    if (*(int *)(param_1 + 0x50) != 0) {
      fVar7 = (float10)FUN_0054d030();
      local_140 = (float)fVar7;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_142);
        local_4 = 0;
        pcVar2 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x12e,local_11c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      if (*(int *)(param_1 + 0x50) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_143);
        local_4 = 1;
        pcVar2 = (code *)FUN_005a07f0(s_m_System_006a1a80,s___AdamSource_AdamSound_h_00692cdc,0x12f,
                                      local_13c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_005c7f30(*(undefined4 *)(param_1 + 0x50),local_140);
      iStack_14c = 0;
      FUN_005844b0();
      iVar4 = 0;
      local_4 = 2;
      iVar6 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x58) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
        }
        if (iVar3 <= iVar6) break;
        iVar3 = *(int *)(param_1 + 0x58);
        if (iVar4 != *(int *)(iVar3 + iVar6 * 4)) {
          if (iVar4 != 0) {
            FUN_004098d0();
          }
          iVar4 = *(int *)(iVar3 + iVar6 * 4);
          FUN_005844b0();
          iStack_14c = iVar4;
        }
        if ((iVar4 != 0) && (cVar1 = FUN_005530e0(), iVar4 = iStack_14c, cVar1 != '\0')) {
          if (iStack_14c == 0) {
            FUN_00409810(&DAT_006b3f70,&local_143);
            local_4._0_1_ = 4;
            pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                         );
            (*pcVar2)();
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_004040a0();
          }
          FUN_00553170();
        }
        iVar6 = iVar6 + 1;
      }
      iStack_148 = 0;
      FUN_005844b0();
      iVar4 = 0;
      local_4._0_1_ = 5;
      iVar6 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x74) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
        }
        if (iVar3 <= iVar6) break;
        iVar3 = *(int *)(param_1 + 0x74);
        if (iVar4 != *(int *)(iVar3 + iVar6 * 4)) {
          if (iVar4 != 0) {
            FUN_004098d0();
          }
          iVar4 = *(int *)(iVar3 + iVar6 * 4);
          FUN_005844b0();
          iStack_148 = iVar4;
        }
        if ((iVar4 != 0) && (cVar1 = FUN_005530e0(), iVar4 = iStack_148, cVar1 != '\0')) {
          if (iStack_148 == 0) {
            FUN_00409810(&DAT_006b3f70,&uStack_141);
            local_4._0_1_ = 7;
            pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                         );
            (*pcVar2)();
            local_4._0_1_ = 5;
            FUN_004040a0();
          }
          FUN_00553170();
        }
        iVar6 = iVar6 + 1;
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_0057d310();
    }
  }
  ExceptionList = local_c;
  return;
}

