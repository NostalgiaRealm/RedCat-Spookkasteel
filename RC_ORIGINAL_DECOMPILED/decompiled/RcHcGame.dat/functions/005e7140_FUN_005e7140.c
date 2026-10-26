/*
 * FUN_005e7140 at 005e7140
 * undefined FUN_005e7140(void)
 * Address ranges: 005e7140-005e7272;005e729c-005e735f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005e7140(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  facet *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined **local_44 [3];
  uint local_38 [2];
  char local_30;
  int *local_2c;
  void *local_24;
  facet *local_20;
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006469b3;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_1c = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  local_30 = FUN_005e6020();
  local_8 = 0;
  uVar7 = 0;
  local_2c = param_1;
  if (local_30 != '\0') {
    FUN_005e7380(&local_20);
    local_8._0_1_ = 2;
    uVar2 = FUN_005e7360();
    piVar3 = (int *)FUN_005feb94(uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_005febd3();
      if (cVar1 == '\0') {
        param_2 = s_missing_locale_facet_006b0ef4;
        FUN_0060b365(&param_2);
        local_44[0] = &PTR_FUN_006515e4;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_44,&DAT_00685cd8);
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
    local_38[0] = local_38[0] & 0xffffff00;
    uVar7 = *(int *)(*param_1 + 4) + (int)param_1;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_24 = (void *)(CONCAT31((int3)((uint)*(undefined4 *)
                                               (*(int *)(*param_1 + 4) + 0xc + (int)param_1) >> 8),
                                 *(undefined1 *)(uVar7 + 0x30)) & 0xeff);
    puVar5 = (undefined4 *)
             (**(code **)(*piVar3 + 0x14))
                       (local_38,local_38[0],*(undefined4 *)(uVar7 + 0x28),
                        -(uint)(param_1 != (int *)0x0) & uVar7,local_24,param_2);
    local_24 = (void *)puVar5[1];
    uVar7 = local_1c;
    if ((char)*puVar5 != '\0') {
      uVar7 = 4;
    }
  }
  local_8 = 0;
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar7;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_005fe7e4(uVar7,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_00600c43();
  if ((cVar1 == '\0') &&
     (iVar6 = *(int *)(*param_1 + 4), (*(byte *)((int)param_1 + iVar6 + 0xc) & 2) != 0)) {
    uVar7 = 0;
    if (((*(byte *)((int)param_1 + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)param_1 + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      uVar7 = 4;
    }
    if (uVar7 != 0) {
      uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar7;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar7 = uVar7 | 4;
      }
      FUN_005fe7e4(uVar7,0);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

