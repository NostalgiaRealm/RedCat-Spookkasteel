/*
 * FUN_004a19b0 at 004a19b0
 * undefined FUN_004a19b0(void)
 * Address ranges: 004a19b0-004a1b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_004a19b0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_24 [2];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062cfdf;
  pvStack_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x38);
  local_24[1] = 0;
  ExceptionList = &pvStack_c;
  if (iVar7 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
  }
  local_4 = 1;
  if ((iVar7 == 0) && (*(char *)(param_1 + 0x34) == '\0')) {
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xf8) == 0) {
      local_1c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x182,local_1c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_0049ffa0(local_24,param_1 + 0x14);
    iVar2 = *piVar4;
    if ((iVar2 != 0) && (iVar7 = iVar2, iVar2 != 0)) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((local_24[0] != 0) &&
       (iVar2 = *(int *)(local_24[0] + 0x14) + -1, *(int *)(local_24[0] + 0x14) = iVar2, iVar2 == 0)
       ) {
      FUN_005abfc0(0);
    }
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 != iVar7) {
        if ((iVar2 != 0) &&
           (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
          FUN_005abfc0(0);
        }
        *(int *)(param_1 + 0x38) = iVar7;
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      }
    }
  }
  *param_2 = iVar7;
  if (iVar7 != 0) {
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
  }
  local_24[1] = 1;
  local_4 = local_4 & 0xffffff00;
  if ((iVar7 != 0) &&
     (iVar2 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

