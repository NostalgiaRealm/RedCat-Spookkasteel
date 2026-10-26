/*
 * FUN_00482b2c at 00482b2c
 * undefined4 __register FUN_00482b2c(int * param_1, undefined * param_2, int param_3, int param_4, char param_5)
 * Address ranges: 00482b2c-00482ba5;00482bad-00482bfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00482b2c(int *param_1,undefined *param_2,int param_3,int param_4,char param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined4 local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_20 = (undefined1 *)0x482b43;
  local_c = param_2;
  local_8 = param_1;
  FUN_0046717c(param_1);
  if (param_3 != 0) {
    puStack_20 = (undefined1 *)0x482b4e;
    iVar2 = FUN_0041300c(param_3);
    if (0 < iVar2) {
      puStack_24 = (undefined1 *)0x482b58;
      puStack_20 = &stack0xfffffffc;
      local_14 = FUN_00482a0c();
      puStack_24 = &LAB_00482ba6;
      iStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_0047f5d8((int)local_8,local_14,param_3);
      iVar2 = local_14;
      uVar3 = thunk_FUN_00479a5f(local_14);
      FUN_0047fe48(uVar3);
      uVar4 = 0;
      *in_FS_OFFSET = iVar2;
      iStack_28 = 0x482bcd;
      if (param_5 == '\0') {
        uVar4 = thunk_FUN_00479a4d(&local_14);
      }
      return uVar4;
    }
  }
  puStack_20 = (undefined1 *)param_4;
  puStack_24 = (undefined1 *)0x482bb9;
  puStack_24 = FUN_004041f4(local_c);
  iStack_28 = 2;
  uVar3 = thunk_FUN_00479a6b(local_8[0x1c]);
  FUN_0047fe48(uVar3);
  if (param_4 == 0) {
    sVar1 = thunk_FUN_00479000(local_14);
    if (sVar1 != 0) {
      local_10 = 0;
    }
  }
  return local_10;
}

