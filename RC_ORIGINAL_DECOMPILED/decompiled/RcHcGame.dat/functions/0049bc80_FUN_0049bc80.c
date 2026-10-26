/*
 * FUN_0049bc80 at 0049bc80
 * undefined FUN_0049bc80(void)
 * Address ranges: 0049bc80-0049bce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049bc80(int *param_1)

{
  undefined4 unaff_ESI;
  undefined4 *unaff_retaddr;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_c [12];
  
  FUN_005b3000(&local_18);
  puVar1 = local_c;
  uVar2 = 0x3f000000;
  (**(code **)(*param_1 + 0x48))(puVar1,0x3f000000,&local_18);
  FUN_005b3020(puVar1,uVar2);
  *unaff_retaddr = unaff_ESI;
  unaff_retaddr[1] = local_18;
  unaff_retaddr[2] = uStack_14;
  return;
}

