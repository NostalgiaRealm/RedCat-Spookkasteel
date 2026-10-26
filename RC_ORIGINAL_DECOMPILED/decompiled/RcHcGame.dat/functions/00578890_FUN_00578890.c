/*
 * FUN_00578890 at 00578890
 * undefined FUN_00578890(void)
 * Address ranges: 00578890-00578942
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00578890(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00641a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064fa54;
  local_4 = 0;
  FUN_0060b25d(*(undefined4 *)(*(int *)param_1[0x43] + 0xd4));
  FUN_0060b25d(*(undefined4 *)(*(int *)param_1[0x43] + 0xd8));
  FUN_0060b25d(*(undefined4 *)param_1[0x43]);
  FUN_0060b25d(param_1[0x43]);
  iVar1 = param_1[0x44];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x44] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

