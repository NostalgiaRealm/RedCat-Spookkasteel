/*
 * FUN_005f3c30 at 005f3c30
 * undefined FUN_005f3c30(void)
 * Address ranges: 005f3c30-005f3cc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x6510f0; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x6510f0; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f3c30(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ef8;
  pvStack_c = ExceptionList;
  if (param_1[0xf] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x10] - param_1[0xf] >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_005ecba0(local_2c,iVar2);
  local_4 = 0;
  FUN_005f92e0(local_2c);
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    iVar2 = param_1[0xb];
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc) + param_1[0xb];
  }
  FUN_005ec390(iVar2);
  FUN_005f9360(local_2c);
                    /* WARNING: Could not recover jumptable at 0x005f3cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f3d64)[param_1[8] + -1])();
  return;
}

