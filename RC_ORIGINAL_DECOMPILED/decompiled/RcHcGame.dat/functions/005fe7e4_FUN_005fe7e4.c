/*
 * FUN_005fe7e4 at 005fe7e4
 * undefined FUN_005fe7e4(void)
 * Address ranges: 005fe7e4-005fe86f;005fe871-005fe87f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe7e4(void)

{
  uint uVar1;
  size_t sVar2;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str;
  
  FUN_0060eb4c();
  uVar1 = *(uint *)(unaff_EBP + 8) & 7;
  *(uint *)(extraout_ECX + 4) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 8) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar1 & 4) == 0) {
    _Str = "ios::failbit set";
    if ((uVar1 & 2) == 0) {
      _Str = "ios::eofbit set";
    }
  }
  else {
    _Str = "ios::badbit set";
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004040a0(0);
  sVar2 = _strlen(_Str);
  FUN_004040f0(_Str,sVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005fe880(unaff_EBP + -0x1c);
  *(undefined ***)(unaff_EBP + -0x38) = &PTR_FUN_00651464;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_00688d88);
}

