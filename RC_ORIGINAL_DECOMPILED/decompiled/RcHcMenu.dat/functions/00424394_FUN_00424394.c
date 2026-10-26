/*
 * FUN_00424394 at 00424394
 * int __register FUN_00424394(void)
 * Address ranges: 00424394-004243bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00424394(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_00573730 != (code *)0x0) {
    iVar2 = (*DAT_00573730)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_004243b4;
    }
  }
  bVar1 = 0;
LAB_004243b4:
  return -(uint)bVar1;
}

