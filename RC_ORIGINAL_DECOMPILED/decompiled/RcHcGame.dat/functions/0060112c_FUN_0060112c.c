/*
 * FUN_0060112c at 0060112c
 * undefined FUN_0060112c(void)
 * Address ranges: 0060112c-0060118a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0060112c(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00650a3c;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00651634;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_006515f4;
  FUN_005feac4();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

