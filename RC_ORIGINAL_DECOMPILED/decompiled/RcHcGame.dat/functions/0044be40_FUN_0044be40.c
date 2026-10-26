/*
 * FUN_0044be40 at 0044be40
 * undefined FUN_0044be40(void)
 * Address ranges: 0044be40-0044bf4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0044be40(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006257d0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x198) != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x198) == 0) {
      ExceptionList = &local_c;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar2 = FUN_00401940(uVar5,1);
      if (cVar2 != '\0') {
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
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iVar1 = *(int *)(param_1 + 0x198);
    local_4 = 1;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

