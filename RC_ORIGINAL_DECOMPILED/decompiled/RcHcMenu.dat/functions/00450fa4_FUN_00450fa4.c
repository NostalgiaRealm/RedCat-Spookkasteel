/*
 * FUN_00450fa4 at 00450fa4
 * bool __register FUN_00450fa4(int param_1, LPMSG param_2)
 * Address ranges: 00450fa4-00450ff1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00450fa4(int param_1,LPMSG param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x38);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x217) == '\x02')) &&
      (*(int *)(DAT_005737d8 + 0x60) != 0)) &&
     (*(char *)(*(int *)(DAT_005737d8 + 0x60) + 0x217) == '\x01')) {
    BVar2 = TranslateMDISysAccel(*(HWND *)(iVar1 + 0x23c),param_2);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}

