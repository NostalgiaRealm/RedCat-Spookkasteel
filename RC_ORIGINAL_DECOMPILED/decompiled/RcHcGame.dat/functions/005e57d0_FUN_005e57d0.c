/*
 * FUN_005e57d0 at 005e57d0
 * undefined FUN_005e57d0(void)
 * Address ranges: 005e57d0-005e5998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e57d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  facet *pfVar6;
  undefined1 *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar8;
  undefined4 extraout_ECX_02;
  undefined4 uVar9;
  undefined1 *puStack_38;
  undefined1 uStack_21;
  uint local_20;
  facet *local_1c;
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646763;
  pvStack_c = ExceptionList;
  puStack_38 = (undefined1 *)0x5e57f7;
  ExceptionList = &pvStack_c;
  FUN_005e5a60();
  local_4 = 1;
  if (DAT_0070fc0c == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    DAT_0070fc0c = DAT_0070fc04;
  }
  puStack_38 = (undefined1 *)DAT_0070fc0c;
  iVar4 = FUN_005feb94();
  uVar9 = extraout_ECX;
  if (iVar4 == 0) {
    cVar3 = FUN_005febd3();
    if (cVar3 == '\0') {
      puStack_38 = (undefined1 *)0x5e598a;
      FUN_005e59a0();
      puStack_38 = local_18;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    iVar4 = DAT_0070faec;
    uVar9 = extraout_ECX_00;
    if (DAT_0070faec == 0) {
      puStack_38 = (undefined1 *)0x5e5847;
      local_1c = operator_new(0x10);
      local_4._0_1_ = 2;
      if (local_1c != (facet *)0x0) {
        puStack_38 = (undefined1 *)0x5e5860;
        FUN_005e5b80();
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      puStack_38 = (undefined1 *)0x5e586f;
      iVar4 = FUN_005e5c90();
      uVar9 = extraout_ECX_01;
      DAT_0070faec = iVar4;
    }
  }
  *(int *)(param_1 + 0x38) = iVar4;
  local_4 = 0xffffffff;
  if (local_20 != 0) {
    iVar4 = *(int *)(local_20 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(local_20 + 4) = iVar4 + -1;
    }
    puVar8 = (undefined4 *)(~-(uint)(*(int *)(local_20 + 4) != 0) & local_20);
    uVar9 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      puStack_38 = (undefined1 *)0x5e58b0;
      (**(code **)*puVar8)();
      uVar9 = extraout_ECX_02;
    }
  }
  puVar1 = (uint *)(param_1 + 0x4c);
  local_1c = (facet *)&puStack_38;
  puStack_38 = (undefined1 *)uVar9;
  FUN_005e5a40(puVar1);
  puVar5 = (uint *)FUN_005e5ac0(&local_1c);
  uVar2 = *puVar1;
  local_4 = 3;
  if (uVar2 != *puVar5) {
    iVar4 = *(int *)(uVar2 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar2 + 4) = iVar4 + -1;
    }
    puVar8 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar8 != (undefined4 *)0x0) {
      puStack_38 = (undefined1 *)0x5e5906;
      (**(code **)*puVar8)();
    }
    *puVar1 = *puVar5;
    FUN_005e5a30();
  }
  local_4 = 0xffffffff;
  if ((local_1c != (facet *)0x0) &&
     (pfVar6 = std::locale::facet::_Decref(local_1c), pfVar6 != (facet *)0x0)) {
    puStack_38 = (undefined1 *)0x5e5932;
    (*(code *)**(undefined4 **)pfVar6)();
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 4))();
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    puStack_38 = (undefined1 *)0x5e594d;
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar7 + 4) = 0;
      *puVar7 = uStack_21;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
    }
    *(undefined1 **)(param_1 + 0x44) = puVar7;
  }
  ExceptionList = pvStack_c;
  return;
}

