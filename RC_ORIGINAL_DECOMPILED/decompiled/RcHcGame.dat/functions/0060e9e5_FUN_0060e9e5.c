/*
 * FUN_0060e9e5 at 0060e9e5
 * undefined FUN_0060e9e5(void)
 * Address ranges: 0060e9e5-0060ea4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060e9e5(char *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  uVar1 = FUN_0061bc34(&DAT_006b2430);
  sVar2 = _strlen(param_1);
  sVar3 = FUN_0060d47e(param_1,1,sVar2,&DAT_006b2430);
  if (sVar3 == sVar2) {
    _DAT_006b2434 = _DAT_006b2434 + -1;
    if (_DAT_006b2434 < 0) {
      FUN_006107e4(10,&DAT_006b2430);
    }
    else {
      *DAT_006b2430 = 10;
      DAT_006b2430 = DAT_006b2430 + 1;
    }
    uVar4 = 0;
  }
  FUN_0061bcc1(uVar1,&DAT_006b2430);
  return uVar4;
}

