/*
 * FUN_0060706f at 0060706f
 * undefined FUN_0060706f(void)
 * Address ranges: 0060706f-006070b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060706f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070feb8;
  iVar1 = *(int *)(DAT_0070feb8 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0070feb8 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0070feb8 = 0;
  ExceptionList = unaff_retaddr;
  return;
}

