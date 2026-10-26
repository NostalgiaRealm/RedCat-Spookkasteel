/*
 * FUN_0060ea4c at 0060ea4c
 * undefined FUN_0060ea4c(void)
 * Address ranges: 0060ea4c-0060ea98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0060ea4c(byte *param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  while( true ) {
    if (DAT_006b28bc < 2) {
      uVar1 = (byte)PTR_DAT_006b26b0[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = FUN_0060e0ee(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar5 = 0;
  uVar4 = 0;
  sVar2 = _strlen((char *)param_1);
  iVar3 = FUN_0061cc14(param_1,sVar2,uVar4,uVar5);
  return (float10)*(double *)(iVar3 + 0x10);
}

