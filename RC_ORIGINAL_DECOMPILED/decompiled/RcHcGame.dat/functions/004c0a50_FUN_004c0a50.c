/*
 * FUN_004c0a50 at 004c0a50
 * undefined FUN_004c0a50(void)
 * Address ranges: 004c0a50-004c0d1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004c0a50(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062feb8;
  local_c = ExceptionList;
  if (DAT_006b9168 == '\0') {
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    ExceptionList = &local_c;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar11 = *(undefined4 **)(param_2 + 4);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar6);
    }
    param_2 = 0;
    iVar8 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 6;
      }
      if (iVar3 <= param_2) break;
      if ((iVar8 < 0) || (iVar3 = FUN_004c4a60(), iVar3 <= param_2)) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 0;
        pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(iVar8 + 0x14 + *(int *)(param_1 + 0x4c)) != 0) {
        if ((iVar8 < 0) || (iVar3 = FUN_004c4a60(), iVar3 <= param_2)) {
          auStack_2c[0] = (undefined1)param_2;
          FUN_004040a0(0);
          uVar6 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
          local_4 = 1;
          pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
          (*pcVar4)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        FUN_0045db40(*(int *)(param_1 + 0x4c) + 0xc + iVar8,0,0xffffffff);
        if (-*(int *)(iVar1 + 8) - 1U < 2) {
          FUN_005fe5fb();
        }
        iVar3 = *(int *)(iVar1 + 8) + 1;
        cVar2 = FUN_00401940(iVar3,0);
        if (cVar2 != '\0') {
          *(undefined1 *)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8)) = 10;
          FUN_00404190(iVar3);
        }
      }
      param_2 = param_2 + 1;
      iVar8 = iVar8 + 0x40;
    }
    uVar5 = FUN_005ae390(local_1c,s_Build___s___s_00697d14,s_Nov_21_2000_00697d24,
                         s_16_15_46_00697d30);
    local_4 = 2;
    FUN_0045db40(uVar5,0,0xffffffff);
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_00693460;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    ExceptionList = &local_c;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar9 = &DAT_00693460;
      puVar11 = *(undefined4 **)(param_2 + 4);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(uint *)(param_2 + 8) = uVar6;
      *(undefined1 *)(*(int *)(param_2 + 4) + uVar6) = 0;
    }
  }
  DAT_006b9168 = DAT_006b9168 == '\0';
  ExceptionList = local_c;
  return 1;
}

