/*
 * FUN_00606e62 at 00606e62
 * undefined FUN_00606e62(void)
 * Address ranges: 00606e62-00606eac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00606e62(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070fe9c;
  iVar1 = *(int *)(DAT_0070fe9c + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0070fe9c + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0070fe9c = 0;
  ExceptionList = unaff_retaddr;
  return;
}

