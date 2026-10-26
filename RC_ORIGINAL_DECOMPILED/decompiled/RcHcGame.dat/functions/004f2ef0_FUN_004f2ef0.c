/*
 * FUN_004f2ef0 at 004f2ef0
 * undefined FUN_004f2ef0(void)
 * Address ranges: 004f2ef0-004f31bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f2ef0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006345c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f428;
  local_4 = 6;
  FUN_005ad1a0();
  iVar6 = 0;
  do {
    if (param_1[0x62] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[99] - param_1[0x62]) >> 2;
    }
    if (iVar3 <= iVar6) {
      FUN_005fe5f0(param_1[0x62]);
      param_1[0x62] = 0;
      param_1[99] = 0;
      param_1[100] = 0;
      local_4._0_1_ = 10;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
      FUN_005ae770();
      local_4._0_1_ = 4;
      FUN_00442da0(param_1[0x5b],param_1[0x5c]);
      FUN_005fe5f0(param_1[0x5b]);
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      local_4._0_1_ = 3;
      FUN_005acca0();
      local_4._0_1_ = 2;
      FUN_005acca0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005acca0();
      iVar6 = param_1[6];
      if (iVar6 != 0) {
        cVar1 = *(char *)(iVar6 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar6 + -1));
        }
        else {
          *(char *)(iVar6 + -1) = cVar1 + -1;
        }
      }
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      local_4 = 0xffffffff;
      FUN_005ab4d0();
      ExceptionList = local_c;
      return;
    }
    if (iVar6 < 0) {
LAB_004f2f5f:
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
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0(1);
    }
    else {
      iVar3 = FUN_0044e4c0();
      if (iVar3 <= iVar6) goto LAB_004f2f5f;
    }
    if (*(int *)(param_1[0x62] + iVar6 * 4) != 0) {
      if (iVar6 < 0) {
LAB_004f2fe1:
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
        local_4._0_1_ = 8;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar4)();
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_004040a0(1);
      }
      else {
        iVar3 = FUN_0044e4c0();
        if (iVar3 <= iVar6) goto LAB_004f2fe1;
      }
      puVar2 = *(undefined4 **)(param_1[0x62] + iVar6 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      if (iVar6 < 0) {
LAB_004f3067:
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
        local_4._0_1_ = 9;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
        (*pcVar4)();
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_004040a0(1);
      }
      else {
        iVar3 = FUN_0044e4c0();
        if (iVar3 <= iVar6) goto LAB_004f3067;
      }
      *(undefined4 *)(param_1[0x62] + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

