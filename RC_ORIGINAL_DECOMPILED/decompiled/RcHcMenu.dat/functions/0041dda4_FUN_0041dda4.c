/*
 * FUN_0041dda4 at 0041dda4
 * undefined __register FUN_0041dda4(int * param_1, undefined4 param_2, int param_3, int * param_4, int * param_5)
 * Address ranges: 0041dda4-0041de8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041dda4(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  
  puStack_84 = (undefined1 *)0x41ddca;
  puVar1 = FUN_0040960c(param_3 << 4);
  puStack_88 = &LAB_0041e09b;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  (**(code **)(*param_1 + 4))(param_1,puVar1,param_3 << 4);
  if (*param_5 == 0 && param_5[1] == 0) {
    iVar2 = GetSystemMetrics(0xb);
    *param_4 = iVar2;
    iVar2 = GetSystemMetrics(0xc);
    param_4[1] = iVar2;
  }
  else {
    *param_4 = *param_5;
    param_4[1] = param_5[1];
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0041d268();
  }
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff68;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  *in_FS_OFFSET = uVar3;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

