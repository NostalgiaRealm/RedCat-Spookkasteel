/*
 * FUN_00429440 at 00429440
 * undefined FUN_00429440(void)
 * Address ranges: 00429440-004295fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00429440(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  int **ppiStack_5c;
  int *local_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [4];
  undefined4 *local_24;
  uint local_20;
  undefined4 local_1c;
  int *apiStack_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622e78;
  local_c = ExceptionList;
  ppiStack_5c = &local_44;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_004237d0();
  iVar1 = *piVar4;
  if ((local_44 != (int *)0x0) && (iVar2 = local_44[5], local_44[5] = iVar2 + -1, iVar2 + -1 == 0))
  {
    ppiStack_5c = (int **)0x0;
    FUN_005abfc0();
  }
  if (iVar1 != 0) {
    local_44 = (int *)&ppiStack_5c;
    FUN_004237d0(&ppiStack_5c);
    piVar4 = (int *)FUN_0040b060();
    local_44 = piVar4;
    if (piVar4 == (int *)0x0) {
      local_24 = (undefined4 *)0x0;
      local_20 = 0;
      local_1c = 0;
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      ppiStack_5c = (int **)0x1;
      uVar7 = ~uVar7 - 1;
      local_28[0] = iVar1 == 0;
      cVar3 = FUN_00401940(uVar7);
      if (cVar3 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_24;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_24 + uVar7) = 0;
        piVar4 = local_44;
        local_20 = uVar7;
      }
      ppiStack_5c = (int **)local_28;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                    s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x24c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        ppiStack_5c = (int **)((int)local_24 + -1);
        cVar3 = *(char *)((int)local_24 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)ppiStack_5c = cVar3 + -1;
        }
      }
    }
    ppiStack_5c = (int **)local_28;
    puVar6 = (undefined4 *)FUN_004236b0();
    uStack_34 = *puVar6;
    uStack_30 = puVar6[1];
    uStack_2c = puVar6[2];
    ppiStack_5c = apiStack_18;
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x48))();
    local_44 = (int *)*puVar6;
    piStack_40 = (int *)puVar6[1];
    uStack_3c = puVar6[2];
    (**(code **)(*param_1 + 0x9c))();
    ppiStack_5c = &piStack_40;
    fVar11 = (float10)FUN_005b1600(&uStack_34);
    piVar4 = (int *)(float)fVar11;
    ppiStack_5c = (int **)0x0;
    local_44 = piVar4;
    FUN_004282e0(piVar4);
    FUN_00595ec0(piVar4);
  }
  ExceptionList = local_c;
  return;
}

