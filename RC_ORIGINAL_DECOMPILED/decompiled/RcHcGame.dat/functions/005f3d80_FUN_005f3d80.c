/*
 * FUN_005f3d80 at 005f3d80
 * undefined FUN_005f3d80(void)
 * Address ranges: 005f3d80-005f3e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f3d80(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647f2f;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  if (param_1[0xf] != 0) {
    iVar2 = param_1[0x10] - param_1[0xf] >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_005ecba0(local_1c,iVar2);
  local_4 = 1;
  FUN_005f92e0(local_1c);
  cVar1 = (**(code **)(*param_1 + 0x44))();
  iVar2 = param_1[0xb];
  if (cVar1 != '\0') {
    iVar2 = iVar2 + *(int *)(param_3 + 0xc);
  }
  FUN_005ec390(iVar2);
  FUN_005f9360(local_1c);
                    /* WARNING: Could not recover jumptable at 0x005f3e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f3efc)[param_1[8] + -1])();
  return;
}

