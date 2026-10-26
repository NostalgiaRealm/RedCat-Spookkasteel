/*
 * FUN_004d69b0 at 004d69b0
 * undefined FUN_004d69b0(void)
 * Address ranges: 004d69b0-004d6c90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004d69b0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 uStack_71;
  int local_70;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [8];
  int local_24 [2];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631b20;
  pvStack_c = ExceptionList;
  bVar1 = false;
  local_6c[0] = (undefined1)param_1;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00514e80(0);
  local_4 = 1;
  cVar3 = FUN_00554b20(param_1,4,0xffffffff,local_2c,&LAB_004d6ca0,local_6c);
  do {
    if (cVar3 == '\0') {
      FUN_005fe5f0(local_68);
      ExceptionList = pvStack_c;
      return !bVar1;
    }
    if (local_24[0] == 0) {
      local_5c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_contents_Actor____0_00699790,
                                    s_D__Work_RCHorror_AdamSource_Adam_00699728,0x1de,local_5c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_004f15f0(local_64,local_24);
    if (local_24[0] == 0) {
      auStack_4c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 3;
      pcVar4 = (code *)FUN_005a07f0(s_a_Actor____0_00699780,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a1,auStack_4c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    iVar5 = FUN_005525c0();
    if (iVar5 == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_71);
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_userData____0_00699770,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a3,auStack_1c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    iVar6 = FUN_004337e0();
    iVar2 = local_70;
    if (iVar6 != 0) {
      puVar10 = *(undefined1 **)(iVar5 + 0x60);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &DAT_0064a3b4;
      }
      puVar7 = *(undefined1 **)(local_70 + 0x60);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar8 = FUN_005ae390(auStack_3c,s__s_collides_with_actor__s_00699754,puVar7,puVar10);
      local_4._0_1_ = 5;
      FUN_005aff00(uVar8);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iStack_38 != 0) {
        cVar3 = *(char *)(iStack_38 + -1);
        if ((cVar3 != '\0') && (cVar3 != -1)) {
          *(char *)(iStack_38 + -1) = cVar3 + -1;
          iStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          goto LAB_004d6c20;
        }
        FUN_005fe5f0((char *)(iStack_38 + -1));
      }
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
    }
LAB_004d6c20:
    FUN_00503180(iVar2);
    if (*(char *)(iVar5 + 0x208) != '\0') {
      bVar1 = true;
    }
    cVar3 = FUN_00554b20(param_1,4,0xffffffff,local_2c,&LAB_004d6ca0,local_6c);
  } while( true );
}

