/*
 * FUN_00420504 at 00420504
 * undefined __register FUN_00420504(int param_1)
 * Address ranges: 00420504-0042054e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ac44 slot 0 for TBitmapImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ac44 slot 0 for
   TBitmapImage. Original bytes unchanged; names and types still inferred. */

void FUN_00420504(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x14))) {
    FUN_00420214(iVar1);
    DeleteObject(*(HGDIOBJ *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00420214(*(int *)(param_1 + 0xc));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_0041aea0(*(HGDIOBJ *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

