/*
 * FUN_005e7640 at 005e7640
 * undefined FUN_005e7640(void)
 * Address ranges: 005e7640-005e7807;005e7831-005e78a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005e7640(int *param_1,char param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  void *pvVar5;
  facet *pfVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_28 [12];
  facet *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00646a0b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar8 = *(int *)(*param_1 + 4) + (int)param_1;
  ExceptionList = &local_10;
  local_18 = param_1;
  puVar3 = &stack0xffffffcc;
  if (*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) {
    piVar1 = *(int **)(iVar8 + 0x2c);
    ExceptionList = &local_10;
    puVar3 = &stack0xffffffcc;
    if (piVar1 != (int *)0x0) {
      uVar9 = 0;
      ExceptionList = &local_10;
      puVar3 = &stack0xffffffcc;
      if (((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) &&
         (ExceptionList = &local_10,
         iVar8 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))(),
         puVar3 = local_14, iVar8 == -1)) {
        uVar9 = 4;
      }
      local_14 = puVar3;
      FUN_005e4540(uVar9,0);
      puVar3 = local_14;
    }
    local_14 = puVar3;
    if ((param_2 == '\0') && ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 1) != 0)) {
      FUN_005e7380(&local_1c);
      local_8 = 1;
      uVar9 = FUN_005e7360();
      _param_2 = FUN_005feb94(uVar9,1);
      if (_param_2 == 0) {
        cVar4 = FUN_005febd3();
        if (cVar4 == '\0') {
          FUN_005e59a0(s_missing_locale_facet_006b0ef4);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_28,&DAT_00685cd8);
        }
        _param_2 = DAT_0070faf8;
        if (DAT_0070faf8 == 0) {
          pvVar5 = operator_new(0x18);
          local_8._0_1_ = 2;
          if (pvVar5 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005e78b0(0,0,0);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          DAT_0070faf8 = FUN_005e90b0(uVar9);
          _param_2 = DAT_0070faf8;
        }
      }
      local_8 = 0xffffffff;
      if ((local_1c != (facet *)0x0) &&
         (pfVar6 = std::locale::facet::_Decref(local_1c), pfVar6 != (facet *)0x0)) {
        (*(code *)**(undefined4 **)pfVar6)(1);
      }
      local_8 = 3;
      piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
      pbVar2 = *(byte **)piVar1[7];
      if ((pbVar2 == (byte *)0x0) || (pbVar2 + *(int *)piVar1[0xb] <= pbVar2)) {
        uVar7 = (**(code **)(*piVar1 + 0x10))();
      }
      else {
        uVar7 = (uint)*pbVar2;
      }
      while ((uVar7 != 0xffffffff &&
             ((*(byte *)(*(int *)(_param_2 + 0x10) + (uVar7 & 0xff) * 2) & 0x48) != 0))) {
        piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
        uVar7 = *(uint *)piVar1[7];
        if (uVar7 == 0) {
LAB_005e77ef:
          uVar7 = (**(code **)(*piVar1 + 0x14))();
        }
        else {
          iVar8 = *(int *)piVar1[0xb];
          if (iVar8 + uVar7 <= uVar7) goto LAB_005e77ef;
          *(int *)piVar1[0xb] = iVar8 + -1;
          pbVar2 = *(byte **)piVar1[7];
          *(byte **)piVar1[7] = pbVar2 + 1;
          uVar7 = (uint)*pbVar2;
        }
        if (uVar7 == 0xffffffff) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = FUN_005e7ad0();
        }
      }
      local_8 = 0xffffffff;
    }
    iVar8 = *(int *)(*param_1 + 4) + (int)param_1;
    puVar3 = local_14;
    if (*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  local_14 = puVar3;
  uVar7 = *(uint *)(iVar8 + 4) | 2;
  if (*(int *)(iVar8 + 0x28) == 0) {
    uVar7 = CONCAT31((int3)(*(uint *)(iVar8 + 4) >> 8),(char)uVar7) | 4;
  }
  uVar7 = FUN_005fe7e4(uVar7,0);
  ExceptionList = local_10;
  return uVar7 & 0xffffff00;
}

