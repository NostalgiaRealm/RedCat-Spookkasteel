/*
 * FUN_00521934 at 00521934
 * undefined __register FUN_00521934(int * param_1)
 * Address ranges: 00521934-00521a39;00521a41-00521a56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521934(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52194b;
  local_8 = param_1;
  local_c = (int *)FUN_00449cd0((int *)&PTR_FUN_00519c54,'\x01',0);
  puStack_14 = &LAB_00521a57;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x52196d;
  puStack_10 = &stack0xfffffffc;
  FUN_00432744((int)local_c,(uint *)local_8[0x8f]);
  iVar1 = local_8[0x90] + 0x7fffffff;
  if (iVar1 == -1) {
    puStack_1c = (undefined1 *)0x521985;
    iVar1 = thunk_FUN_00402874(0xffffffff);
  }
  local_c[0x54] = iVar1 + -0x7fffffff;
  iVar1 = local_8[0x90] + 0x7fffffff;
  if (iVar1 == -1) {
    puStack_1c = (undefined1 *)0x5219ab;
    iVar1 = thunk_FUN_00402874(0xffffffff);
  }
  *(int *)(local_c[0xcf] + 0x150) = iVar1 + -0x7fffffff;
  puStack_1c = (undefined1 *)0x5219ca;
  FUN_0051a620((int)local_c,(int)local_8);
  puStack_1c = (undefined1 *)0x5219db;
  FUN_0051a0f0((int)local_c,*(byte *)(local_8 + 0x91));
  puStack_1c = (undefined1 *)0x5219e6;
  iVar1 = (**(code **)(*local_c + 0xd8))();
  if (iVar1 == 1) {
    puStack_1c = (undefined1 *)0x5219f1;
    uVar2 = FUN_00520c1c((int)local_8);
    puStack_1c = (undefined1 *)0x5219f6;
    FUN_005200dc(uVar2);
    puStack_1c = (undefined1 *)0x5219fe;
    FUN_005231cc((uint)local_8);
    puStack_20 = &LAB_00521a3a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0051ab1c((int)local_c,(int)local_8);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x521a41;
    puStack_20 = (undefined1 *)0x521a2c;
    piVar3 = (int *)FUN_00520c1c((int)local_8);
    puStack_20 = (undefined1 *)0x521a31;
    FUN_005200f8(piVar3);
    puStack_20 = (undefined1 *)0x521a39;
    FUN_00523060(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00521a5e;
  puStack_14 = (undefined1 *)0x521a56;
  FUN_00403094(local_c);
  return;
}

