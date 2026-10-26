/*
 * FUN_004ff120 at 004ff120
 * undefined FUN_004ff120(void)
 * Address ranges: 004ff120-004ff231
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ff120(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00635943;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f4cc;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (param_1[5] != 0) {
    if (param_1[5] == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    FUN_004ff490();
    iVar2 = param_1[5];
    local_4._0_1_ = 3;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      param_1[5] = 0;
    }
  }
  iVar2 = param_1[5];
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    param_1[5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

