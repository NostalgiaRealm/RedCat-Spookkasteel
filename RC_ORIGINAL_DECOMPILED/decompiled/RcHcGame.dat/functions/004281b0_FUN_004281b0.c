/*
 * FUN_004281b0 at 004281b0
 * undefined FUN_004281b0(void)
 * Address ranges: 004281b0-0042824c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004281b0(int *param_1,int param_2,undefined1 **param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puStack_18;
  undefined4 *puStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00622cb8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puStack_14 = (undefined4 *)0x4281d8;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 != '\0') {
    puStack_14 = param_3;
    puStack_18 = (undefined1 *)param_3;
    param_3 = &puStack_18;
    FUN_00449760(&param_2);
    FUN_00423740();
    puStack_14 = &param_2;
    puStack_18 = (undefined1 *)0x428205;
    FUN_004282e0();
    puStack_18 = (undefined1 *)0x42820c;
    FUN_00596090();
    puStack_18 = (undefined1 *)0x428213;
    FUN_00596e50();
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    puStack_14 = (undefined4 *)0x0;
    puStack_18 = (undefined1 *)0x42823b;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

