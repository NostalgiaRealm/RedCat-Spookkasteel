/*
 * FUN_005fb5e0 at 005fb5e0
 * undefined FUN_005fb5e0(void)
 * Address ranges: 005fb5e0-005fb714;005fb7da-005fb801
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005fb5e0(int *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  facet *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined **local_40 [3];
  uint local_34;
  undefined4 local_30;
  char local_2c;
  int *local_28;
  void *local_24;
  facet *local_20;
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00648ac3;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_18 = param_1;
  local_2c = FUN_005e6020();
  local_8 = 0;
  uVar6 = 0;
  local_28 = param_1;
  if (local_2c != '\0') {
    FUN_005e7380(&local_20);
    local_8._0_1_ = 2;
    uVar2 = FUN_005e7360();
    piVar3 = (int *)FUN_005feb94(uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_005febd3();
      if (cVar1 == '\0') {
        param_3 = s_missing_locale_facet_006b0ef4;
        FUN_0060b365(&param_3);
        local_40[0] = &PTR_FUN_006515e4;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_40,&DAT_00685cd8);
      }
      piVar3 = DAT_0070faf4;
      if (DAT_0070faf4 == (int *)0x0) {
        local_24 = operator_new(8);
        local_8._0_1_ = 3;
        if (local_24 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_005e7af0(0);
        }
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_005e90e0(uVar2);
        DAT_0070faf4 = piVar3;
      }
    }
    local_8._0_1_ = 0;
    if ((local_20 != (facet *)0x0) &&
       (pfVar4 = std::locale::facet::_Decref(local_20), pfVar4 != (facet *)0x0)) {
      (*(code *)**(undefined4 **)pfVar4)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (param_1 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*param_1 + 4) + (int)param_1;
    }
    local_24 = (void *)CONCAT31(local_24._1_3_,
                                *(undefined1 *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1));
    local_34 = local_34 & 0xffffff00;
    puVar5 = (undefined4 *)
             (**(code **)(*piVar3 + 0xc))
                       (&param_2,local_34,
                        *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28),iVar7,local_24
                        ,param_2,param_3);
    local_30 = puVar5[1];
    uVar6 = local_1c;
    if ((char)*puVar5 != '\0') {
      local_1c = 4;
      piVar3 = (int *)FUN_005fb73e();
      return piVar3;
    }
  }
  local_8 = 0;
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar6;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar6 = uVar6 | 4;
    }
    FUN_005fe7e4(uVar6,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_00600c43();
  if ((cVar1 == '\0') &&
     (iVar7 = *(int *)(*param_1 + 4), (*(byte *)((int)param_1 + iVar7 + 0xc) & 2) != 0)) {
    uVar6 = 0;
    if (((*(byte *)((int)param_1 + iVar7 + 4) & 6) == 0) &&
       (iVar7 = (**(code **)(**(int **)((int)param_1 + iVar7 + 0x28) + 0x2c))(), iVar7 == -1)) {
      uVar6 = 4;
    }
    if (uVar6 != 0) {
      uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar6;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar6 = uVar6 | 4;
      }
      FUN_005fe7e4(uVar6,0);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}

