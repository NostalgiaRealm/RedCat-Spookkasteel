/*
 * FUN_00544440 at 00544440
 * undefined FUN_00544440(void)
 * Address ranges: 00544440-0054461c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00544440(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063cd58;
  local_c = ExceptionList;
  iVar6 = 0;
  cVar1 = '\0';
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00544468:
  do {
    while( true ) {
      if (param_2 == (undefined4 *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_3 - (int)param_2 >> 2;
      }
      if (iVar2 <= iVar6) {
        FUN_005fe5f0(param_2);
        ExceptionList = local_c;
        return cVar1;
      }
      if (iVar6 != 0) break;
      if ((param_2 == (undefined4 *)0x0) || ((int)(param_3 - (int)param_2 & 0xfffffffcU) < 1)) {
        local_1c[0] = (undefined1)param_5;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,local_1c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      cVar1 = FUN_00544620(*param_2,param_5);
      iVar6 = 1;
    }
    if (cVar1 != '\0') {
      if (iVar6 < 0) {
LAB_00544545:
        auStack_2c[0] = (undefined1)param_5;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar1 = FUN_00401940(uVar4,1);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar9 = puStack_28;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_00404190(uVar4);
        }
        local_4._0_1_ = 2;
        pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = param_3 - (int)param_2 >> 2;
        }
        if (iVar2 <= iVar6) goto LAB_00544545;
      }
      cVar1 = FUN_00544620(param_2[iVar6],param_5);
      if (cVar1 != '\0') {
        cVar1 = '\x01';
        iVar6 = iVar6 + 1;
        goto LAB_00544468;
      }
    }
    cVar1 = '\0';
    iVar6 = iVar6 + 1;
  } while( true );
}

