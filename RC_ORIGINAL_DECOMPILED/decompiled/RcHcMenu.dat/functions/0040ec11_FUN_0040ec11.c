/*
 * FUN_0040ec11 at 0040ec11
 * undefined __register FUN_0040ec11(void)
 * Address ranges: 0040ec11-0040ecbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ec11(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  char *unaff_ESI;
  char *pcVar6;
  
  *(char **)(unaff_EBP + -0x10) = unaff_ESI;
  iVar5 = 0x7fff;
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -8) = 0;
  *(undefined1 *)(unaff_EBP + -0xc) = 0;
  iVar3 = 0;
LAB_0040ec2b:
  do {
    cVar2 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    while (cVar2 != '#') {
      if (cVar2 == '0') {
        if (iVar3 < iVar5) {
          iVar5 = iVar3;
        }
        iVar4 = iVar3 + 1;
        iVar3 = iVar4;
        goto LAB_0040ec2b;
      }
      if (cVar2 == '.') {
        if (*(int *)(unaff_EBP + -0x18) == -1) {
          *(int *)(unaff_EBP + -0x18) = iVar3;
        }
        goto LAB_0040ec2b;
      }
      if (cVar2 == ',') {
        *(undefined1 *)(unaff_EBP + -8) = 1;
        goto LAB_0040ec2b;
      }
      pcVar6 = unaff_ESI;
      if ((cVar2 == '\'') || (cVar2 == '\"')) goto LAB_0040ec77;
      if ((cVar2 != 'E') && (cVar2 != 'e')) {
        if ((cVar2 == ';') || (cVar2 == '\0')) goto LAB_0040ec96;
        goto LAB_0040ec2b;
      }
      pcVar6 = unaff_ESI + 1;
      cVar2 = *unaff_ESI;
      if ((cVar2 == '-') || (unaff_ESI = pcVar6, cVar2 == '+')) {
        *(undefined1 *)(unaff_EBP + -0xc) = 1;
        do {
          unaff_ESI = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = unaff_ESI;
        } while (cVar2 == '0');
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
LAB_0040ec77:
  unaff_ESI = pcVar6 + 1;
  cVar1 = *pcVar6;
  if (cVar1 == cVar2) goto LAB_0040ec2b;
  pcVar6 = unaff_ESI;
  if (cVar1 == '\0') {
LAB_0040ec96:
    *(int *)(unaff_EBP + -0x14) = iVar3;
    if (*(int *)(unaff_EBP + -0x18) == -1) {
      *(int *)(unaff_EBP + -0x18) = iVar3;
    }
    iVar3 = *(int *)(unaff_EBP + -0x18) - iVar4;
    if (iVar3 != 0 && iVar4 <= *(int *)(unaff_EBP + -0x18)) {
      iVar3 = 0;
    }
    *(int *)(unaff_EBP + -0x20) = iVar3;
    iVar3 = *(int *)(unaff_EBP + -0x18) - iVar5;
    if (*(int *)(unaff_EBP + -0x18) < iVar5) {
      iVar3 = 0;
    }
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    return;
  }
  goto LAB_0040ec77;
}

