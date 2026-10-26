/*
 * FUN_00427d30 at 00427d30
 * undefined FUN_00427d30(void)
 * Address ranges: 00427d30-00427ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00427d30(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  int *piStack_38;
  int local_24;
  int *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622c80;
  local_c = ExceptionList;
  if ((param_2 != 0) && (0 < param_1[0x5e])) {
    local_20 = param_1;
    if ((char)param_1[0x5c] == '\0') {
      ExceptionList = &local_c;
      piStack_38 = param_1;
      FUN_004237d0(&piStack_38);
      iVar4 = FUN_0040b060();
      iVar8 = local_24;
    }
    else {
      piStack_38 = &local_24;
      ExceptionList = &local_c;
      piVar2 = (int *)FUN_004042e0();
      local_4 = 0;
      if (*piVar2 == 0) {
        piStack_38 = (int *)0x0;
        local_1c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        piStack_38 = (int *)0x1;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        piVar6 = (int *)(~uVar5 - 1);
        cVar1 = FUN_00401940(piVar6);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar5 = (uint)piVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *local_18 = *puVar7;
            puVar7 = puVar7 + 1;
            local_18 = local_18 + 1;
          }
          for (uVar5 = (uint)piVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)local_18 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            local_18 = (undefined4 *)((int)local_18 + 1);
          }
          piStack_38 = piVar6;
          FUN_00404190();
        }
        piStack_38 = (int *)local_1c;
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_38 = (int *)0x1;
        FUN_004040a0();
      }
      local_4 = 0xffffffff;
      iVar4 = *(int *)(*piVar2 + 0x360);
      iVar8 = 0;
      if (local_24 != 0) {
        iVar8 = *(int *)(local_24 + 0x14) + -1;
        *(int *)(local_24 + 0x14) = iVar8;
        if (iVar8 == 0) {
          piStack_38 = (int *)0x0;
          FUN_005abfc0();
        }
        local_24 = 0;
        iVar8 = local_24;
      }
    }
    local_24 = iVar8;
    if (param_2 == iVar4) {
      piStack_38 = (int *)0x427e8f;
      FUN_004288d0();
    }
  }
  ExceptionList = local_c;
  return;
}

