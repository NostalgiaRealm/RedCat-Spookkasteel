/*
 * FUN_005f3780 at 005f3780
 * undefined FUN_005f3780(void)
 * Address ranges: 005f3780-005f3837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x651094; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x651094; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f3780(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  undefined1 auStack_24 [4];
  void *pvStack_20;
  uint uStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647e80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    iVar3 = param_1[0xb];
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc) + param_1[0xb];
  }
  uVar2 = FUN_005eca50(auStack_24,iVar3,param_1[8]);
  uStack_10 = 0;
  uVar2 = FUN_005f8990(&stack0xffffffb8,unaff_retaddr,uVar2,uStack_4);
  uStack_10 = CONCAT31(uStack_10._1_3_,1);
  FUN_005ec880(iVar3,uVar2);
  uStack_18 = uStack_18 & 0xffffff00;
  FUN_005e2f00();
  uStack_18 = 0xffffffff;
  FUN_005e2f00();
  ExceptionList = pvStack_20;
  return;
}

