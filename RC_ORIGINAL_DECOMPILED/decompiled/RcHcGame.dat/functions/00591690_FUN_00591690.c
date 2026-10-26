/*
 * FUN_00591690 at 00591690
 * undefined FUN_00591690(void)
 * Address ranges: 00591690-00591732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00591690(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643700;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064fefc;
  local_4 = 0;
  if ((undefined4 *)param_1[0x67] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x67])(1);
  }
  param_1[0x67] = 0;
  *param_1 = &PTR_FUN_0064c50c;
  local_4 = 1;
  DAT_006b93cc = DAT_006b93cc + -1;
  iVar1 = param_1[0x4f];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x4f] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = pvStack_c;
  return;
}

