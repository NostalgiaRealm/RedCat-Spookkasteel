/*
 * FUN_004545d0 at 004545d0
 * undefined FUN_004545d0(void)
 * Address ranges: 004545d0-004547d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004545d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00626689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064d3a0;
  local_4 = 3;
  iVar5 = 0;
  do {
    if (param_1[0xe] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_1[0xf] - param_1[0xe]) >> 2;
    }
    if (iVar2 <= iVar5) {
      FUN_005fe5f0(param_1[0xe]);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      iVar5 = param_1[0xb];
      iVar2 = param_1[10];
      local_4 = CONCAT31(local_4._1_3_,1);
      for (; iVar2 != iVar5; iVar2 = iVar2 + 0x50) {
        FUN_00457490(0);
      }
      FUN_005fe5f0(param_1[10]);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      iVar5 = param_1[6];
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar5 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar5 + -1));
        }
        else {
          *(char *)(iVar5 + -1) = cVar1 + -1;
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
    if ((iVar5 < 0) || (iVar2 = FUN_0044e4c0(), iVar2 <= iVar5)) {
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar2 = *(int *)(param_1[0xe] + iVar5 * 4);
    if (iVar2 != 0) {
      FUN_00453eb0();
      FUN_005fe5f0(iVar2);
      if ((iVar5 < 0) || (iVar2 = FUN_0044e4c0(), iVar2 <= iVar5)) {
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
        (*pcVar3)();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004040a0(1);
      }
      *(undefined4 *)(param_1[0xe] + iVar5 * 4) = 0;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

