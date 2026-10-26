/*
 * FUN_00484778 at 00484778
 * bool __register FUN_00484778(int * param_1)
 * Address ranges: 00484778-00484807;0048480f-0048481a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00484778(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *in_FS_OFFSET;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x484789;
  local_8 = param_1;
  FUN_00473130(param_1);
  puStack_10 = (undefined1 *)0x48479f;
  bVar2 = FUN_0047fc9c(local_8[0x5a],0x5050004,0xffffffff);
  if (bVar2) {
    puStack_14 = &LAB_00484808;
    iStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_18;
    iVar1 = local_8[0x5a];
    puStack_10 = &stack0xfffffffc;
    uVar3 = thunk_FUN_00479c8e(iVar1);
    FUN_0047fe48(uVar3);
    local_c = *(undefined4 *)(local_8[0x6e] + 0xc);
    *in_FS_OFFSET = iVar1;
    bVar2 = FUN_0047fc9c(local_8[0x5a],0x5050004,0);
    return bVar2;
  }
  return false;
}

