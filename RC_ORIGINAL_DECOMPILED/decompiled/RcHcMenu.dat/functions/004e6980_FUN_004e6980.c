/*
 * FUN_004e6980 at 004e6980
 * undefined __register FUN_004e6980(int * param_1, int * param_2, RECT * param_3)
 * Address ranges: 004e6980-004e6a80;004e6a88-004e6a8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 5 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 5 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6980(int *param_1,int *param_2,RECT *param_3)

{
  HDC hdc;
  HPALETTE hPal;
  HPALETTE hPal_00;
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  int *piStack_3c;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  HENHMETAFILE local_14;
  short local_10;
  
  if (param_1[8] != 0) {
    puStack_24 = (undefined1 *)0x4e69a3;
    FUN_0041caa8((int)param_2);
    puStack_28 = &LAB_004e6a81;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    hdc = (HDC)FUN_0041cf6c(param_2);
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    hPal_00 = (HPALETTE)0x0;
    if (hPal != (HPALETTE)0x0) {
      hPal_00 = SelectPalette(hdc,hPal,-1);
      RealizePalette(hdc);
    }
    (**(code **)(*(int *)param_1[8] + 0x14))();
    if (local_10 == 4) {
      piStack_3c = (int *)param_1[8];
      (**(code **)(*piStack_3c + 0xc))();
      PlayEnhMetaFile(hdc,local_14,param_3);
    }
    else {
      iVar1 = FUN_004e6b34((int)param_1);
      piStack_3c = (int *)-iVar1;
      FUN_004e6b50((int)param_1);
      FUN_004e6b34((int)param_1);
      uVar2 = (**(code **)(*(int *)param_1[8] + 0x20))();
      FUN_0045eb1c(uVar2);
    }
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal_00,-1);
    }
    *in_FS_OFFSET = piStack_3c;
    FUN_0041ce40((int)param_2);
    return;
  }
  return;
}

