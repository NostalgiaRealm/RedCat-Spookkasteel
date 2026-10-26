/*
 * FUN_00412cb0 at 00412cb0
 * undefined FUN_00412cb0(void)
 * Address ranges: 00412cb0-00412dd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00412cb0(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620f78;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x2c);
  if ((iVar3 != 2) && (iVar3 != 3)) {
    local_1c[0] = param_2._0_1_;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Entity_SubType____2____m_Entit_0068ea18,
                                  s_D__Work_RCHorror_RCSource_RcShoo_0068ebb0,0xf0,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar3 = (*(int *)(*(int *)(param_1 + 0x1a0) + 0x2c) + -2) * 0x10;
  *param_2 = *(undefined4 *)(&DAT_0064b008 + iVar3);
  param_2[1] = *(undefined4 *)(&DAT_0064b00c + iVar3);
  param_2[2] = *(undefined4 *)(&DAT_0064b010 + iVar3);
  param_2[3] = *(undefined4 *)(&DAT_0064b014 + iVar3);
  ExceptionList = pvStack_c;
  return;
}

