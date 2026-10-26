/*
 * FUN_005bc4b0 at 005bc4b0
 * undefined FUN_005bc4b0(void)
 * Address ranges: 005bc4b0-005bc766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc4b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  char acStack_614 [512];
  undefined4 uStack_414;
  char acStack_410 [512];
  undefined4 uStack_210;
  char acStack_20c [512];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = FUN_005bb9e0(param_1);
  if (iVar3 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x575,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x33668) != 0) {
    FUN_005cf220(3,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x57b,&DAT_006b3f70,0);
    return 0;
  }
  *(undefined4 **)(param_1 + 0x33670) = param_2;
  *(undefined4 **)(param_1 + 0x33674) = param_3;
  hModule = (HMODULE)FUN_005bc3e0(param_2 + 0x81,*(undefined4 *)(param_1 + 0x39054));
  *(HMODULE *)(param_1 + 0x3366c) = hModule;
  if (hModule == (HMODULE)0x0) {
    FUN_005cf220(4,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x586,&DAT_006b3f70,0);
    return 0;
  }
  pFVar4 = GetProcAddress(hModule,s_DriverHook_006a959c);
  if (pFVar4 == (FARPROC)0x0) {
    uVar9 = 0x595;
  }
  else {
    piVar1 = (int *)(param_1 + 0x33678);
    iVar3 = (*pFVar4)(piVar1);
    if (iVar3 == 0) {
      *piVar1 = 0;
      uVar9 = 0x59c;
    }
    else {
      iVar3 = *piVar1;
      if ((*(int *)(iVar3 + 4) == 100) && (*(int *)(iVar3 + 8) == 3)) {
        uVar5 = 0xffffffff;
        *(code **)(iVar3 + 0xac) = FUN_005d2020;
        *(undefined **)(iVar3 + 0xb0) = &DAT_00722860;
        pcVar7 = (char *)(param_1 + 0x34ed0);
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = acStack_614;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uStack_414 = *param_2;
        uVar5 = 0xffffffff;
        pcVar7 = (char *)(param_2 + 1);
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = acStack_410;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        uVar9 = param_3[0x81];
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uStack_210 = *param_3;
        uStack_4 = *(undefined4 *)(param_1 + 0x34ecc);
        uStack_8 = param_3[0x82];
        uVar5 = 0xffffffff;
        pcVar7 = (char *)(param_3 + 1);
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = acStack_20c;
        uStack_c = uVar9;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        iVar3 = (**(code **)(iVar3 + 0x20))();
        if (iVar3 == 0) {
          FUN_005cf220(2,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x5bd,
                       &DAT_006b3f70,0);
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x5be,
                       &DAT_006b3f70,0);
          return 0;
        }
        *(undefined4 *)(param_1 + 0x33668) = 1;
        FUN_005bd000(param_1);
        *(undefined4 *)(param_1 + 0x3904c) = 1;
        return 1;
      }
      uVar9 = 0x5a5;
    }
  }
  FUN_005cf220(6,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,uVar9,&DAT_006b3f70,0);
  return 0;
}

