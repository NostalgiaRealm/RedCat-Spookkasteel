/*
 * FUN_0040aa40 at 0040aa40
 * undefined __register FUN_0040aa40(undefined * param_1, int * param_2)
 * Address ranges: 0040aa40-0040aacd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040aa40(undefined *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined4 *local_108;
  undefined4 local_104 [64];
  
  puStack_114 = &stack0xfffffffc;
  local_108 = (undefined4 *)0x0;
  puStack_118 = &LAB_0040aace;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  iVar1 = FUN_00404030((int)param_1);
  if (0xe0 < iVar1) {
    FUN_00406a48((undefined4 *)PTR_PTR_005722a0,(int *)&local_108);
    FUN_00409594(local_108);
  }
  FUN_004041f4(param_1);
  uVar2 = FUN_0040eb0a((undefined1 *)local_104,(uint *)&stack0x00000004,'\0');
  FUN_00403e98(param_2,local_104,uVar2);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0040aad5;
  puStack_118 = (undefined1 *)0x40aacd;
  FUN_00403db0((int *)&local_108);
  return;
}

