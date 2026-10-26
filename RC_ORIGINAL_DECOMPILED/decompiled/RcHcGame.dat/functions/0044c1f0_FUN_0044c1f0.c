/*
 * FUN_0044c1f0 at 0044c1f0
 * undefined FUN_0044c1f0(void)
 * Address ranges: 0044c1f0-0044c52f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0044c1f0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piStack_84;
  undefined1 local_70 [2];
  undefined1 auStack_6e [2];
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  int local_54;
  undefined1 *puStack_50;
  int local_4c [4];
  int aiStack_3c [4];
  int aiStack_2c [4];
  int aiStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00625868;
  pvStack_c = ExceptionList;
  local_6c = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_64 = 0;
  iVar5 = 0;
  ExceptionList = &pvStack_c;
  local_54 = param_1;
  do {
    if (*(int *)(param_2 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4;
    }
    if (iVar1 / 2 <= local_60) {
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_68 != (int *)0x0) {
        piStack_84 = (int *)0x44c4f0;
        FUN_004098d0();
        local_68 = (int *)0x0;
      }
      local_4 = 0xffffffff;
      if ((local_6c != 0) &&
         (iVar5 = *(int *)(local_6c + 0x14) + -1, *(int *)(local_6c + 0x14) = iVar5, iVar5 == 0)) {
        piStack_84 = (int *)0x0;
        FUN_005abfc0();
      }
      ExceptionList = pvStack_c;
      return;
    }
    if (iVar5 < 0) {
LAB_0044c26d:
      piStack_84 = (int *)local_70;
      FUN_00409810(&DAT_006b3f70);
      piStack_84 = local_4c;
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x91);
      (*pcVar2)();
      local_4._0_1_ = 1;
      piStack_84 = (int *)0x1;
      FUN_004040a0();
    }
    else {
      piStack_84 = (int *)0x44c267;
      iVar1 = FUN_00442d80();
      if (iVar1 <= local_64) goto LAB_0044c26d;
    }
    iVar1 = *(int *)(param_2 + 4);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      piStack_84 = (int *)0x44c2c3;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      piStack_84 = (int *)(local_70 + 1);
      FUN_00409810(&DAT_006b3f70);
      piStack_84 = aiStack_3c;
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar2)();
      local_4._0_1_ = 1;
      piStack_84 = (int *)0x1;
      FUN_004040a0();
    }
    piStack_84 = (int *)(iVar1 + iVar5);
    piVar4 = (int *)FUN_0050d980(auStack_5c);
    local_4._0_1_ = 4;
    if (local_6c != *piVar4) {
      if (local_6c != 0) {
        piStack_84 = (int *)0x44c341;
        FUN_004098d0();
      }
      local_6c = *piVar4;
      piStack_84 = (int *)0x44c350;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    piStack_84 = (int *)0x44c35d;
    FUN_0057d310();
    iVar1 = local_64 + 1;
    if (iVar1 < 0) {
LAB_0044c378:
      piStack_84 = (int *)auStack_6e;
      FUN_00409810(&DAT_006b3f70);
      piStack_84 = aiStack_2c;
      local_4._0_1_ = 5;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x91);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      piStack_84 = (int *)0x1;
      FUN_004040a0();
    }
    else {
      piStack_84 = (int *)0x44c374;
      iVar3 = FUN_00442d80();
      if (iVar3 <= iVar1) goto LAB_0044c378;
    }
    iVar1 = *(int *)(param_2 + 4);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      piStack_84 = (int *)0x44c3d5;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      piStack_84 = (int *)(auStack_6e + 1);
      FUN_00409810(&DAT_006b3f70);
      piStack_84 = aiStack_1c;
      local_4._0_1_ = 6;
      pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      piStack_84 = (int *)0x1;
      FUN_004040a0();
    }
    piStack_84 = (int *)(iVar1 + 0x10 + iVar5);
    piVar4 = (int *)FUN_0050d980(auStack_58);
    local_4._0_1_ = 7;
    if (local_68 != (int *)*piVar4) {
      if (local_68 != (int *)0x0) {
        piStack_84 = (int *)0x44c454;
        FUN_004098d0();
      }
      local_68 = (int *)*piVar4;
      piStack_84 = (int *)0x44c463;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    piStack_84 = (int *)0x44c470;
    FUN_0057d310();
    if ((local_6c != 0) && (local_68 != (int *)0x0)) {
      puStack_50 = (undefined1 *)&piStack_84;
      piStack_84 = local_68;
      FUN_005844b0();
      local_4._0_1_ = 1;
      FUN_00412de0();
      FUN_0050aea0();
    }
    piStack_84 = &local_6c;
    FUN_004fdb90(*(undefined4 *)(local_54 + 0x1c4));
    local_60 = local_60 + 1;
    local_64 = local_64 + 2;
    iVar5 = iVar5 + 0x20;
  } while( true );
}

