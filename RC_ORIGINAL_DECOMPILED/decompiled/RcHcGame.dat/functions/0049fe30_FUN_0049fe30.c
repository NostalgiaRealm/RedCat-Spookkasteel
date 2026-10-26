/*
 * FUN_0049fe30 at 0049fe30
 * undefined FUN_0049fe30(void)
 * Address ranges: 0049fe30-0049ff93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049fe30(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062cddf;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_0049ffa0(&param_2,param_2);
  iVar7 = *piVar2;
  iVar6 = 0;
  if ((iVar7 != 0) && (iVar6 = iVar7, iVar7 != 0)) {
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
  }
  local_4._0_1_ = 1;
  if ((param_2 != 0) &&
     (iVar7 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  if (iVar6 == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_result_IsNotNull___00695234,
                                  s_D__Work_RCHorror_AdamSource_Adam_00695128,0x4a,local_1c);
    (*pcVar3)();
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
  *param_1 = iVar6;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((iVar6 != 0) &&
     (iVar7 = *(int *)(iVar6 + 0x14) + -1, *(int *)(iVar6 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

