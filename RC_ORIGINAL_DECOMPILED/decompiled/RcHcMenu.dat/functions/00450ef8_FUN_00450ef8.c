/*
 * FUN_00450ef8 at 00450ef8
 * undefined __register FUN_00450ef8(int param_1, uint * param_2)
 * Address ranges: 00450ef8-00450f70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00450ef8(int param_1,uint *param_2)

{
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_00450f71;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = *(char *)(param_1 + 0x94) == '\0';
  if ((bool)uVar1) {
    FUN_00403e04((int *)(param_1 + 0x7c),param_2);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_00450eb0(param_1,(int *)&local_8);
    FUN_00404140(local_8,param_2);
    if ((!(bool)uVar1) || (*(int *)(param_1 + 0x7c) != 0)) {
      lpString = FUN_004041f4((undefined *)param_2);
      SetWindowTextA(*(HWND *)(param_1 + 0x24),lpString);
      FUN_00403db0((int *)(param_1 + 0x7c));
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00450f78;
  puStack_18 = (undefined1 *)0x450f70;
  FUN_00403db0((int *)&local_8);
  return;
}

