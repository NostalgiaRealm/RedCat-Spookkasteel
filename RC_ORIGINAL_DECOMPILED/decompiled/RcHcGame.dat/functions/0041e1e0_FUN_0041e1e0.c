/*
 * FUN_0041e1e0 at 0041e1e0
 * undefined FUN_0041e1e0(void)
 * Address ranges: 0041e1e0-0041e573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0041e1e0(int *param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  float10 fVar13;
  int *piStack_68;
  int local_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621de8;
  pvStack_c = ExceptionList;
  if ((param_1[0x8d] == 0) ||
     (ExceptionList = &pvStack_c, (param_1[0x8e] - param_1[0x8d]) / 0xc < 1)) {
    piStack_68 = (int *)0x0;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    piStack_68 = (int *)0x1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_38;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_38 + uVar6) = 0;
      local_34 = uVar6;
    }
    piStack_68 = &local_3c;
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Points_Count___>_0_0068f490,
                                  s_D__Work_RCHorror_RCSource_RcJest_0068f410,0xa7);
    (*pcVar2)();
    local_4 = 0xffffffff;
    piStack_68 = (int *)0x1;
    FUN_004040a0();
  }
  iVar4 = param_1[0x90];
  piStack_68 = &local_50;
  piVar8 = (int *)0x0;
  piVar3 = (int *)FUN_004237d0();
  bVar12 = *piVar3 != 0;
  if ((local_50 != 0) &&
     (iVar10 = *(int *)(local_50 + 0x14) + -1, *(int *)(local_50 + 0x14) = iVar10, iVar10 == 0)) {
    piStack_68 = (int *)0x0;
    FUN_005abfc0();
  }
  if (bVar12) {
    puStack_4c = &piStack_68;
    FUN_004237d0(&piStack_68);
    piVar8 = (int *)FUN_0040b060();
  }
  local_50 = 0;
  if (iVar4 == param_1[0x90]) {
    do {
      if (4 < local_50) break;
      if (param_1[0x8d] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (param_1[0x8e] - param_1[0x8d]) / 0xc;
      }
      piStack_68 = (int *)0x41e365;
      iVar4 = FUN_0060a4a0();
      iVar4 = iVar4 % iVar10;
      if (piVar8 != (int *)0x0) {
        piStack_68 = &local_3c;
        puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x48))();
        uStack_48 = *puVar5;
        uStack_44 = puVar5[1];
        uStack_40 = puVar5[2];
        if (iVar4 < 0) {
LAB_0041e3c0:
          piStack_68 = (int *)0x0;
          auStack_1c[0] = bVar12;
          FUN_004040a0();
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_006b3f70;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          piStack_68 = (int *)(~uVar6 - 1);
          FUN_004040f0(&DAT_006b3f70);
          piStack_68 = (int *)auStack_1c;
          local_4 = 1;
          pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97);
          (*pcVar2)();
          local_4 = 0xffffffff;
          piStack_68 = (int *)0x1;
          FUN_004040a0();
        }
        else {
          if (param_1[0x8d] == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (param_1[0x8e] - param_1[0x8d]) / 0xc;
          }
          if (iVar10 <= iVar4) goto LAB_0041e3c0;
        }
        piStack_68 = (int *)0x41e43f;
        fVar13 = (float10)FUN_005b30a0();
        puStack_4c = (undefined4 *)(float)fVar13;
        piStack_68 = (int *)0x41e44a;
        fVar13 = (float10)FUN_0041dee0();
        if ((float10)(float)puStack_4c < fVar13) {
          iVar4 = param_1[0x90];
        }
      }
      local_50 = local_50 + 1;
    } while (iVar4 == param_1[0x90]);
    if (iVar4 == param_1[0x90]) goto LAB_0041e55b;
  }
  if (iVar4 < 0) {
LAB_0041e4b0:
    piStack_68 = (int *)0x0;
    auStack_2c[0] = bVar12;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    piStack_68 = (int *)0x1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    piVar3 = (int *)(~uVar6 - 1);
    puStack_4c = piVar3;
    cVar1 = FUN_00401940(piVar3);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = (uint)piVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puStack_28 = *puVar5;
        puVar5 = puVar5 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar6 = (uint)piVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      piStack_68 = piVar3;
      FUN_00404190();
    }
    piStack_68 = (int *)auStack_2c;
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97);
    (*pcVar2)();
    local_4 = 0xffffffff;
    piStack_68 = (int *)0x1;
    FUN_004040a0();
  }
  else {
    if (param_1[0x8d] == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (param_1[0x8e] - param_1[0x8d]) / 0xc;
    }
    if (iVar10 <= iVar4) goto LAB_0041e4b0;
  }
  piStack_68 = (int *)(param_1[0x8d] + iVar4 * 0xc);
  (**(code **)(*param_1 + 0x4c))();
LAB_0041e55b:
  param_1[0x90] = iVar4;
  ExceptionList = pvStack_c;
  return;
}

