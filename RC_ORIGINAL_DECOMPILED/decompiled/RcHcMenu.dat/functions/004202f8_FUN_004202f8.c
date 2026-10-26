/*
 * FUN_004202f8 at 004202f8
 * undefined __register FUN_004202f8(int * param_1)
 * Address ranges: 004202f8-0042038b;00420393-00420396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004202f8(int *param_1)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[1] != 0) {
    puStack_10 = (undefined1 *)0x420315;
    FUN_0041caa8((int)param_1);
    puStack_14 = &LAB_0042038c;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    if ((HGDIOBJ)param_1[0x17] != (HGDIOBJ)0x0) {
      puStack_10 = &stack0xfffffffc;
      SelectObject((HDC)param_1[1],(HGDIOBJ)param_1[0x17]);
    }
    if ((HPALETTE)param_1[0x18] != (HPALETTE)0x0) {
      SelectPalette((HDC)param_1[1],(HPALETTE)param_1[0x18],-1);
    }
    hdc = (HDC)param_1[1];
    FUN_0041cfec(param_1,0);
    DeleteDC(hdc);
    FUN_00412838(DAT_0056f64c,(int)param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x420393;
    puStack_14 = (undefined1 *)0x42038b;
    FUN_0041ce40((int)param_1);
    return;
  }
  return;
}

