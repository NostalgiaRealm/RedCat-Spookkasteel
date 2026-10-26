/*
 * FUN_0042987c at 0042987c
 * undefined __register FUN_0042987c(int * param_1, int * param_2)
 * Address ranges: 0042987c-00429909;00429911-00429917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042987c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x429893;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  puStack_1c = (undefined1 *)0x4298a0;
  uVar2 = (**(code **)(*param_1 + 0xb8))();
  puStack_1c = (undefined1 *)0x4298ad;
  FUN_00403e98(param_2,(undefined4 *)0x0,uVar2);
  if (uVar2 != 0) {
    puStack_1c = (undefined1 *)0x4298b8;
    iVar3 = FUN_00432688((int)param_1);
    puStack_1c = (undefined1 *)0x4298be;
    piVar4 = FUN_0040a360(iVar3 + 1);
    puStack_20 = &LAB_0042990a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    iVar3 = FUN_0040a374((int)piVar4);
    FUN_00432698((int)param_1,piVar4,iVar3);
    FUN_00402944((undefined4 *)((int)piVar4 + iVar1),(undefined4 *)*param_2,uVar2);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x429911;
    puStack_20 = (undefined1 *)0x429909;
    FUN_0040a3ac((int)piVar4);
    return;
  }
  return;
}

