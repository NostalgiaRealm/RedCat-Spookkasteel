/*
 * FUN_005e9f10 at 005e9f10
 * undefined FUN_005e9f10(void)
 * Address ranges: 005e9f10-005e9fa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e9fe2) */
/* WARNING: Removing unreachable block (ram,0x005e9fee) */
/* WARNING: Removing unreachable block (ram,0x005e9ff0) */

undefined4 __fastcall FUN_005e9f10(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00646d40;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[1] = 0;
  cVar4 = FUN_005e7640(1);
  if (cVar4 == '\0') {
    ExceptionList = pvStack_10;
    return 0xffffffff;
  }
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  uVar5 = *(uint *)piVar1[7];
  if (uVar5 != 0) {
    iVar2 = *(int *)piVar1[0xb];
    if (uVar5 < iVar2 + uVar5) {
      *(int *)piVar1[0xb] = iVar2 + -1;
      pbVar3 = *(byte **)piVar1[7];
      *(byte **)piVar1[7] = pbVar3 + 1;
      uVar5 = (uint)*pbVar3;
      goto LAB_005e9f8e;
    }
  }
  uVar5 = (**(code **)(*piVar1 + 0x14))();
LAB_005e9f8e:
  if (uVar5 != 0xffffffff) {
    param_1[1] = param_1[1] + 1;
    uVar6 = FUN_005e9fcd();
    return uVar6;
  }
  uVar6 = FUN_005e9fcd();
  return uVar6;
}

