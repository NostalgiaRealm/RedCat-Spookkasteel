/*
 * FUN_0060fe2a at 0060fe2a
 * undefined FUN_0060fe2a(void)
 * Address ranges: 0060fe2a-0060fe6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060fe2a(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  DAT_0071000c = *(undefined4 *)(unaff_EBP + -0x1c);
  DAT_00710010 = *(undefined4 *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == unaff_EBX && (*(int *)(unaff_EBP + -0x2c) != unaff_EBX)))) {
    __abnormal_termination();
    FUN_0061005e();
  }
  return;
}

