/*
 * FUN_00430780 at 00430780
 * bool __register FUN_00430780(uint param_1)
 * Address ranges: 00430780-004307ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00430780(uint param_1)

{
  LRESULT LVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_00573760 + 4) != 0) {
    LVar1 = FUN_00430688(*(HWND *)(DAT_00573760 + 8),param_1,DAT_00573760,
                         (undefined4 *)(DAT_00573760 + 0xc),*(int *)(DAT_00573760 + 4));
    bVar2 = LVar1 != 0;
  }
  return bVar2;
}

