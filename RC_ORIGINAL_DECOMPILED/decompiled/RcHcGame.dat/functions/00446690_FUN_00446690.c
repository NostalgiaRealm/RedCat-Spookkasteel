/*
 * FUN_00446690 at 00446690
 * undefined FUN_00446690(void)
 * Address ranges: 00446690-00446740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64cd84 slot 2 for .?AVCRcWeaponMagicBall@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64cd84 slot 2 for
   .?AVCRcWeaponMagicBall@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00446690(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iStack_24;
  int iStack_20;
  undefined1 local_c [12];
  
  FUN_0044c760(param_2);
  if (param_1[0x93] != 0) {
    piVar1 = (int *)(param_1[0x93] + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_004142f0();
  iVar2 = FUN_0049bc80();
  iVar2 = *(int *)(iVar2 + 8);
  puVar3 = local_c;
  (**(code **)(*param_1 + 0x48))(puVar3);
  FUN_005b2fe0(puVar3);
  FUN_005b2f20();
  FUN_005b2fa0(DAT_006b62b0);
  param_1[0x8d] = iVar2;
  param_1[0x8e] = iStack_24;
  param_1[0x8f] = iStack_20;
  return;
}

