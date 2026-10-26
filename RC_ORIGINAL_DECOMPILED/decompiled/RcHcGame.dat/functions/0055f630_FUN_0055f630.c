/*
 * FUN_0055f630 at 0055f630
 * undefined FUN_0055f630(void)
 * Address ranges: 0055f630-0055f986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0055f630(int param_1,undefined4 *param_2,char *param_3,char *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f920;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00517430();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    uVar6 = FUN_005ae390(local_2c,s_CAdamEngine__AutoSelectBestMode__006a3294,param_3,param_4,
                         &DAT_006ba7ec + param_1 * 0xb7c);
    local_4 = 0;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((&DAT_006bb35d)[param_1 * 0xb7c] == '\0') {
    param_3 = param_4;
  }
  *param_2 = 0xffffffff;
  cVar2 = FUN_0055f990(param_1,param_2,param_3);
  if (cVar2 == '\0') {
    param_4 = (char *)0xffffffff;
    iVar5 = 0;
    ppuVar11 = &PTR_s_320x200_006a25d8;
    do {
      iVar3 = __strcmpi(param_3,*ppuVar11);
      if (iVar3 == 0) {
        param_4 = (char *)iVar5;
        if (iVar5 != -1) goto LAB_0055f7e7;
        break;
      }
      ppuVar11 = ppuVar11 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar11 < 0x6a2608);
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      puVar14 = local_28;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar9) = 0;
      local_24 = uVar9;
    }
    local_4 = 1;
    pcVar7 = (code *)FUN_005a07f0(s_startIndex_____1_006a3280,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x3cf,local_2c);
    (*pcVar7)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
LAB_0055f7e7:
    iVar5 = 1;
    param_3 = (char *)((int)param_4 + 0x77);
    while( true ) {
      puVar1 = (&PTR_s_320x200_006a25d8)[(int)param_3 % 0xc];
      iVar8 = FUN_00517430();
      iVar3 = *(int *)(iVar8 + 100);
      if (iVar3 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar8 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar4);
        *(int *)(iVar8 + 100) = iVar3;
      }
      if (iVar3 != 0) {
        uVar6 = FUN_005ae390(local_2c,s_CAdamEngine__AutoSelectBestMode__006a3244,puVar1);
        local_4 = 2;
        FUN_005aff00(uVar6);
        local_4 = 0xffffffff;
        if (local_28 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)local_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)local_28 + -1));
          }
          else {
            *(char *)((int)local_28 + -1) = cVar2 + -1;
          }
        }
        local_28 = (undefined4 *)0x0;
        local_24 = 0;
        uStack_20 = 0;
      }
      cVar2 = FUN_0055f990(param_1,param_2,puVar1);
      if (cVar2 != '\0') break;
      puVar1 = (&PTR_s_320x200_006a25d8)[((int)param_4 + 0x78 + iVar5) % 0xc];
      iVar8 = FUN_00517430();
      iVar3 = *(int *)(iVar8 + 100);
      if (iVar3 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar8 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar4);
        *(int *)(iVar8 + 100) = iVar3;
      }
      if (iVar3 != 0) {
        uVar6 = FUN_005ae390(auStack_1c,s_CAdamEngine__AutoSelectBestMode__006a3244,puVar1);
        local_4 = 3;
        FUN_005aff00(uVar6);
        local_4 = 0xffffffff;
        if (iStack_18 != 0) {
          cVar2 = *(char *)(iStack_18 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar2 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      cVar2 = FUN_0055f990(param_1,param_2,puVar1);
      if (cVar2 != '\0') {
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = iVar5 + 1;
      param_3 = (char *)((int)param_3 + -1);
      if (0xc < iVar5) {
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

