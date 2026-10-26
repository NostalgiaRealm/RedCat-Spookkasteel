/*
 * FUN_00450f80 at 00450f80
 * bool __register FUN_00450f80(int param_1, LPMSG param_2)
 * Address ranges: 00450f80-00450fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00450f80(int param_1,LPMSG param_2)

{
  BOOL BVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    BVar1 = IsDialogMessageA(*(HWND *)(param_1 + 0xa0),param_2);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

