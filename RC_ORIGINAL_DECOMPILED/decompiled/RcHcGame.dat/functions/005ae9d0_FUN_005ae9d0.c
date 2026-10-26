/*
 * FUN_005ae9d0 at 005ae9d0
 * undefined FUN_005ae9d0(void)
 * Address ranges: 005ae9d0-005aed0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ae9d0(undefined1 param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 local_65;
  undefined1 *puStack_64;
  void *local_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645f83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cad9c == (void *)0x0) {
    ExceptionList = &pvStack_c;
    if (DAT_006cada0 != '\0') {
      ExceptionList = &pvStack_c;
      FUN_00409810(&DAT_006b3f70,&local_65);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s___m_Created_006a178c,
                                    s_D__Work_RCHorror_AdamSource_Davi_006a9024,0x30,local_3c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    pvVar5 = operator_new(0x14);
    local_4 = 1;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      local_60 = pvVar5;
      FUN_005af950(0);
      *(undefined4 *)((int)pvVar5 + 0x10) = 0;
    }
    DAT_006cada0 = '\x01';
    DAT_006cad9c = pvVar5;
  }
  local_4 = 0xffffffff;
  local_60 = DAT_006cad9c;
  if ((*(int *)((int)DAT_006cad9c + 4) == 0) ||
     (iVar6 = *(int *)((int)DAT_006cad9c + 8) - *(int *)((int)DAT_006cad9c + 4) >> 2, iVar6 == 0)) {
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
  }
  else {
    if ((param_2 < 0) || (iVar6 == param_2 || iVar6 - param_2 < 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 - param_2;
    }
    while( true ) {
      pvVar5 = local_60;
      uVar10 = 0xffffffff;
      if (*(int *)((int)local_60 + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)local_60 + 8) - *(int *)((int)local_60 + 4) >> 2;
      }
      if (iVar7 <= iVar6) break;
      if ((iVar6 < 0) || (iVar7 = FUN_0044e4c0(), iVar7 <= iVar6)) {
        FUN_00409810(&DAT_006b3f70,&param_2);
        local_4 = 2;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      puStack_64 = &DAT_0064a3b4;
      puVar2 = *(undefined1 **)(*(int *)(*(int *)((int)pvVar5 + 4) + iVar6 * 4) + 0xc);
      if (puVar2 != (undefined1 *)0x0) {
        puStack_64 = puVar2;
      }
      if ((iVar6 < 0) || (iVar7 = FUN_0044e4c0(), iVar7 <= iVar6)) {
        auStack_5c[0] = param_1;
        FUN_004040a0(0);
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4 = 3;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_5c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar9 = *(undefined4 *)(*(int *)(*(int *)((int)pvVar5 + 4) + iVar6 * 4) + 4);
      if ((iVar6 < 0) || (iVar7 = FUN_0044e4c0(), iVar7 <= iVar6)) {
        auStack_4c[0] = param_1;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4 = 4;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_4c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar3 = *(int **)(*(int *)((int)pvVar5 + 4) + iVar6 * 4);
      pcVar8 = _strrchr((char *)*piVar3,0x5c);
      if (((pcVar8 == (char *)0x0) &&
          (pcVar8 = _strrchr((char *)*piVar3,0x2f), pcVar8 == (char *)0x0)) &&
         (pcVar8 = _strrchr((char *)*piVar3,0x3a), pcVar8 == (char *)0x0)) {
        pcVar8 = (char *)*piVar3;
      }
      else {
        pcVar8 = pcVar8 + 1;
      }
      uVar9 = FUN_005ae390(auStack_1c,s__s___d____s_006a9050,pcVar8,uVar9,puStack_64);
      local_4 = 5;
      FUN_0045db40(uVar9,0,0xffffffff);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      iVar6 = iVar6 + 1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

