/*
 * FUN_005b1790 at 005b1790
 * undefined FUN_005b1790(void)
 * Address ranges: 005b1790-005b17dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1790(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = FUN_005a2060();
  if (DAT_006a915d == '\0') {
    puVar3 = &DAT_0069b75c;
  }
  else {
    DAT_006a915d = '\0';
    puVar3 = &DAT_006a91c8;
  }
  iVar2 = FUN_0060d46b(uVar1,puVar3);
  if (iVar2 != 0) {
    FUN_0060da09(iVar2,&DAT_006a14c8,param_1);
    FUN_0060d30d(iVar2);
  }
  return;
}

