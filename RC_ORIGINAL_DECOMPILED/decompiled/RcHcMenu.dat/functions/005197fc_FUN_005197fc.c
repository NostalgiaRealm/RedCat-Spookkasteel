/*
 * FUN_005197fc at 005197fc
 * uint __register FUN_005197fc(int * param_1, WPARAM param_2)
 * Address ranges: 005197fc-0051982a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005197fc(int *param_1,WPARAM param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = FUN_00519a90(param_1,param_2);
  if (bVar1) {
    iVar2 = FUN_005199dc(param_1,param_2);
    return CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 8));
  }
  uVar3 = FUN_005191cc();
  return uVar3;
}

