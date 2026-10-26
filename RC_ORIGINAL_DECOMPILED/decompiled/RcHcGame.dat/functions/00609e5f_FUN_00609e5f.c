/*
 * FUN_00609e5f at 00609e5f
 * undefined FUN_00609e5f(void)
 * Address ranges: 00609e5f-00609ea9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00609e5f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070ff24;
  iVar1 = *(int *)(DAT_0070ff24 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0070ff24 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0070ff24 = 0;
  ExceptionList = unaff_retaddr;
  return;
}

