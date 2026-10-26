/*
 * FUN_0042ac60 at 0042ac60
 * undefined FUN_0042ac60(void)
 * Address ranges: 0042ac60-0042acfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042ac60(int *param_1,int param_2)

{
  int iVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00623098;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00422d30();
  if (param_1[0x5f] != 0) {
    FUN_004969a0();
    FUN_0042d270();
  }
  FUN_00457240(0);
  (**(code **)(*param_1 + 0x94))();
  pvStack_c = (void *)0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = unaff_ESI;
  return;
}

