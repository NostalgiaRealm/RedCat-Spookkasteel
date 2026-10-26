/*
 * FUN_0056bfe0 at 0056bfe0
 * undefined FUN_0056bfe0(void)
 * Address ranges: 0056bfe0-0056c219
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056bfe0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 *puStack_38;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006409c7;
  pvStack_c = ExceptionList;
  local_44 = 0;
  local_40 = 0;
  local_4 = 1;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_45);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(param_2 + 4);
  if (((iVar2 == 0) || ((*(int *)(param_2 + 8) - iVar2) / 0x18 != 1)) || (*(int *)(iVar2 + 8) != 3))
  {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puStack_38 = *puVar7;
        puVar7 = puVar7 + 1;
        puStack_38 = puStack_38 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puStack_38 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puStack_38 = (undefined4 *)((int)puStack_38 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s__args_size____1______args_0__IsS_006a43b8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x1ab,local_3c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  uVar4 = FUN_0045da10(auStack_1c);
  local_4._0_1_ = 4;
  uVar4 = FUN_005ae020(auStack_2c,uVar4);
  local_4._0_1_ = 5;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar3)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  FUN_00529c90(uVar4,0);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

