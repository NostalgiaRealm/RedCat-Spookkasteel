/*
 * FUN_00427f10 at 00427f10
 * undefined FUN_00427f10(void)
 * Address ranges: 00427f10-00428180
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 23 for .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 23 for
   .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00427f10(int *param_1,undefined4 param_2,int **param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int **ppiStack_44;
  int *piStack_2c;
  undefined1 auStack_28 [12];
  char acStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00622ca0;
  pvStack_c = ExceptionList;
  ppiStack_44 = (int **)0x427f36;
  ExceptionList = &pvStack_c;
  cVar4 = (**(code **)(*param_1 + 0xa8))();
  if (cVar4 == '\0') {
    ppiStack_44 = (int **)0x0;
    acStack_1c[0] = (char)param_3;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    ppiStack_44 = (int **)0x1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar4 = FUN_00401940(uVar8);
    if (cVar4 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = puStack_18;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)puStack_18 + uVar8) = 0;
      uStack_14 = uVar8;
    }
    ppiStack_44 = (int **)acStack_1c;
    uStack_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_HasActor___0068f8fc,s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,
                                  0xab);
    (*pcVar5)();
    uStack_4 = 0xffffffff;
    ppiStack_44 = (int **)0x1;
    FUN_004040a0();
  }
  if (param_1[0x69] == 0) {
    ppiStack_44 = (int **)0x428131;
    FUN_004282e0();
    ppiStack_44 = (int **)0x428138;
    FUN_00595470();
    ppiStack_44 = (int **)0x42813f;
    FUN_00556560();
    ppiStack_44 = (int **)0x428146;
    cVar4 = FUN_0059b1f0();
    if (cVar4 != '\0') {
      iVar1 = *param_1;
      ppiStack_44 = param_3;
      FUN_004282e0();
      FUN_00595470();
      uVar7 = FUN_0059bd20();
      (**(code **)(iVar1 + 0x74))(uVar7);
    }
  }
  else {
    ppiStack_44 = &piStack_2c;
    piVar6 = (int *)FUN_004237d0();
    iVar1 = param_1[0x69];
    iVar2 = *piVar6;
    if ((piStack_2c != (int *)0x0) &&
       (iVar3 = piStack_2c[5], piStack_2c[5] = iVar3 + -1, iVar3 + -1 == 0)) {
      ppiStack_44 = (int **)0x0;
      FUN_005abfc0();
    }
    if (iVar1 == iVar2) {
      ppiStack_44 = param_3;
      (**(code **)(*param_1 + 0x70))();
    }
    else {
      ppiStack_44 = (int **)param_1[0x69];
      piStack_2c = (int *)&ppiStack_44;
      if (ppiStack_44 != (int **)0x0) {
        ppiStack_44[5] = (int *)((int)ppiStack_44[5] + 1);
      }
      piVar6 = (int *)FUN_0040b060();
      piStack_2c = piVar6;
      if (piVar6 == (int *)0x0) {
        acStack_1c[0] = (char)param_3;
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8 - 1;
        ppiStack_44 = (int **)0x1;
        puStack_18 = (undefined4 *)0x0;
        uStack_14 = 0;
        uStack_10 = 0;
        cVar4 = FUN_00401940(uVar8);
        if (cVar4 != '\0') {
          puVar10 = (undefined4 *)&DAT_006b3f70;
          puVar12 = puStack_18;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          *(undefined1 *)((int)puStack_18 + uVar8) = 0;
          piVar6 = piStack_2c;
          uStack_14 = uVar8;
        }
        ppiStack_44 = (int **)acStack_1c;
        uStack_4 = 1;
        pcVar5 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                      s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0xba);
        (*pcVar5)();
        uStack_4 = 0xffffffff;
        if (puStack_18 != (undefined4 *)0x0) {
          ppiStack_44 = (int **)((int)puStack_18 + -1);
          cVar4 = *(char *)((int)puStack_18 + -1);
          if ((cVar4 == '\0') || (cVar4 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)ppiStack_44 = cVar4 + -1;
          }
        }
      }
      iVar1 = *param_1;
      ppiStack_44 = param_3;
      uVar7 = (**(code **)(*piVar6 + 0x48))(auStack_28);
      (**(code **)(iVar1 + 0x74))(uVar7);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

