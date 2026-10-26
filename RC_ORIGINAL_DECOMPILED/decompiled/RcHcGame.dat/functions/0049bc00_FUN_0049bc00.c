/*
 * FUN_0049bc00 at 0049bc00
 * undefined FUN_0049bc00(void)
 * Address ranges: 0049bc00-0049bc75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049bc00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined1 local_3c [32];
  undefined4 auStack_1c [3];
  undefined1 auStack_10 [16];
  
  FUN_004247e0();
  FUN_005b4a80();
  (**(code **)(*param_1 + 0x48))(local_3c);
  FUN_005b2fe0(auStack_10);
  FUN_005b2fe0(auStack_1c);
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_retaddr = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_retaddr = unaff_retaddr + 1;
  }
  return;
}

