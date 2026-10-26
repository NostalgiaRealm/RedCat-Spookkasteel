/*
 * FUN_005fecac at 005fecac
 * undefined FUN_005fecac(void)
 * Address ranges: 005fecac-005fecf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fecac(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070fc00;
  if (DAT_0070fc00 != 0) {
    iVar1 = *(int *)(DAT_0070fc00 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(DAT_0070fc00 + 4) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = unaff_retaddr;
  return;
}

