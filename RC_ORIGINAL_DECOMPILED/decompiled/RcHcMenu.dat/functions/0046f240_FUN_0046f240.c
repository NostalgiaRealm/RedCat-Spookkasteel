/*
 * FUN_0046f240 at 0046f240
 * undefined __register FUN_0046f240(int param_1, undefined * param_2)
 * Address ranges: 0046f240-0046f2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f240(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_10;
  undefined1 local_c;
  byte *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_24 = &LAB_0046f2b0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar2 = (int *)0x46f269;
  iVar1 = FUN_0046f2c0(param_1,param_2);
  if (iVar1 == 0) {
    piVar2 = FUN_0046f0ec(param_1);
    FUN_00406a48((undefined4 *)PTR_PTR_005720dc,(int *)&local_8);
    local_c = 0xb;
    local_10 = param_2;
    FUN_00466e30(local_8,&local_10,0,(int)piVar2);
  }
  *in_FS_OFFSET = piVar2;
  puStack_24 = &LAB_0046f2b7;
  uStack_28 = 0x46f2af;
  FUN_00403db0((int *)&local_8);
  return;
}

