/*
 * FUN_00408790 at 00408790
 * undefined FUN_00408790(void)
 * Address ranges: 00408790-004087d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00408790(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00422d90();
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  FUN_004288c0(uVar3);
  FUN_00596860(uVar3);
  FUN_00428b40();
  iVar1 = **(int **)(param_1 + 0x30);
  iVar2 = FUN_004286d0();
  (**(code **)(iVar1 + 0x8c))(3,0,*(undefined4 *)(iVar2 + 0x28));
  return;
}

