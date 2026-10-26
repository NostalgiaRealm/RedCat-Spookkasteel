/*
 * FUN_0040ed77 at 0040ed77
 * undefined __register FUN_0040ed77(void)
 * Address ranges: 0040ed77-0040ed97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ed77(void)

{
  int *piVar1;
  char cVar2;
  char *unaff_EBX;
  int unaff_EBP;
  char *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    cVar2 = *unaff_EBX;
    if (cVar2 == '\0') {
      if (*(int *)(unaff_EBP + -0x24) <= *(int *)(unaff_EBP + -0x20)) goto LAB_0040edd9;
      goto LAB_0040eda8;
    }
  }
  else {
    if (-1 < *(int *)(unaff_EBP + -0x28)) {
      do {
        FUN_0040ed98();
        piVar1 = (int *)(unaff_EBP + -0x28);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      FUN_0040ed98();
      return;
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    if (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + -0x24)) goto LAB_0040edd9;
LAB_0040eda8:
    cVar2 = '0';
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    *(ushort *)unaff_EDI = CONCAT11(cVar2,DAT_005734fb);
  }
  else {
    *unaff_EDI = cVar2;
    if (((*(char *)(unaff_EBP + -8) != '\0') && (1 < *(int *)(unaff_EBP + -0x24))) &&
       ((char)((ushort)*(int *)(unaff_EBP + -0x24) % 3) == '\x01')) {
      unaff_EDI[1] = DAT_005734fa;
    }
  }
LAB_0040edd9:
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + -1;
  return;
}

