/*
 * FUN_00432744 at 00432744
 * undefined __register FUN_00432744(int param_1, uint * param_2)
 * Address ranges: 00432744-00432798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432744(int param_1,uint *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  uVar2 = 1;
  puStack_18 = &LAB_00432799;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00432714(param_1,(int *)&local_8);
  FUN_00404140(local_8,param_2);
  if (!(bool)uVar2) {
    puVar1 = FUN_004041f4((undefined *)param_2);
    FUN_004326f0(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004327a0;
  puStack_18 = (undefined1 *)0x432798;
  FUN_00403db0((int *)&local_8);
  return;
}

