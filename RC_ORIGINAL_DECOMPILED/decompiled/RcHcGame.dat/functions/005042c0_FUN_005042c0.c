/*
 * FUN_005042c0 at 005042c0
 * undefined FUN_005042c0(void)
 * Address ranges: 005042c0-005044c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005042c0(int *param_1,int param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [16];
  undefined1 local_3c;
  int local_38;
  undefined1 local_2c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635dd8;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffa8;
  local_18 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x3b7);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_005171f0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    local_3c = param_3._3_1_;
    FUN_004040a0();
    local_2c = param_3._3_1_;
    local_8._0_1_ = 2;
    FUN_004040a0();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (param_2 == 0) {
      uVar3 = 0xffffffff;
      pcVar4 = &DAT_006920fc;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006920fc,~uVar3 - 1);
      param_1 = local_18;
    }
    else {
      FUN_0040cc00();
    }
    if (param_3 == (float *)0x0) {
      uVar3 = 0xffffffff;
      pcVar4 = &DAT_006920fc;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006920fc,~uVar3 - 1);
      param_1 = local_18;
    }
    else {
      FUN_005ae390(local_4c,s____f___f___f___0069dea4,(double)*param_3,(double)param_3[1],
                   (double)param_3[2]);
      local_8._0_1_ = 4;
      FUN_0040cc00();
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_004040a0();
    }
    FUN_005171f0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      FUN_005ae390();
      local_8._0_1_ = 5;
      FUN_005aff00();
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_004040a0();
    }
    local_8._0_1_ = 2;
    FUN_004040a0();
    local_8._0_1_ = 1;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  (**(code **)(*param_1 + 0x20))(param_2,param_3);
  local_8 = 0xffffffff;
  FUN_005ae770();
  *unaff_FS_OFFSET = local_10;
  return;
}

