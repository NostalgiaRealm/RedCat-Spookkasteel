/*
 * FUN_0056cdec at 0056cdec
 * undefined __register FUN_0056cdec(undefined4 param_1)
 * Address ranges: 0056cdec-0056ce7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056cdec(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_14 = &LAB_0056ce7e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = *(int *)PTR_DAT_005723fc;
  *(undefined **)(iVar1 + 0xbc) = &DAT_0056ca40;
  *(undefined1 **)(iVar1 + 0xb8) = &LAB_0056ce94;
  local_8 = param_1;
  FUN_0056ca70((int *)&local_c);
  FUN_00403e04(&DAT_00571fec,local_c);
  if (DAT_00571ff0 == 0) {
    DAT_00571ff0 = FUN_0056cc78((int *)&DAT_0056ca40,'\x01');
    piVar2 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX);
    FUN_0045c024(piVar2,0x56cc54);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0056ce85;
  puStack_14 = (undefined1 *)0x56ce7d;
  FUN_00403db0((int *)&local_c);
  return;
}

