/*
 * FUN_00605cd2 at 00605cd2
 * undefined FUN_00605cd2(void)
 * Address ranges: 00605cd2-00605d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00605cd2(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar2 = DAT_0070fe48;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    DAT_0070fe48 = DAT_0070fc04;
    iVar2 = DAT_0070fc04;
  }
  iVar2 = FUN_005feb94(iVar2,1);
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      cVar1 = FUN_005febd3();
      if (cVar1 != '\0') {
        if (DAT_0070fe60 == 0) {
          pvVar3 = operator_new(0x18);
          *(void **)(unaff_EBP + 0x10) = pvVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (pvVar3 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_006068fb(0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0070fe60 = FUN_00606b7f(uVar4);
        }
        goto LAB_00605d55;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_006b0ef4;
    FUN_0060b365(unaff_EBP + 0x10);
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_006515e4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00685cd8);
  }
LAB_00605d55:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

