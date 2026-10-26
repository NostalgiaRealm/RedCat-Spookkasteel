/*
 * FUN_005f7510 at 005f7510
 * undefined FUN_005f7510(void)
 * Address ranges: 005f7510-005f759f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f7510(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064858b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_LAB_00650d6c;
    puVar1[1] = uVar2;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    puVar1[2] = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_FUN_00650d08;
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    puVar1[5] = uVar2;
    *puVar1 = &PTR_FUN_0065134c;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}

