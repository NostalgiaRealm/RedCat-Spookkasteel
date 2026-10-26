/*
 * FUN_00609c9d at 00609c9d
 * undefined FUN_00609c9d(void)
 * Address ranges: 00609c9d-00609ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00609c9d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  FUN_0060eb4c();
  uVar2 = DAT_0070ff0c;
  iVar1 = *(int *)(DAT_0070ff0c + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0070ff0c + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0070ff0c = 0;
  ExceptionList = unaff_retaddr;
  return;
}

