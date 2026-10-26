/*
 * FUN_005f1310 at 005f1310
 * undefined FUN_005f1310(void)
 * Address ranges: 005f1310-005f139c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f1310(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647993;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_LAB_00650d6c;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    *puVar1 = &PTR_FUN_00650c54;
    local_4 = 1;
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
    puVar1[4] = uVar2;
    *puVar1 = &PTR_FUN_00650de4;
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    *puVar1 = &PTR_FUN_00650da8;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}

