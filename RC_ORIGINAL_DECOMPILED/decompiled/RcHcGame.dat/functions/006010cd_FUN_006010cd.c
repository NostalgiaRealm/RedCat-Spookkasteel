/*
 * FUN_006010cd at 006010cd
 * undefined FUN_006010cd(void)
 * Address ranges: 006010cd-0060112b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_006010cd(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00651640;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00651634;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_0065163c;
  FUN_005feac4();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

