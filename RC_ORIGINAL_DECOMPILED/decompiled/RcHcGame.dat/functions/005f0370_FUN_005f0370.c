/*
 * FUN_005f0370 at 005f0370
 * undefined FUN_005f0370(void)
 * Address ranges: 005f0370-005f03e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f0370(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647823;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_LAB_00650d6c;
    puVar1[1] = uVar2;
    local_4 = 1;
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    puVar1[2] = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_FUN_00650d08;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}

