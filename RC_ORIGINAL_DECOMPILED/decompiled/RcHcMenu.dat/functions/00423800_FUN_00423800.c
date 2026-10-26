/*
 * FUN_00423800 at 00423800
 * int __register FUN_00423800(void)
 * Address ranges: 00423800-00423830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00423800(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_005736b8 == 0) {
    FUN_004237a0();
  }
  if (DAT_005736bc != (code *)0x0) {
    iVar2 = (*DAT_005736bc)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0042382b;
    }
  }
  bVar1 = 0;
LAB_0042382b:
  return -(uint)bVar1;
}

