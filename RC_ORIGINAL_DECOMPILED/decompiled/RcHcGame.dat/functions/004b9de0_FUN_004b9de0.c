/*
 * FUN_004b9de0 at 004b9de0
 * undefined FUN_004b9de0(void)
 * Address ranges: 004b9de0-004b9efd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b9de0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f378;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 == 0) {
    ExceptionList = &pvStack_c;
    uVar2 = FUN_005ae390(local_1c,s_No_Backup_texture__00697498);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_TextureBackup__NULL_00697480,
                                  s_D__Work_RCHorror_AdamSource_Adam_00697304,0x4e,uVar2);
    (*pcVar3)();
    local_4._0_1_ = 0;
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
  iVar4 = FUN_005c34b0();
  if (iVar4 == 0) {
    uVar2 = FUN_005ae390(local_1c,s_Could_not_blit_backup_copy_to_te_00697450);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00697304,0x51
                                  ,uVar2);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

