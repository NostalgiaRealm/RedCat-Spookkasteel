/*
 * FUN_00457d9c at 00457d9c
 * undefined __register FUN_00457d9c(int param_1)
 * Address ranges: 00457d9c-00457e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457d9c(int param_1)

{
  LPVOID pvVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00457e01;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pvVar1 = LockResource(*(HGLOBAL *)(param_1 + 8));
  *(LPVOID *)(param_1 + 0xc) = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    FUN_00457c08(DAT_00573860,2,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_00457aec,'\x01',local_8);
    FUN_0040382c(piVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00457e08;
  puStack_18 = (undefined1 *)0x457e00;
  FUN_00403db0((int *)&local_8);
  return;
}

