/*
 * FUN_0041d2bc at 0041d2bc
 * undefined __register FUN_0041d2bc(void)
 * Address ranges: 0041d2bc-0041d357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d2bc(void)

{
  DWORD DVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined4 *local_108;
  CHAR local_104 [256];
  
  puStack_110 = &stack0xfffffffc;
  local_108 = (undefined4 *)0x0;
  puStack_114 = &LAB_0041d358;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      FUN_00403fe0((int *)&local_108,local_104,0x100);
      piVar2 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_108);
      FUN_0040382c(piVar2);
      goto LAB_0041d33f;
    }
  }
  FUN_0041d268();
LAB_0041d33f:
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_0041d35f;
  puStack_114 = (undefined1 *)0x41d357;
  FUN_00403db0((int *)&local_108);
  return;
}

