/*
 * FUN_0059c630 at 0059c630
 * undefined FUN_0059c630(void)
 * Address ranges: 0059c630-0059c80d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0059c630(undefined1 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char local_39;
  int iStack_38;
  undefined4 auStack_34 [2];
  undefined1 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006447f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059c520();
  FUN_005995e0(0);
  local_28 = 0;
  local_2c = param_1;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  FUN_00514e80(0);
  local_4 = 1;
  FUN_0053cff0(local_24,1,&param_1);
  local_39 = '\0';
  iVar5 = 0;
  do {
    iVar6 = 0;
    if (local_28 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_24 - local_28 >> 2;
    }
    if (iVar2 <= iVar5) {
      FUN_005fe5f0(local_28);
      ExceptionList = local_c;
      return local_39;
    }
    if (iVar5 < 0) {
LAB_0059c6db:
      local_1c[0] = param_1;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x8b,local_1c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    else {
      if (local_28 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = local_24 - local_28 >> 2;
      }
      if (iVar2 <= iVar5) goto LAB_0059c6db;
    }
    do {
      FUN_00598310(auStack_34,iVar6);
      local_4 = CONCAT31(local_4._1_3_,3);
      cVar1 = FUN_0059b1f0();
      if (cVar1 != '\0') {
        iStack_38 = FUN_0059df90(auStack_34[0]);
        iVar2 = FUN_005995d0();
        if ((iVar2 == -1) && (iVar2 = FUN_00598570(), iVar2 == 0)) {
          iVar2 = FUN_005995d0();
          FUN_005995e0(iVar2 + 1);
          if (iStack_38 == param_2) {
            local_39 = '\x01';
          }
          else if (local_39 == '\0') {
            FUN_0053cff0(local_24,1,&iStack_38);
          }
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005630e0();
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    iVar5 = iVar5 + 1;
  } while( true );
}

