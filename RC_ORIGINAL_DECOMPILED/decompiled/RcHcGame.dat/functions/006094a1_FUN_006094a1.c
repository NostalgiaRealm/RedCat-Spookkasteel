/*
 * FUN_006094a1 at 006094a1
 * undefined FUN_006094a1(void)
 * Address ranges: 006094a1-00609571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006094a1(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar2 = DAT_0070fee0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    DAT_0070fee0 = DAT_0070fc04;
    iVar2 = DAT_0070fc04;
  }
  iVar2 = FUN_005feb94(iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_005febd3();
      if (cVar1 != '\0') {
        if (DAT_0070fef0 == 0) {
          puVar3 = operator_new(8);
          *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[1] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *puVar3 = &PTR_FUN_00651a60;
            FUN_005ff4d6(&DAT_006a1624);
            FUN_005ff58f();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0070fef0 = FUN_00609b0f(puVar3);
        }
        goto LAB_0060953e;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_006b0ef4;
    FUN_0060b365(unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_006515e4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00685cd8);
  }
LAB_0060953e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

