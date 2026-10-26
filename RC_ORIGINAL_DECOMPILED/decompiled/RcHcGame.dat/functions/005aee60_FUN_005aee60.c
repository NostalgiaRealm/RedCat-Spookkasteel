/*
 * FUN_005aee60 at 005aee60
 * undefined FUN_005aee60(void)
 * Address ranges: 005aee60-005aefae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005aee60(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645fab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cad9c == (undefined1 *)0x0) {
    ExceptionList = &pvStack_c;
    if (DAT_006cada0 != '\0') {
      local_1c[0] = (undefined1)param_1;
      ExceptionList = &pvStack_c;
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
        puVar9 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)local_18 + uVar5) = 0;
        local_14 = uVar5;
      }
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s___m_Created_006a178c,
                                    s_D__Work_RCHorror_AdamSource_Davi_006a9024,0x30,local_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = (undefined1)param_1;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      local_4 = 2;
      FUN_00514e80(0);
      *(undefined4 *)(puVar3 + 0x10) = 0;
    }
    DAT_006cada0 = '\x01';
    DAT_006cad9c = puVar3;
  }
  local_4 = 0xffffffff;
  if (*(int *)(DAT_006cad9c + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(DAT_006cad9c + 8) - *(int *)(DAT_006cad9c + 4) >> 2;
  }
  FUN_005aee20(param_1,iVar4);
  ExceptionList = pvStack_c;
  return param_1;
}

