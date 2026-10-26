/*
 * FUN_00547430 at 00547430
 * undefined FUN_00547430(void)
 * Address ranges: 00547430-00547699
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00547430(undefined1 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d1c8;
  pvStack_c = ExceptionList;
  iVar7 = 0;
  local_30 = 0;
  iVar8 = DAT_006ba76c;
  iVar6 = DAT_006ba770;
  ExceptionList = &pvStack_c;
  do {
    if (iVar8 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar6 - iVar8) / 0x14;
    }
    if (iVar5 <= iVar7) {
      uVar3 = FUN_005ae390(local_1c,s_No_name_for_key__i___X___006a1680,param_2,param_2);
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a13c8,
                                    0x655,uVar3);
      (*pcVar2)();
      local_4 = 0xffffffff;
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
      FUN_005ae390(param_1,&DAT_006b3f70);
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_30 < 0) {
LAB_005474b0:
      local_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x91,local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      iVar8 = DAT_006ba76c;
      iVar6 = DAT_006ba770;
    }
    else {
      if (iVar8 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (iVar6 - iVar8) / 0x14;
      }
      if (iVar5 <= iVar7) goto LAB_005474b0;
    }
    if (param_2 == *(int *)(local_30 + 0x10 + iVar8)) break;
    iVar7 = iVar7 + 1;
    local_30 = local_30 + 0x14;
  } while( true );
  if (-1 < iVar7) {
    if (iVar8 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (iVar6 - iVar8) / 0x14;
    }
    if (iVar7 < iVar6) goto LAB_005475d0;
  }
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  local_4 = 1;
  pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x91,local_2c);
  (*pcVar2)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar8 = DAT_006ba76c;
LAB_005475d0:
  *param_1 = *(undefined1 *)(iVar8 + iVar7 * 0x14);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(iVar8 + iVar7 * 0x14,0,0xffffffff);
  ExceptionList = pvStack_c;
  return param_1;
}

