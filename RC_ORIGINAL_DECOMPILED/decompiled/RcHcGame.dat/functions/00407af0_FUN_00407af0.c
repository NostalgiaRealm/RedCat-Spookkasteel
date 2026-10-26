/*
 * FUN_00407af0 at 00407af0
 * undefined FUN_00407af0(void)
 * Address ranges: 00407af0-00407b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00407af0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00620358;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a848;
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)param_1[0xc] + 0xa8))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)param_1[0xc] + 0x9c))();
    if (*(int *)(iVar2 + 0x18) != 0) {
      (**(code **)(*(int *)param_1[0xc] + 0x8c))(0,0,0x7f7fffff);
    }
  }
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = pvStack_c;
  return;
}

