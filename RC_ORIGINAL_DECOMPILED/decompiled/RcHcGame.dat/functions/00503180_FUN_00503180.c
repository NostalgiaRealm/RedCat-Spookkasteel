/*
 * FUN_00503180 at 00503180
 * undefined FUN_00503180(void)
 * Address ranges: 00503180-005032b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00503180(int *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635c38;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc4;
  local_18 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x273);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x27e);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (param_2 == 0) {
    local_30[0] = 0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_2c = *puVar5;
        puVar5 = puVar5 + 1;
        local_2c = local_2c + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_2c = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        local_2c = (undefined4 *)((int)local_2c + 1);
      }
      FUN_00404190(uVar3);
      param_1 = local_18;
    }
    local_8._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0();
    (*pcVar2)(s_a_GO____0_0069db1c,s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x27f,local_30);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004040a0(1);
  }
  if ((code *)param_1[0x3d] == (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_2);
  }
  else {
    (*(code *)param_1[0x3d])(param_1,param_2);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_005ae770();
  local_8 = 0xffffffff;
  FUN_005ae770();
  *unaff_FS_OFFSET = local_10;
  return;
}

