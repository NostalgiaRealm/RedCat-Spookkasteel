/*
 * FUN_006063b5 at 006063b5
 * undefined FUN_006063b5(void)
 * Address ranges: 006063b5-00606477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006063b5(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar2 = DAT_0070fe38;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    DAT_0070fe38 = DAT_0070fc04;
    iVar2 = DAT_0070fc04;
  }
  iVar2 = FUN_005feb94(iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_005febd3();
      if (cVar1 != '\0') {
        if (DAT_0070fe84 == 0) {
          puVar3 = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            FUN_00606d6d(0,1);
            *puVar3 = &PTR_FUN_006516f4;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0070fe84 = FUN_00606cd5(puVar3);
        }
        goto LAB_00606444;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_006b0ef4;
    FUN_0060b365(unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_006515e4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00685cd8);
  }
LAB_00606444:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

