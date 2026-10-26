/*
 * FUN_005f3f10 at 005f3f10
 * undefined FUN_005f3f10(void)
 * Address ranges: 005f3f10-005f3fbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f3f10(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_104 [80];
  undefined **local_b4;
  undefined4 local_ac;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647f8a;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_ac = 0;
  local_b4 = &PTR_FUN_00650ad4;
  local_4 = 0;
  if (param_1[0xf] != 0) {
    iVar2 = param_1[0x10] - param_1[0xf] >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_005ecba0(local_104,iVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005f92e0(local_104);
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    iVar2 = param_1[0xb];
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc) + param_1[0xb];
  }
  FUN_005ec390(iVar2);
  FUN_005f9360(local_104);
                    /* WARNING: Could not recover jumptable at 0x005f3fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f4258)[param_1[8] + -1])();
  return;
}

