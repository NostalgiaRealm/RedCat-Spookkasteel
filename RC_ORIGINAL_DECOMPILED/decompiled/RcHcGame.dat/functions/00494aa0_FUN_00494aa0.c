/*
 * FUN_00494aa0 at 00494aa0
 * undefined FUN_00494aa0(void)
 * Address ranges: 00494aa0-00494bf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00494aa0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062b819;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  local_4 = 3;
  ppvVar4 = &local_c;
  puVar5 = (undefined4 *)*puVar1;
  local_18 = param_1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_00499f30(&local_1c,puVar5);
    ppvVar4 = ExceptionList;
    puVar5 = puVar2;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_4._0_1_ = 2;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  puVar5 = (undefined4 *)*puVar1;
  while (puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_00499f30(&local_1c,puVar5);
    puVar5 = puVar2;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x30));
  iVar3 = local_18;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar1 = *(undefined4 **)(local_18 + 0x24);
  local_4._0_1_ = 1;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar5 = (undefined4 *)FUN_00499f70(local_14,0);
    FUN_00499f30(local_10,*puVar5);
  }
  FUN_005fe5f0(*(undefined4 *)(iVar3 + 0x24));
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  puVar1 = *(undefined4 **)(iVar3 + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar5 = (undefined4 *)FUN_00499f70(local_10,0);
    FUN_00499f30(local_14,*puVar5);
  }
  FUN_005fe5f0(*(undefined4 *)(iVar3 + 0x18));
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

