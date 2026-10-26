/*
 * FUN_00409f04 at 00409f04
 * undefined * __register FUN_00409f04(undefined * param_1)
 * Address ranges: 00409f04-00409f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_00409f04(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00404030((int)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1 + iVar1 + -1;
    uVar2 = FUN_0040d830(param_1,iVar1);
    if ((char)uVar2 == '\x02') {
      puVar3 = puVar3 + -1;
    }
  }
  return puVar3;
}

