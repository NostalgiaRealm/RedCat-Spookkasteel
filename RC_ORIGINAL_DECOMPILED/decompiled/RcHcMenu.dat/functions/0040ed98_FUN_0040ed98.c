/*
 * FUN_0040ed98 at 0040ed98
 * undefined __register FUN_0040ed98(void)
 * Address ranges: 0040ed98-0040eddc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ed98(void)

{
  char cVar1;
  char *unaff_EBX;
  int unaff_EBP;
  char *unaff_EDI;
  
  cVar1 = *unaff_EBX;
  if (cVar1 == '\0') {
    if (*(int *)(unaff_EBP + -0x24) <= *(int *)(unaff_EBP + -0x20)) goto LAB_0040edd9;
    cVar1 = '0';
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    *(ushort *)unaff_EDI = CONCAT11(cVar1,DAT_005734fb);
  }
  else {
    *unaff_EDI = cVar1;
    if (((*(char *)(unaff_EBP + -8) != '\0') && (1 < *(int *)(unaff_EBP + -0x24))) &&
       ((char)((ushort)*(int *)(unaff_EBP + -0x24) % 3) == '\x01')) {
      unaff_EDI[1] = DAT_005734fa;
    }
  }
LAB_0040edd9:
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + -1;
  return;
}

