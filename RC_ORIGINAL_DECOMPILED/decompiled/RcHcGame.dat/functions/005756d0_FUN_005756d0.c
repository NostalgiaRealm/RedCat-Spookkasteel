/*
 * FUN_005756d0 at 005756d0
 * undefined FUN_005756d0(void)
 * Address ranges: 005756d0-00575853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005756d0(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  int local_24;
  int *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641680;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x174) != 0) {
    ExceptionList = &pvStack_c;
    local_20 = (int *)FUN_004042e0(&local_24);
    local_4 = 0;
    if (*local_20 == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *local_18 = *puVar7;
          puVar7 = puVar7 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uVar13 = 0;
    pTVar12 = &CAdamActor::RTTI_Type_Descriptor;
    pTVar11 = &CAdamGO::RTTI_Type_Descriptor;
    uVar10 = 0;
    uVar3 = FUN_004f4960(param_1 + 0x16c);
    iVar4 = FUN_0060a6f2(uVar3,uVar10,pTVar11,pTVar12,uVar13);
    local_4 = 0xffffffff;
    if (local_24 != 0) {
      iVar9 = *(int *)(local_24 + 0x14) + -1;
      *(int *)(local_24 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      local_24 = 0;
    }
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x148) == 1)) {
      FUN_005042c0(param_1,0);
      ExceptionList = pvStack_c;
      return;
    }
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_00505400(&DAT_006b9718);
  }
  ExceptionList = pvStack_c;
  return;
}

