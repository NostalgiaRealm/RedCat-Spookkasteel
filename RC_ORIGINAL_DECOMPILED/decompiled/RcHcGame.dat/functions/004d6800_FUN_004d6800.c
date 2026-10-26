/*
 * FUN_004d6800 at 004d6800
 * undefined FUN_004d6800(void)
 * Address ranges: 004d6800-004d686c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_004d6800(int *param_1)

{
  undefined1 uVar1;
  undefined4 *unaff_retaddr;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  (**(code **)(*param_1 + 0x48))(local_18);
  uStack_28 = *unaff_retaddr;
  uStack_24 = unaff_retaddr[1];
  uStack_20 = unaff_retaddr[2];
  uVar1 = FUN_004d7390(&stack0xffffffcc,&uStack_28,auStack_10);
  (**(code **)(*param_1 + 0x4c))(&stack0xffffffcc);
  return uVar1;
}

