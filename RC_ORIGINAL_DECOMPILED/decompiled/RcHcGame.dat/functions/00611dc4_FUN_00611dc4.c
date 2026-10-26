/*
 * FUN_00611dc4 at 00611dc4
 * undefined FUN_00611dc4(void)
 * Address ranges: 00611dc4-00611e26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00611dc4(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_00710054;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_00710054 = DAT_00710054 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_00611ded:
    if (cVar2 == '@') {
      cVar2 = *DAT_00710054;
      DAT_00710054 = DAT_00710054 + 1;
      if (cVar2 != '@') {
LAB_00611e23:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00611e23;
      DAT_00710054 = DAT_00710054 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_00710054;
      goto LAB_00611ded;
    }
  }
  return 0;
}

