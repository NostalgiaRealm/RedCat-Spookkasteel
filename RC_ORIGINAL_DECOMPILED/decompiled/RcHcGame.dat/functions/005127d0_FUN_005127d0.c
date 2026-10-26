/*
 * FUN_005127d0 at 005127d0
 * undefined FUN_005127d0(void)
 * Address ranges: 005127d0-005129d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005127d0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006376cb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  if (*(char *)(param_1 + 0x1db) == '\0') {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_00511810();
    if (iVar2 == -1) {
      pvVar3 = operator_new(0x4c);
      local_4._0_1_ = 1;
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        if (param_3 != 0) {
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
        }
        iVar2 = FUN_0050e0a0(param_2);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == 0) {
        local_1c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar6 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar1 = FUN_00401940(uVar6);
        if (cVar1 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar10 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_00404190();
        }
        local_4._0_1_ = 2;
        pcVar4 = (code *)FUN_005a07f0(s_portrait____0_0069ef28,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x2b0);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      FUN_004f15f0(*(undefined4 *)(param_1 + 0x180));
    }
    else {
      if (param_3 != 0) {
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_005147c0(iVar2);
      FUN_005129e0();
    }
  }
  else {
    ExceptionList = &pvStack_c;
    uVar5 = FUN_005ae390(local_1c,s_Trying_to_load_portrait___s__aft_0069eef4);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004c43e0(uVar5);
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar2 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

