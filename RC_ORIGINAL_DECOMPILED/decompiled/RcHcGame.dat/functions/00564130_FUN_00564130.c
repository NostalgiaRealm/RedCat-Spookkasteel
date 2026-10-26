/*
 * FUN_00564130 at 00564130
 * undefined FUN_00564130(void)
 * Address ranges: 00564130-005642dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00564130(int param_1,undefined1 **param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar7 = (int)param_2;
  puStack_8 = &LAB_0063fe98;
  local_c = ExceptionList;
  if ((undefined1 **)*(int *)(param_1 + 0x19c) != param_2) {
    ExceptionList = &local_c;
    *(undefined1 ***)(param_1 + 0x19c) = param_2;
    param_2 = (undefined1 **)0x0;
    iVar4 = *(int *)(param_1 + 0x1a4);
    local_4 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x14) + -1;
      *(int *)(iVar4 + 0x14) = iVar2;
      if (iVar2 == 0) {
        puStack_2c = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    local_4 = 0xffffffff;
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
    }
    else {
      puStack_2c = *(undefined1 **)(param_1 + 0x19c);
      piVar3 = (int *)FUN_0050d730(&param_2);
      iVar7 = *(int *)(param_1 + 0x1a4);
      local_4 = 1;
      if (iVar7 != *piVar3) {
        if ((iVar7 != 0) &&
           (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0)) {
          puStack_2c = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        iVar7 = *piVar3;
        *(int *)(param_1 + 0x1a4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
        }
      }
      local_4 = 0xffffffff;
      if ((param_2 != (undefined1 **)0x0) &&
         (iVar7 = *(int *)((int)param_2 + 0x14) + -1, *(int *)((int)param_2 + 0x14) = iVar7,
         iVar7 == 0)) {
        puStack_2c = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      if (*(int *)(param_1 + 0x1a4) == 0) {
        puStack_2c = (undefined1 *)0x0;
        local_1c[0] = param_2._0_1_;
        FUN_004040a0();
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        puStack_2c = (undefined1 *)(~uVar6 - 1);
        FUN_004040f0(&DAT_006b3f70);
        puStack_2c = local_1c;
        local_4 = 2;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar5)();
        local_4 = 0xffffffff;
        puStack_2c = (undefined1 *)0x1;
        FUN_004040a0();
      }
      puStack_2c = (undefined1 *)0x56428e;
      cVar1 = FUN_0050b2d0();
      if (cVar1 == '\0') {
        puStack_2c = *(undefined1 **)(param_1 + 0x1a4);
        param_2 = &puStack_2c;
        if (puStack_2c != (undefined1 *)0x0) {
          *(int *)(puStack_2c + 0x14) = *(int *)(puStack_2c + 0x14) + 1;
        }
        FUN_00560630();
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

