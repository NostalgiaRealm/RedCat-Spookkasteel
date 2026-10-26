/*
 * FUN_006070ba at 006070ba
 * undefined FUN_006070ba(void)
 * Address ranges: 006070ba-00607104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006070ba(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070febc;
  iVar1 = *(int *)(DAT_0070febc + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0070febc + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0070febc = 0;
  ExceptionList = unaff_retaddr;
  return;
}

