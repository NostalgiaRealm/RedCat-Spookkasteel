/*
 * FUN_004b9060 at 004b9060
 * undefined FUN_004b9060(void)
 * Address ranges: 004b9060-004b91ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b9060(int *param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062f238;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    cVar1 = FUN_004fb940();
    if (cVar1 == '\0') {
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_18 = *puVar6;
          puVar6 = puVar6 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190();
      }
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006972a8,
                                    0x2c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0();
    }
    if ((char)param_1[0x59] != '\0') {
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      FUN_004b9a20();
    }
    FUN_004b95c0();
    (**(code **)(*param_1 + 0x54))();
  }
  if (param_2 != 0) {
    FUN_004fb9f0();
    if ((char)param_1[0x59] != '\0') {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      FUN_004b9de0();
    }
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

