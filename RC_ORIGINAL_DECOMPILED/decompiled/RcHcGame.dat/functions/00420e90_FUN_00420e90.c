/*
 * FUN_00420e90 at 00420e90
 * undefined FUN_00420e90(void)
 * Address ranges: 00420e90-00420ff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00420e90(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int local_38;
  undefined1 local_34 [16];
  float afStack_24 [5];
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006221d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0049c570();
  piVar3 = (int *)FUN_00421000(&local_38);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_34);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = FUN_0059bd20();
  pcVar6 = *(char **)(iVar5 + 4);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  iVar5 = __strcmpi(pcVar6,s_tree_act_0068f640);
  local_4 = 0xffffffff;
  if ((local_38 != 0) &&
     (iVar8 = *(int *)(local_38 + 0x14) + -1, *(int *)(local_38 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  if (iVar5 == 0) {
    fVar1 = *(float *)(param_1 + 0x150);
    pfVar9 = (float *)(param_1 + 0x11c);
    pfVar10 = afStack_24;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    afStack_24[0] = fVar1 * -30.0;
    afStack_24[3] = fVar1 * 30.0;
    afStack_24[2] = *(float *)(param_1 + 0x158) * -30.0;
    fStack_10 = *(float *)(param_1 + 0x158) * 30.0;
    pfVar9 = afStack_24;
    pfVar10 = (float *)(param_1 + 0x11c);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

