/*
 * FUN_005b2980 at 005b2980
 * undefined FUN_005b2980(void)
 * Address ranges: 005b2980-005b2ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005b2a35) */
/* WARNING: Removing unreachable block (ram,0x005b2a3d) */
/* WARNING: Removing unreachable block (ram,0x005b2a47) */
/* WARNING: Removing unreachable block (ram,0x005b2a41) */

undefined4 FUN_005b2980(int param_1,undefined1 **param_2)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puStack_38;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064637b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)param_2 + 8) == 0) {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    puVar6 = (undefined1 *)(~uVar5 - 1);
    local_18 = (undefined4 *)0x0;
    ExceptionList = &pvStack_c;
    puStack_38 = puVar6;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_18 = *puVar7;
        puVar7 = puVar7 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      puStack_38 = (undefined1 *)0x5b2a09;
      FUN_00404190();
    }
    local_4._0_1_ = 1;
    puStack_38 = (undefined1 *)0x5c;
    pcVar2 = (code *)FUN_005a07f0(s_a_GroupName_length____0_006a937c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a9394);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
  }
  puStack_38 = (undefined1 *)0x5b2a63;
  pvVar3 = operator_new(0x30);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    puStack_38 = (undefined1 *)param_2;
    param_2 = &puStack_38;
    FUN_00449760(&param_1);
    uVar4 = FUN_005b2ae0();
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar9 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar9, iVar9 == 0)) {
    puStack_38 = (undefined1 *)0x5b2abf;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

