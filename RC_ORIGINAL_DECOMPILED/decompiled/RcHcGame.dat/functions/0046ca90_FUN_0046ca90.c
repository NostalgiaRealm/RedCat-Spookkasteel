/*
 * FUN_0046ca90 at 0046ca90
 * undefined FUN_0046ca90(void)
 * Address ranges: 0046ca90-0046cb7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046ca90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627e80;
  local_c = ExceptionList;
  iVar2 = param_2 * 3 + 0x102;
  iVar5 = *(int *)(param_1 + iVar2 * 8);
  piVar1 = (int *)(param_1 + iVar2 * 8);
  if (iVar5 != 0) {
    ExceptionList = &local_c;
    if (iVar5 == 0) {
      local_1c[0] = (undefined1)param_2;
      ExceptionList = &local_c;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iVar2 = *piVar1;
    local_4 = 1;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar5;
      if (iVar5 == 0) {
        FUN_005abfc0(0);
      }
      *piVar1 = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

