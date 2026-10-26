/*
 * FUN_005e7570 at 005e7570
 * undefined FUN_005e7570(void)
 * Address ranges: 005e7570-005e75d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e7613) */
/* WARNING: Removing unreachable block (ram,0x005e761f) */
/* WARNING: Removing unreachable block (ram,0x005e7621) */

int * __thiscall FUN_005e7570(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006469e0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[1] = 0;
  cVar1 = FUN_005e7640(1);
  if (cVar1 != '\0') {
    local_8 = 0;
    iVar2 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x18))
                      (param_2,param_3);
    param_1[1] = param_1[1] + iVar2;
    if (iVar2 != param_3) {
      piVar3 = (int *)FUN_005e7601();
      return piVar3;
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}

