/*
 * FUN_00420398 at 00420398
 * undefined __register FUN_00420398(int * param_1)
 * Address ranges: 00420398-00420476;0042047e-00420482
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420398(int *param_1)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  HPALETTE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1[0x16] != 0) {
    puStack_14 = (undefined1 *)0x4203b6;
    FUN_0041caa8((int)param_1);
    puStack_18 = &LAB_00420477;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_00421648(param_1[0x16]);
    FUN_00420214(*(int *)(*(int *)(param_1[0x16] + 0x20) + 8));
    FUN_00421798(param_1[0x16]);
    hdc = CreateCompatibleDC((HDC)0x0);
    pvVar1 = *(HGDIOBJ *)(*(int *)(param_1[0x16] + 0x20) + 8);
    if (pvVar1 == (HGDIOBJ)0x0) {
      param_1[0x17] = 0;
    }
    else {
      pvVar1 = SelectObject(hdc,pvVar1);
      param_1[0x17] = (int)pvVar1;
    }
    pHVar2 = *(HPALETTE *)(*(int *)(param_1[0x16] + 0x20) + 0x10);
    if (pHVar2 == (HPALETTE)0x0) {
      param_1[0x18] = 0;
    }
    else {
      pHVar2 = SelectPalette(hdc,pHVar2,-1);
      param_1[0x18] = (int)pHVar2;
      RealizePalette(hdc);
    }
    FUN_0041cfec(param_1,(int)hdc);
    FUN_0041279c(DAT_0056f64c,(int)param_1);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x42047e;
    puStack_18 = (undefined1 *)0x420476;
    FUN_0041ce40((int)param_1);
    return;
  }
  return;
}

