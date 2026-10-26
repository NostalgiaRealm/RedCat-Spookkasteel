/*
 * FUN_00424360 at 00424360
 * int __register FUN_00424360(void)
 * Address ranges: 00424360-00424393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00424360(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0057372c != (code *)0x0) {
    iVar2 = (*DAT_0057372c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0042438c;
    }
  }
  bVar1 = 0;
LAB_0042438c:
  return -(uint)bVar1;
}

