/*
 * FUN_005af950 at 005af950
 * undefined FUN_005af950(void)
 * Address ranges: 005af950-005afa45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005af950(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_006460b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  if (param_2 == 0) {
    ExceptionList = pvVar2;
    return param_1;
  }
  iVar3 = param_2;
  if (param_2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 4);
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar6 = puVar4;
  for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 **)(param_1 + 0xc) = puVar4 + param_2;
  if (iVar3 != 0) {
    *(undefined4 **)(param_1 + 4) = puVar4;
    *(undefined4 **)(param_1 + 8) = puVar4 + (*(int *)(param_1 + 8) - iVar3 >> 2);
    ExceptionList = local_c;
    return param_1;
  }
  *(undefined4 **)(param_1 + 4) = puVar4;
  *(undefined4 **)(param_1 + 8) = puVar4;
  ExceptionList = local_c;
  return param_1;
}

