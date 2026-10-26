/*
 * FUN_005e5260 at 005e5260
 * undefined FUN_005e5260(void)
 * Address ranges: 005e5260-005e5354
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e5260(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  facet *pfVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006466fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) = &PTR_LAB_00650a20;
  puVar1 = (undefined4 *)(param_1 + -0x54);
  *puVar1 = &PTR_FUN_0065164c;
  local_4 = 2;
  if ((*(char *)(param_1 + -0xc) != '\0') && (*(int *)(param_1 + -4) != 0)) {
    iVar3 = FUN_0060d30d(*(int *)(param_1 + -4));
    if (iVar3 == 0) {
      FUN_005e56d0(0,2);
    }
  }
  iVar3 = *(int *)(param_1 + -0x10);
  if (iVar3 != 0) {
    FUN_004040a0(1);
    FUN_005fe5f0(iVar3);
  }
  uVar2 = *(uint *)(param_1 + -8);
  local_4._0_1_ = 1;
  if (uVar2 != 0) {
    iVar3 = *(int *)(uVar2 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(uVar2 + 4) = iVar3 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  *puVar1 = &PTR_FUN_006515fc;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(facet **)(param_1 + -0x20) != (facet *)0x0) {
    pfVar4 = std::locale::facet::_Decref(*(facet **)(param_1 + -0x20));
    if (pfVar4 != (facet *)0x0) {
      (*(code *)**(undefined4 **)pfVar4)(1);
    }
  }
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -4 + (int)puVar1) = &PTR_FUN_0065163c;
  ExceptionList = pvStack_c;
  return;
}

