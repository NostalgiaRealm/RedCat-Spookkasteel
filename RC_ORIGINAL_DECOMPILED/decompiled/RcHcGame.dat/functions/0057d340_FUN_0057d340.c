/*
 * FUN_0057d340 at 0057d340
 * undefined FUN_0057d340(void)
 * Address ranges: 0057d340-0057d41a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057d340(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006420e4;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x130);
  local_4 = 2;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  iVar2 = *(int *)(param_1 + 0x100);
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
    FUN_0057d310();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

