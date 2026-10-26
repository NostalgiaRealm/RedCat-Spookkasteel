/*
 * FUN_0040ad00 at 0040ad00
 * undefined __register FUN_0040ad00(ushort param_1, ushort param_2, ushort param_3, ushort param_4)
 * Address ranges: 0040ad00-0040ad64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ad00(ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  double local_c;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_0040ad65;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = FUN_0040ac90(param_1,param_2,param_3,&local_c,param_4);
  if (cVar1 == '\0') {
    FUN_00406a48((undefined4 *)PTR_PTR_00572314,(int *)&local_10);
    FUN_00409594(local_10);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040ad6c;
  puStack_24 = (undefined1 *)0x40ad64;
  FUN_00403db0((int *)&local_10);
  return;
}

