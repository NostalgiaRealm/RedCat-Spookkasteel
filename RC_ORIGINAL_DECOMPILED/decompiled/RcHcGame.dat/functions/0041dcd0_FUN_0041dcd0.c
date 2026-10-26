/*
 * FUN_0041dcd0 at 0041dcd0
 * undefined FUN_0041dcd0(void)
 * Address ranges: 0041dcd0-0041de5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0041dd8c) */
/* WARNING: Removing unreachable block (ram,0x0041dd96) */
/* WARNING: Removing unreachable block (ram,0x0041dda0) */
/* WARNING: Removing unreachable block (ram,0x0041dd9a) */

void __thiscall FUN_0041dcd0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00621d68;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_0042aa20();
  if (param_2 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_0041df00();
  if (*(int *)(param_1 + 0x244) == 0) {
    iVar3 = -1;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Effect_0068e4dc,s_D__Work_RCHorror_RCSource_RcJest_0068f410,
                                  0x43);
    (*pcVar2)();
    local_4._0_1_ = 0;
  }
  if (param_2 == 0) {
    FUN_004040a0();
    iVar3 = -1;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0();
  }
  FUN_004f41c0();
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_00422880();
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

